int main() {
    //try to mod
    int x = 5;
    const int MAX = 12;
    int &ref_x1 = x;
    const int &ref_x2 = x;

    //cannot modify ref_x2;
    ref_x1 = 10;

    //try to mod pointer
    int y = 10;
    const int *ptr1 = &x; //modifiable pointer to constant int
    int *const ptr2 = &x; //constant pointer to modifable int
    const int * const ptr3 = &x; //constant pointer to constant int

    //find which dec are valid
    const int *ptr4 = &MAX;
    const int *ptr5 = &MAX; //int *ptr4 = &MAX;

    const int &r1 = ref_x1;
    const int &r2 = ref_x2; //int &r2 = ref_x2;

    const int *&p_ref1 = ptr1; //int *&p_ref1 = ptr1;
    int *const &p_ref2 = ptr2; //const int *&p_ref2 = ptr2;

}