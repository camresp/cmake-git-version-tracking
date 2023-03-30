#include "git.h"

bool git_IsPopulated() {
    return GIT_IS_POPULATED;
}
bool git_AnyUncommittedChanges() {
    return GIT_IS_DIRTY;
}
const char* git_AuthorName() {
    return GIT_AUTHOR_NAME;
}
const char* git_AuthorEmail() {
    return GIT_AUTHOR_EMAIL;
}
const char* git_CommitSHA1() {
    return GIT_HEAD_SHA1;
}
const char* git_CommitDate() {
    return GIT_COMMIT_DATE;
}
const char* git_CommitSubject() {
    return GIT_COMMIT_SUBJECT;
}
const char* git_CommitBody() {
    return GIT_COMMIT_BODY;
}
const char* git_Describe() {
    return GIT_DESCRIBE;
}
const char* git_Branch() {
    return GIT_BRANCH;
}
