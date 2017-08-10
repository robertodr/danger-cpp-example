# Adapted from https://github.com/capistrano/danger/blob/master/Dangerfile
# Q: What is a Dangerfile, anyway? A: See http://danger.systems/

# ------------------------------------------------------------------------------
# Additional pull request data
# ------------------------------------------------------------------------------
pr_number = github.pr_json["number"]
pr_url = github.pr_json["_links"]["html"]["href"]
# Sometimes its a README fix, or something like that - which isn't relevant for
# including in a CHANGELOG for example
declared_trivial = github.pr_title.include? "#trivial"

# Just to let people know
warn("PR is classed as Work in Progress") if github.pr_title.include? "[WIP]"

# Ensure a clean commits history
if git.commits.any? { |c| c.message =~ /^Merge branch '#{github.branch_for_base}'/ }
  fail('Please rebase to get rid of the merge commits in this PR')
end

code_style_validation.check file_extensions: ['.hpp', '.cpp', '.h', '.cc'] 

commit_lint.check

lgtm.check_lgtm
