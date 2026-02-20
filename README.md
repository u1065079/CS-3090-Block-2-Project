-------------
Simple Encrypt

 Authored by Jacob Thomas Groneman, A.S.
 Written on February 19th, 2026
-------------

<h3>Functionality<h3>
This console program takes a lowercase input word
and outputs an encrypted equivalent word.

Each character in the word is used as
a random number generator's seed to generate
value, which is then clamped to a lowercase-
acceptable ASCII value & converted to a letter
& printed to the console.

The program terminates after a lowercase word is given
& converted, or if the input contains characters other
than lowercase values; an error outputs encouraging the
user to restart the program & try again with a lowercase word.

<h3>Building & Running the Program<h3>
the binary for Simple Encrypt can be built with the
included makeFile inside this repository through a
console application by running the command "make SimpleEncrypt".
Make sure that the command is run from
this repository location. This application can be manually
built directly with the command in the makeFile by running
it in a console application while in this repository. The
build instructions rely on the g++ compiler. Please ensure
that g++ is installed on your machine & that it is accessible
from the console when building this application. Typing ./SimpleEncrypt
from the console application where this repository is located will run 
the program. Please validate that the provided SimpleEncrypt.cpp & 
makeFile are located in this repository during the build process 
to avoid any errors in locating the files.

<h3>Limitations<h3>
This tool is registered under the GPL-3.0 license to
enable unlimited source code access, use, modification,
& distribution free of cost.

This promotes providing simple encryption education to
developers. Therefore, this application is limited to
being not proprietary among its creator & assumes no
intellectual property infringement claim can be made
from the creator regarding the product.

The license limits the application's creator from preventing others
from accessing, using, modifying, & distributing its code, granted
all alterations apply under the GPL-3.0 license.

The creator of this software is not liable for any damages that may 
occur arising from its use & guarantees zero warranty from its use.

<h3>Conditions<h3>
The GPL-3.0 license this application is registered under has expected 
requirements when utilizing this software in any purpose:

- Users must display the GPL-3.0 license & provide a copyright notice.
- Users must state any changes made to this supplied software.
- Users must disclose the source of this software.
- Users must use the GPL-3.0 license in their purpose.

<h3>Responsible Use Statement & Misuse Considerations<h3>
The GPL-3.0 license this application is registered under does not 
prevent 3rd parties in utilizing its code for any purpose whether it be 
harmless or malicious with intent. For example, the same encryption method
contained in this application can both be used for password encryption or 
network encryption to conceal incriminating information. Such considerations
are permissible according to the GPL-3.0 license, regardless of outcome.
Users of this software are therefore responsible for their own actions 
when using this product.
