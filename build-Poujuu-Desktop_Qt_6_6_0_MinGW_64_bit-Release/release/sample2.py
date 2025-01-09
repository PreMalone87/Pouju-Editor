from github import Github
import sys
import base64


g = Github("your git id")

file_path = sys.argv[1]
print(file_path, "...\n")
all_files = []

repo = g.get_user().get_repo("chat")



all_files = []
contents = repo.get_contents("")

while contents:
    file_content = contents.pop(0)    
    file = file_content
    all_files.append(str(file).replace('ContentFile(path="','').replace('")',''))



# Download from github
file_name = sys.argv[1].split("/")[-1]
git_prefix = ''
git_file = git_prefix + file_name

if git_file in all_files: 
    print("Chat file encountered ", file_name)
    contents = repo.get_contents(git_file)
    file_data = base64.b64decode(contents.content)
    print("contents is : ",file_data)
    default_branch = repo.default_branch
    with open(file_name, 'wb') as file:
        file.write(file_data)

    file.close()
    print(git_file + 'Downloaded')