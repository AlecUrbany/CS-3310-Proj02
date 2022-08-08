int main(int public, int private)
{
    //2 random prime numbers
    double p = 3;
    double q = 7;
    double n = p*q;
    double count;
    double totient = (p-1)*(q-1);
 
    //public key
    //e stands for encrypt
    double public =2;
 
    //for checking co-prime which satisfies e>1
    while(public < totient)
    {
    count = greatestCommonDivisor(public,totient);
    if(count == 1)
        break;
    else
        public++;
    }
 
    //private key
    double private;
 
    //k can be any arbitrary value
    double k = 2;
 
    //choosing d such that it satisfies d*e = 1 + k * totient
    private = (1 + (k*totient))/public;
    double msg = 12;
    double cipher = pow(msg,public);
    double decipher = pow(cipher,private);
    cipher = fmod(cipher,n);
    decipher = fmod(decipher,n);
 
    printf("Message data = %lf",msg);
    printf("\np = %lf",p);
    printf("\nq = %lf",q);
    printf("\nn = pq = %lf",n);
    printf("\ntotient = %lf",totient);
    printf("\ne = %lf",public);
    printf("\nd = %lf",private);
    printf("\nEncrypted data = %lf",c);
    printf("\nOriginal Message Sent = %lf",m);
 
    return 0;
}

//Algorithm to find the greatest common divisor
int greatestCommonDivisor(int a, int b)
{
    int temp;
    while(1)
    {
        temp = a%b;
        if(temp==0)
        return b;
        a = b;
        b = temp;
    }
}
