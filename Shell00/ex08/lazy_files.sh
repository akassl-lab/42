echo 'Creating test files for clean up script'
mkdir sub

##Main Directory files
touch "./file1"
touch "./file2"
touch "./file3#"
touch "./~file4"
touch "./file5~"
touch "./#file6#"

##Sub Directory Files
touch "./sub/file7"
touch "./sub/file8#"
touch "./sub/#file9#"
touch "./sub/file10~"


echo 'A total of 10 test files has been created'
