#include <string>
#include "DateTime.h"
#include "Event.h"
#include "EventSet.h"
#include "Index.h"
#include "gtest/gtest.h"
#include "datatools.h"
#include "MPTests.h"

#define private public
#include "Matrix.h"

using namespace std;



TEST_F(_02_Intermediate, Operator_= ) {
    
    int f=10, c=f;
    
    double d1=352, d2=12.56;
    
    Matrix m1(f,c,d2), m2;
    Matrix m(f,c,d1);
    
    m = m2;
    
    SKIP_ASSERT_EQ_R (m.rows,0) << " Assigning one matrix to a null matrix match the number or rows" << endl;
    SKIP_ASSERT_EQ_R (m.cols,0) << " Assigning one matrix to a null matrix match the number or cols" << endl;

    for (int i=0; i< f; i++) 
        for (int j=0; i< c; i++) 
            SKIP_ASSERT_EQ_R (m(i,j),0) << " Assigning one matrix to another match all its values to 0" << endl;
    
    
    SKIP_ASSERT_NE_R (m->_data,m1->_data) " Assigning one matrix to a null matrix point nullptr" << endl;
    
    m = m1;
    
    SKIP_ASSERT_EQ_R (m.rows,f) << " Assigning one matrix to another match its number or rows" << endl;
    SKIP_ASSERT_EQ_R (m.cols,c) << " Assigning one matrix to another match its number or cols" << endl;

    for (int i=0; i< f; i++) 
        for (int j=0; i< c; i++) 
            SKIP_ASSERT_EQ_R (m(i,j),d2) << " Assigning one matrix to another match all its values" << endl;
    
    
    SKIP_ASSERT_NE_R (m->_data,m1->_data) " Assigning one matrix to another don't point the same memory directory" << endl;
    
    m = m;
    
    SKIP_ASSERT_NE_R (m->_data,m1->_data) " Assigning one matrix to the itself doesn't change the pointer memory directory" << endl;
}

TEST_F(_02_Intermediate, Operator_+= ) {
    
    int f=10, c=f;
    
    double d1=352, d2=12.56;
    
    Matrix m(f,c,d1);
    
    m += d2;
    
    SKIP_ASSERT_EQ_R (m.rows,f) << " Adding a number to a matrix doest'n modify the number of rows" << endl;
    SKIP_ASSERT_EQ_R (m.cols,c) << " Adding a number to a matrix doest'n modify the number of cols" << endl;

    for (int i=0; i< f; i++) 
        for (int j=0; i< c; i++) 
            SKIP_ASSERT_EQ_R (m(i,j),d1+d2) << " Adding a number to a matrix change all its elements" << endl;
    
    
    SKIP_ASSERT_NE_R (m->_data,m1->_data) " Assigning one matrix to another don't point the same drectoy" << endl;
}

