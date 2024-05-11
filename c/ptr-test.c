/* Type your code here, or load an example. */
#include<string.h>
#include<stdint.h>
#include<stdio.h>
#include<stdlib.h>
typedef char * sds;
// int my_log(v ,fmt){
//     printf("%s : %s the value is %fmt\n ",v);
// }
int square(int num) {
    return num * num;
}
int check_ptr(char * str){
    const char * pp2 = "gogo";
    char * str2;
    str = pp2 + strlen(pp2);
    if (str){
        // str1 = (char *)malloc(sizeof(char) * 100);
        do{
            // pp2++;
           printf(" ,pp2 is %c\n",*pp2);
        }while(*pp2++);
    
}
}

int check_double_ptr(uint16_t ** a,size_t n){
    uint16_t * str;
    uint16_t pp1 = 23344;
    str = &pp1;
    if (NULL == *a){
        *a = str;
    }
}

sds sdstrim(sds s, const char *cset) {
    char *start, *end, *sp, *ep;
    size_t len;

    sp = start = s;
    ep = end = s+strlen(s)-1;
    while(sp <= end && strchr(cset, *sp)) sp++;
    while(ep > sp && strchr(cset, *ep)) ep--;
    len = (sp > ep) ? 0 : ((ep-sp)+1);
    if (s != sp) memmove(s, sp, len);
    s[len] = '\0';
    return s;
    }
int ini (int * a){
    int * b;
    b = a;
    if(NULL != b)
    printf("b not initizalie ,value is %d\n",b);
}

struct person {
    char * name ;
    int age;
};

int stru(struct person* per ,char ** argv){
    struct person* human;
    char * para;
    human = per;
    para = argv[2];
    size_t stru_len = sizeof(human);
    if(stru_len)
      printf("stru have essit ,the name is %s,the age is %d\n",human->name,human->age);
    printf("second level pointer is %s\n",para);
    
}
struct __attribute__((__packed__)) sdshdr16 {
    uint16_t lens;
    uint16_t alloc;
    unsigned char flag;
    char buff[6];
};

int char_to_struct(const sds s){
    // struct sdshdr16 kk1 = {
    //     .lens = 9,
    //     .alloc = 12,
    //     .flag = 4
    // };
    // sds s2 = 
     char * adv = "baba:niyaoma";
    struct sdshdr16 * niuniu = (struct sdshdr16*)(adv);
    sds s1 = (sds)s;
    struct sdshdr16* _pwd;
    printf("the sdshdr lens is %d\n ",sizeof(struct sdshdr16));
    printf("before trim value is %s\n",s1);
    _pwd = (struct sdshdr16 *)s1;
    printf("1:the sdshdr lens is %c\n ",adv[-1]);
    size_t len = sizeof(_pwd);
    if(0 == len){
        printf("data of length is NULL\n");
        goto end;
    }
    else  
        printf("cast char * to struct is data of length is %d,%p\n",len,_pwd);
    
end:
    printf("before trim value is %s\n",s1);
    const char *newc = "Aka : 909";
    char * value;
    value = sdstrim(s1,newc);
    if (NULL != value)
        printf("after trim value is %s\n",value);
    

}
int main (){
    char  c[] = "aakk1223 ::";
    const char c_p1[] = "aka::apa:APA: :909";
    const char * str = "aakk :";
    printf("dafda\n");
    // char * value = (char *)malloc(sizeof(char)*1028);
    char return_value[1028];
    printf("dafda");
    sprintf(return_value,sdstrim(c,str));
    printf("dafda\n");
    printf("%s\n",return_value);
    int a  = 99;
    int * b = &a;
    ini(b);
    struct person kk = {
        .name = "kankan",
        .age = 18
    };
    char *para[] = {
        "GaGa hao",
        "C N M",
        "buyao - 'lai kankan'"
    };
    stru(&kk,para);
    char_to_struct(c_p1);
    char * pp1 = NULL;
    check_ptr(pp1);
    uint16_t * pp3 = NULL;
    check_double_ptr(&pp3,4);
    printf("pss double ptr is %d\n",*pp3);


}