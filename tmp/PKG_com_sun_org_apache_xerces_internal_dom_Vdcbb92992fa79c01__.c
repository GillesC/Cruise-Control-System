#include <stdlib.h>
#include <stdio.h>
#include "jamaica.h"
#include "jni.h"
#include "jbi.h"
#include "Main__.h"


#ifdef __JAMAICA__

#ifdef __cplusplus
extern "C" {
#endif


JBIEXPORT jamaica_int32 JBICALL jam_comp_com_sun_org_apache_xerces_internal_dom_DefertImpl_21_setChIndex60(jamaica_thread *ct,jamaica_ref r0,jamaica_ref r1,jamaica_int32 n0,jamaica_int32 n1,jamaica_int32 n2) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_int32 n6=0,n3=0,n4=0,n5=0;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+2;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->m.cli = tp;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

l2:
 if (n0!=(-1)) { goto l4; }
{ jamaica_ref m=jam_mtd_com_sun_org_apache_xerces_internal_dom_DefertImpl_21_clearIndex64;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,r1,n1,n2);
}
 ct->m.cli-=2;
 return n0;
l4:
 r0=r1;
 n3=n1;
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 n4=JAMAICA_BLOCK_GET_DATA32(r0,3).i;
 n5=((n4>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n3))>=((jamaica_uint32)(n5))) { goto LABEL_tAIOOBE; }
 n4=(n4&15);
 JAMAICA_GET_REF_ARRAY(r0,n3,r0);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 n3=JAMAICA_BLOCK_GET_DATA32(r0,3).i;
 n4=((n3>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n2))>=((jamaica_uint32)(n4))) { goto LABEL_tAIOOBE; }
 n3=(n3&15);
 JAMAICA_GET_ARRAY32(r0,n2,n5);
 n6=n5;
 if (n5!=(-1)) { goto l6; }
 if (((jamaica_uint32)(2048))>=((jamaica_uint32)(n4))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r0,2048,n5);
 n5=JAMAICA_ADDS32(n5,1);
 JAMAICA_SET_ARRAY32(r0,2048,n5);
l6:
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 n3=JAMAICA_BLOCK_GET_DATA32(r1,3).i;
 if (((jamaica_uint32)(n1))>=((jamaica_uint32)(((n3>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n4=(n3&15);
 JAMAICA_GET_REF_ARRAY(r1,n1,r0);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 n1=JAMAICA_BLOCK_GET_DATA32(r0,3).i;
 if (((jamaica_uint32)(n2))>=((jamaica_uint32)(((n1>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n3=(n1&15);
 JAMAICA_SET_ARRAY32(r0,n2,n0);
 ct->m.cli-=2;
 return n6;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return 0;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return 0;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
}
#else
#error 'jamaica.h' not found!
#endif

#ifdef __cplusplus
}
#endif

