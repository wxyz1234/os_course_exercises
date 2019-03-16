#include <stdio.h>
unsigned int mem[32*1024];
unsigned int vaddr,pde_index,pte_index,offset;
unsigned int pde_valid,pte_valid,data;
unsigned int pde_addr,pte_addr,paddr;
int i,j,num;
int main() {
	freopen("data.txt","r",stdin);
	for (i=0;i<0x80;i++)
	{
		scanf("page %02x:",&j);
		for (j=0;j<32;j++)scanf("%02x",&mem[i*32+j]);
		scanf("\n");
	}
	fclose(stdin);
	freopen("question.txt","r",stdin);
	freopen("answer.txt","w",stdout);
	while (scanf("Virtual Address %04x\n",&vaddr)!=EOF)
	{
		pde_index=(vaddr & 0x7f00)>>10;
		pte_index=(vaddr & 0x03e0)>>5;
		offset=(vaddr & 0x001f);
		pde_valid=mem[544+pde_index]>>7;
		pde_addr=mem[544+pde_index]& 0x7f;
		printf("Virtual Address %x:\n",vaddr);
		printf("  --> pde index:0x%02x  pde contents:(valid %d, pfn 0x%02x)\n",pde_index,pde_valid,pde_addr);
		if (pde_valid==0)
		{
			printf("      --> Fault (page directory entry not valid)\n");
			continue;
		}
		pte_valid=mem[(pde_addr<<5)+pte_index]>>7;
		pte_addr=mem[(pde_addr<<5)+pte_index]& 0x7f;
		printf("    --> pte index:0x%02x  pte contents:(valid %d, pfn 0x%02x)\n",pte_index,pte_valid,pte_addr);
		if (pte_valid==0)
		{
			printf("      --> Fault (page table entry not valid)\n");
			continue;
		}
		paddr=(pte_addr<<5)+offset;
		data=mem[paddr];
		printf("      --> Translates to Physical Address 0x%03x --> Value: %02x\n",paddr,data);
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
