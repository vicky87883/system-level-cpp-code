#import <Foundation/Foundation.h>
int main(int argc,const char * argv[])
{
    @autoreleasepool{
        int age=30;
        float height=5.9f;
        double weight=70.5;
        char grade='A';
        BOOL isStudent = YES;
        NSLog(@"Age:%d",age);
        NSLog(@"Height:%.1f",height);
        NSLog(@"Weight:%.2f",weight);
        NSLog(@"Grade:%c",grade);
        NSLog(@"Is Student:%@",isStudent?@"YES":@"NO");
    }
    return 0;
}