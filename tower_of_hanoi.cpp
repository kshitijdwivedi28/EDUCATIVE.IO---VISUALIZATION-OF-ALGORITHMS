// You're given two helper functions.
// 1) moveDisk(fromPeg, toPeg);
//    It moves the top disk from the fromPeg to the toPeg.
// 2) getSparePeg(fromPeg, toPeg);
//    It returns the remaining peg.
void moveDisk(int fromPegId, int toPegId);
int getSparePeg(int peg1, int peg2);

#include <iostream>
void solveHanoi(int disks, int fromPeg, int toPeg) {

    if (disks == 1)
        moveDisk(fromPeg, toPeg);
    else
    {
        solveHanoi(disks-1, fromPeg, getSparePeg(fromPeg, toPeg));
        moveDisk(fromPeg, toPeg);
        solveHanoi(disks-1, getSparePeg(fromPeg, toPeg), toPeg);
    }

    return;
}
