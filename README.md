# CS-525-Summer
Assignments for CS 525
It is the first assignment for CS 525 summer class.
The first assignment is about to create a storage manager 
which s capable of reading blocks from a file on disk into 
memory and writing blocks from memory to a file on disk. 
The storage manager deals with pages (blocks) of fixed size (PAGE_SIZE). 
In addition to reading and writing pages from a file, 
it provides methods for creating, opening, and closing files.
The storage manager has to maintain several types of 
information for an open file: The number of total pages in the file, 
the current page position (for reading and writing), 
the file name, and a POSIX file descriptor or FILE pointer. 
In your implementation you should implement the interface described below. 

=======How to run the script======
