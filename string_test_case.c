#include <gtest/gtest.h>
#include "string.h"

// exercise 1

TEST(StringLength,MyTEst1)
{
    char word[]="Hello";
    int res;

    res=my_strlen(word);
    EXPECT_EQ(5,res);
}

TEST(StringLength,MyTEst2)
{
    char word[]="";
    int res;

    res=my_strlen(word);
    EXPECT_EQ(0,res);
}

TEST(StringLength,MyTEst3)
{
    char word[]="1234";
    int res;

    res=my_strlen(word);
    EXPECT_EQ(4,res);
}

TEST(StringLength,MyTEst4)
{
	char word[]="HELLOhihE";
	int res;

	res=my_strlen(word);
	EXPECT_EQ(9,res);
}

// exercise 2

TEST(ToUpperCase,MyTEst1)
{
	char word[]="HeLlo";
	char expword[]="HELLO";
	int res;

	res=str2upper(word);
	EXPECT_EQ(3,res);
	EXPECT_STREQ(expword,word);
}

TEST(ToUpperCase,MyTEst2)
{
	char word[]="";
	char expword[]="";
	int res;

	res=str2upper(word);
	EXPECT_EQ(0,res);
	EXPECT_STREQ(expword,word);
}

TEST(ToUpperCase,MyTEst3)
{
	char word[]="1234";
	char expword[]="1234";
	int res;

	res=str2upper(word);
	EXPECT_EQ(0,res);
	EXPECT_STREQ(expword,word);
}

TEST(ToUpperCase,MyTEst4)
{
	char word[]="HELLO";
	char expword[]="HELLO";
	int res;

	res=str2upper(word);
	EXPECT_EQ(0,res);
	EXPECT_STREQ(expword,word);
}

//exercise 3

TEST(ToLowerCase,MyTEst1)
{
	char word[]="HeLlo";
	char expword[]="hello";
	int res;

	res=str2lower(word);
	EXPECT_EQ(2,res);
	EXPECT_STREQ(expword,word);
}

TEST(ToLowerCase,MyTEst2)
{
	char word[]="AZaz";
	char expword[]="azaz";
	int res;

	res=str2lower(word);
	EXPECT_EQ(2,res);
	EXPECT_STREQ(expword,word);
}

TEST(ToLowerCase,MyTEst3)
{
	char word[]="1234";
	char expword[]="1234";
	int res;

	res=str2lower(word);
	EXPECT_EQ(0,res);
	EXPECT_STREQ(expword,word);
}

TEST(ToLowerCase,MyTEst4)
{
	char word[]="HELLO";
	char expword[]="hello";
	int res;

	res=str2lower(word);
	EXPECT_EQ(5,res);
	EXPECT_STREQ(expword,word);
}

//exercise 4

TEST(NumberTest,MyTEst1)
{
    char word[] ="HeLlo";
	char expword[]="HeLlo";
	int res;

	res=str_strip_numbers(word);
	EXPECT_EQ(5,res);
	EXPECT_STREQ(expword,word);
}

TEST(NumberTest,MyTEst2)
{
	char word[]="AZ123568az";
	char expword[]="AZaz";
	int res;

	res=str_strip_numbers(word);
	EXPECT_EQ(4,res);
	EXPECT_STREQ(expword,word);
}

TEST(NumberTest,MyTEst3)
{
	char word[]="1234";
	char expword[]="";
	int res;

	res=str_strip_numbers(word);
	EXPECT_EQ(0,res);
	EXPECT_STREQ(expword,word);
}

TEST(NumberTest,MyTEst4)
{
	char word[]="";
	char expword[]="";
	int res;

	res=str_strip_numbers(word);
	EXPECT_EQ(0,res);
	EXPECT_STREQ(expword,word);
}

//exercise 5

TEST(CpString,MyTest1)
{
	char worda[] ="HeLlo";
	char wordb[] ="";
	char expword[]="HeLlo";

	mystrcpy(worda,wordb);
	EXPECT_STREQ(expword,wordb);
}

TEST(CpString,MyTest2)
{
	char worda[] ="";
	char wordb[] ="";
	char expword[]="";

	mystrcpy(worda,wordb);
	EXPECT_STREQ(expword,wordb);
}

TEST(CpString,MyTest3)
{
	char worda[] ="HeLlo1234";
	char wordb[] ="";
	char expword[]="HeLlo1234";

	mystrcpy(worda,wordb);
	EXPECT_STREQ(expword,wordb);
}

///exercise 6

TEST(CompString,MyTest1)
{
	char worda[] ="HELLO";
	char wordb[] ="HELLO";
    int val = 0;

    val = mystrcmp(worda,wordb);
	EXPECT_EQ(val,0);
}

TEST(CompString,MyTest2)
{
	char worda[] ="Hel58";
	char wordb[] ="Helik";
	int val = 4;

	val =mystrcmp(worda,wordb);
    EXPECT_EQ(val,-4);
}

TEST(CompString,MyTest3)
{
	char worda[] ="HeLlo";
	char wordb[] ="HELLOsegnef";
	int val = 0;

	val =mystrcmp(worda,wordb);
    EXPECT_EQ(val,2);
}

TEST(CompString,MyTest4)
{
	char worda[] ="hello";
	char wordb[] ="helso";
	int val = 0;

	val =mystrcmp(worda,wordb);
    EXPECT_EQ(val,-4);
}

TEST(CompString,MyTest5)
{
	char worda[] ="helso";
	char wordb[] ="hello";
	int val = 0;

	val = mystrcmp(worda,wordb);
    EXPECT_EQ(val,4);
}
TEST(CompString,MyTest6)
{
	char worda[] ="so";
	char wordb[] ="hello";
	int val = 0;

	val = mystrcmp(worda,wordb);
    EXPECT_EQ(val,1);
}

//exercise 7

TEST(UplString,MyTest1)
{
	char string[] ="so";

	EXPECT_STREQ(string,strdupl(string));
}

TEST(UplString,MyTest2)
{
	char string[] ="Helo5462";

	EXPECT_STREQ(string,strdupl(string));
}



