from github import Github
import sys


g = Github("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")

file_path = sys.argv[1]
print(file_path, "...")
all_files = []

repo = g.get_user().get_repo("chat")



all_files = []
contents = repo.get_contents("")

while contents:
    file_content = contents.pop(0)    
    file = file_content
    all_files.append(str(file).replace('ContentFile(path="','').replace('")',''))


with open(file_path, 'r') as file:
    content = file.read()



# Upload to github
file_name = sys.argv[1].split("/")[-1]
git_prefix = ''
git_file = git_prefix + file_name
print("List of files : ", all_files)
if git_file in all_files:
    contents = repo.get_contents(git_file)
    default_branch = repo.default_branch
    repo.update_file(contents.path, "committing files", content, contents.sha, branch=default_branch)
    print(git_file + ' UPDATED')
else:
    default_branch = repo.default_branch
    commit_message = "adding new chat"
    # Create a file in the repository
    repo.create_file(git_file, commit_message, content, branch=default_branch)
    #repo.create_file(git_file, "committing files", content, branch="master")
    print(git_file + ' CREATED')