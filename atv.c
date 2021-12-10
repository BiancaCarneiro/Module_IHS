#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/init.h>
#include <linux/kernel.h>
MODULE_LICENSE("Dual BSD/GPL");

static int recebido = -1; //Caso não seja recebido numero algum

module_param(recebido, int, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
MODULE_PARM_DESC(recebido,"Aqui recebemos o int");

static int inicializa(void){
    printk(KERN_INFO "criou\n");
    return 0;
}

static void finaliza(void){
    printk(KERN_INFO "%d", recebido);
    printk(KERN_INFO "fui\n");
}

module_init(inicializa);
module_exit(finaliza);