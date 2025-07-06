#import<Foundation/Foundation.h>
int main(int argc,const char * argv[])
{
    @autoreleasepool{
        NSString *name=@"Vikram";
        float age=23.6;
        NSLog(@"My name is %@ and I am %.1f years old.",name,age);

    }
    return 0;
}