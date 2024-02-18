Welcome!

This repository serves as a resource for practicing C programming concepts. Its purpose is to solidify and improve understanding of the C programming language developed by Ritchie.

Information

The tasks cover practical aspects of C programming.
Various text editors, including vi, emacs, and vim, will be utilized to ensure compatibility.
All source files will be compiled on Ubuntu 20.04 LTS using gcc, employing the following options: -Wall -Werror -Wextra -pedantic -std=gnu89.
Each file ends with a newline character.
A README.md file is included at both the root of the repository and the root of the project folder, each containing descriptions.
Compilation should not produce any errors or warnings.
The code adheres to the Betty style, which is verified using betty-style.pl and betty-doc.pl.
More Information

Betty Linter

To run the Betty linter, follow these steps:

Navigate to the Betty repository.
Clone the repository to your local machine.
Change directory into the Betty directory.
Install the linter with sudo ./install.sh.
Copy the provided script into an editor:

#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done

Save the script, exit the file, and change permissions to apply to all users with chmod a+x betty.
Move the betty file into the /bin/ directory or another location in your $PATH with sudo mv betty /bin/.
You can now run the Betty linter by typing betty <filename>.

Repository Contents
0x00-hello_world
0x01-variables_if_else_while
0x02-functions_nested_loops
0x03-debugging
0x04-more_functions_nested_loops
0x05-pointers_arrays_strings
0x06-pointers_arrays_strings
