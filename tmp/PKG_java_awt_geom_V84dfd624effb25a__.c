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


JBIEXPORT void JBICALL jam_comp_java_awt_geom_Affinsform_0__00030003e2(jamaica_thread *ct,jamaica_ref r0,jamaica_ref r1) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref b0=JAMAICA_NULL,b1=JAMAICA_NULL;
 /* JAMAICA_C_STACK_OVERFLOW not needed for leaf methods */
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
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_BLOCK_GET_DATA64(r0,4).d = JAMAICA_BLOCK_GET_DATA64(r1,4).d;
 b0=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 b1=JAMAICA_BLOCK_GET_DATA32(r0,7).r;
 JAMAICA_BLOCK_GET_DATA64(b1,2).d = JAMAICA_BLOCK_GET_DATA64(b0,2).d;
 JAMAICA_BLOCK_GET_DATA64(b1,4).d = JAMAICA_BLOCK_GET_DATA64(b0,4).d;
 JAMAICA_BLOCK_GET_DATA64(b1,6).d = JAMAICA_BLOCK_GET_DATA64(b0,6).d;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 b1=JAMAICA_BLOCK_GET_DATA32(b1,1).r;
 JAMAICA_BLOCK_GET_DATA64(b1,0).d = JAMAICA_BLOCK_GET_DATA64(b0,0).d;
 JAMAICA_BLOCK_GET_DATA64(b1,2).d = JAMAICA_BLOCK_GET_DATA64(b0,2).d;
 JAMAICA_BLOCK_GET_DATA32(r0,6).i = JAMAICA_BLOCK_GET_DATA32(r1,6).i;
 JAMAICA_BLOCK_GET_DATA32(b1,4).i = JAMAICA_BLOCK_GET_DATA32(b0,4).i;
 ct->m.cli-=2;
 return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT void JBICALL jam_comp_java_awt_geom_Affinsform_0_translate20(jamaica_thread *ct,jamaica_ref r0,jamaica_double d0,jamaica_double d1) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r1=JAMAICA_NULL;
 jamaica_int32 n0=0;
 jamaica_ref b0=JAMAICA_NULL,b1=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+1;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->m.cli = tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 r1=r0;
 switch (JAMAICA_BLOCK_GET_DATA32(r1,6).i) {
 case 0: goto l35;
 case 1: goto l31;
 case 2: goto l27;
 case 3: goto l22;
 case 4: goto l18;
 case 5: goto l13;
 case 6: goto l9;
 case 7: goto l4;
 default: goto l3;
 }
l3:
{ jamaica_ref m=jam_mtd_java_awt_geom_Affinsform_0_stateError12;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r0);
}
l4:
 b0=JAMAICA_BLOCK_GET_DATA32(r0,7).r;
 b1=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 JAMAICA_BLOCK_GET_DATA64(b1,0).d = ((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_MUL(d0,JAMAICA_BLOCK_GET_DATA64(r0,4).d)+JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_MUL(d1,JAMAICA_BLOCK_GET_DATA64(b0,4).d))+JAMAICA_BLOCK_GET_DATA64(b1,0).d);
 JAMAICA_BLOCK_GET_DATA64(b1,2).d = ((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_MUL(d0,JAMAICA_BLOCK_GET_DATA64(b0,2).d)+JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_MUL(d1,JAMAICA_BLOCK_GET_DATA64(b0,6).d))+JAMAICA_BLOCK_GET_DATA64(b1,2).d);
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(JAMAICA_BLOCK_GET_DATA64(b1,0).d)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(((jamaica_double) 0.0))||(JAMAICA_BLOCK_GET_DATA64(b1,0).d<((jamaica_double) 0.0)))?-1:((JAMAICA_BLOCK_GET_DATA64(b1,0).d==((jamaica_double) 0.0))?0:+1))!=0) { goto l8; }
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(JAMAICA_BLOCK_GET_DATA64(b1,2).d)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(((jamaica_double) 0.0))||(JAMAICA_BLOCK_GET_DATA64(b1,2).d<((jamaica_double) 0.0)))?-1:((JAMAICA_BLOCK_GET_DATA64(b1,2).d==((jamaica_double) 0.0))?0:+1))!=0) { goto l8; }
 JAMAICA_BLOCK_GET_DATA32(r0,6).i = 6;
 n0=JAMAICA_BLOCK_GET_DATA32(b1,4).i;
 if (n0==(-1)) { goto l8; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(b1,4).i = JAMAICA_SUBS32(n0,1);
l8:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->m.cli-=1;
 return;
l9:
 r1=r0;
 b0=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 b1=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 JAMAICA_BLOCK_GET_DATA64(b1,0).d = (JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_MUL(d0,JAMAICA_BLOCK_GET_DATA64(r1,4).d)+JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_MUL(d1,JAMAICA_BLOCK_GET_DATA64(b0,4).d));
 JAMAICA_BLOCK_GET_DATA64(b1,2).d = (JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_MUL(d0,JAMAICA_BLOCK_GET_DATA64(b0,2).d)+JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_MUL(d1,JAMAICA_BLOCK_GET_DATA64(b0,6).d));
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(JAMAICA_BLOCK_GET_DATA64(b1,0).d)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(((jamaica_double) 0.0))||(JAMAICA_BLOCK_GET_DATA64(b1,0).d<((jamaica_double) 0.0)))?-1:((JAMAICA_BLOCK_GET_DATA64(b1,0).d==((jamaica_double) 0.0))?0:+1))!=0) { goto l11; }
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(JAMAICA_BLOCK_GET_DATA64(b1,2).d)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(((jamaica_double) 0.0))||(JAMAICA_BLOCK_GET_DATA64(b1,2).d<((jamaica_double) 0.0)))?-1:((JAMAICA_BLOCK_GET_DATA64(b1,2).d==((jamaica_double) 0.0))?0:+1))==0) { goto l12; }
l11:
 JAMAICA_BLOCK_GET_DATA32(r0,6).i = 7;
 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,1).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(b0,4).i = (JAMAICA_BLOCK_GET_DATA32(b0,4).i|1);
l12:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->m.cli-=1;
 return;
l13:
 b0=JAMAICA_BLOCK_GET_DATA32(r0,7).r;
 b1=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 JAMAICA_BLOCK_GET_DATA64(b1,0).d = (JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_MUL(d1,JAMAICA_BLOCK_GET_DATA64(b0,4).d)+JAMAICA_BLOCK_GET_DATA64(b1,0).d);
 JAMAICA_BLOCK_GET_DATA64(b1,2).d = (JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_MUL(d0,JAMAICA_BLOCK_GET_DATA64(b0,2).d)+JAMAICA_BLOCK_GET_DATA64(b1,2).d);
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(JAMAICA_BLOCK_GET_DATA64(b1,0).d)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(((jamaica_double) 0.0))||(JAMAICA_BLOCK_GET_DATA64(b1,0).d<((jamaica_double) 0.0)))?-1:((JAMAICA_BLOCK_GET_DATA64(b1,0).d==((jamaica_double) 0.0))?0:+1))!=0) { goto l17; }
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(JAMAICA_BLOCK_GET_DATA64(b1,2).d)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(((jamaica_double) 0.0))||(JAMAICA_BLOCK_GET_DATA64(b1,2).d<((jamaica_double) 0.0)))?-1:((JAMAICA_BLOCK_GET_DATA64(b1,2).d==((jamaica_double) 0.0))?0:+1))!=0) { goto l17; }
 JAMAICA_BLOCK_GET_DATA32(r0,6).i = 4;
 n0=JAMAICA_BLOCK_GET_DATA32(b1,4).i;
 if (n0==(-1)) { goto l17; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(b1,4).i = JAMAICA_SUBS32(n0,1);
l17:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->m.cli-=1;
 return;
l18:
 r1=r0;
 b0=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 b1=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 JAMAICA_BLOCK_GET_DATA64(b1,0).d = JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_MUL(d1,JAMAICA_BLOCK_GET_DATA64(b0,4).d);
 JAMAICA_BLOCK_GET_DATA64(b1,2).d = JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_MUL(d0,JAMAICA_BLOCK_GET_DATA64(b0,2).d);
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(JAMAICA_BLOCK_GET_DATA64(b1,0).d)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(((jamaica_double) 0.0))||(JAMAICA_BLOCK_GET_DATA64(b1,0).d<((jamaica_double) 0.0)))?-1:((JAMAICA_BLOCK_GET_DATA64(b1,0).d==((jamaica_double) 0.0))?0:+1))!=0) { goto l20; }
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(JAMAICA_BLOCK_GET_DATA64(b1,2).d)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(((jamaica_double) 0.0))||(JAMAICA_BLOCK_GET_DATA64(b1,2).d<((jamaica_double) 0.0)))?-1:((JAMAICA_BLOCK_GET_DATA64(b1,2).d==((jamaica_double) 0.0))?0:+1))==0) { goto l21; }
l20:
 JAMAICA_BLOCK_GET_DATA32(r0,6).i = 5;
 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,1).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(b0,4).i = (JAMAICA_BLOCK_GET_DATA32(b0,4).i|1);
l21:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->m.cli-=1;
 return;
l22:
 b0=JAMAICA_BLOCK_GET_DATA32(r0,7).r;
 b1=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 JAMAICA_BLOCK_GET_DATA64(b1,0).d = (JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_MUL(d0,JAMAICA_BLOCK_GET_DATA64(r0,4).d)+JAMAICA_BLOCK_GET_DATA64(b1,0).d);
 JAMAICA_BLOCK_GET_DATA64(b1,2).d = (JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_MUL(d1,JAMAICA_BLOCK_GET_DATA64(b0,6).d)+JAMAICA_BLOCK_GET_DATA64(b1,2).d);
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(JAMAICA_BLOCK_GET_DATA64(b1,0).d)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(((jamaica_double) 0.0))||(JAMAICA_BLOCK_GET_DATA64(b1,0).d<((jamaica_double) 0.0)))?-1:((JAMAICA_BLOCK_GET_DATA64(b1,0).d==((jamaica_double) 0.0))?0:+1))!=0) { goto l26; }
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(JAMAICA_BLOCK_GET_DATA64(b1,2).d)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(((jamaica_double) 0.0))||(JAMAICA_BLOCK_GET_DATA64(b1,2).d<((jamaica_double) 0.0)))?-1:((JAMAICA_BLOCK_GET_DATA64(b1,2).d==((jamaica_double) 0.0))?0:+1))!=0) { goto l26; }
 JAMAICA_BLOCK_GET_DATA32(r0,6).i = 2;
 n0=JAMAICA_BLOCK_GET_DATA32(b1,4).i;
 if (n0==(-1)) { goto l26; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(b1,4).i = JAMAICA_SUBS32(n0,1);
l26:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->m.cli-=1;
 return;
l27:
 r1=r0;
 b0=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 b1=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 JAMAICA_BLOCK_GET_DATA64(b1,0).d = JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_MUL(d0,JAMAICA_BLOCK_GET_DATA64(r1,4).d);
 JAMAICA_BLOCK_GET_DATA64(b1,2).d = JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_MUL(d1,JAMAICA_BLOCK_GET_DATA64(b0,6).d);
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(JAMAICA_BLOCK_GET_DATA64(b1,0).d)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(((jamaica_double) 0.0))||(JAMAICA_BLOCK_GET_DATA64(b1,0).d<((jamaica_double) 0.0)))?-1:((JAMAICA_BLOCK_GET_DATA64(b1,0).d==((jamaica_double) 0.0))?0:+1))!=0) { goto l29; }
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(JAMAICA_BLOCK_GET_DATA64(b1,2).d)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(((jamaica_double) 0.0))||(JAMAICA_BLOCK_GET_DATA64(b1,2).d<((jamaica_double) 0.0)))?-1:((JAMAICA_BLOCK_GET_DATA64(b1,2).d==((jamaica_double) 0.0))?0:+1))==0) { goto l30; }
l29:
 JAMAICA_BLOCK_GET_DATA32(r0,6).i = 3;
 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,1).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(b0,4).i = (JAMAICA_BLOCK_GET_DATA32(b0,4).i|1);
l30:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->m.cli-=1;
 return;
l31:
 b0=JAMAICA_BLOCK_GET_DATA32(r0,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 JAMAICA_BLOCK_GET_DATA64(b0,0).d = (d0+JAMAICA_BLOCK_GET_DATA64(b0,0).d);
 JAMAICA_BLOCK_GET_DATA64(b0,2).d = (d1+JAMAICA_BLOCK_GET_DATA64(b0,2).d);
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(JAMAICA_BLOCK_GET_DATA64(b0,0).d)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(((jamaica_double) 0.0))||(JAMAICA_BLOCK_GET_DATA64(b0,0).d<((jamaica_double) 0.0)))?-1:((JAMAICA_BLOCK_GET_DATA64(b0,0).d==((jamaica_double) 0.0))?0:+1))!=0) { goto l34; }
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(JAMAICA_BLOCK_GET_DATA64(b0,2).d)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(((jamaica_double) 0.0))||(JAMAICA_BLOCK_GET_DATA64(b0,2).d<((jamaica_double) 0.0)))?-1:((JAMAICA_BLOCK_GET_DATA64(b0,2).d==((jamaica_double) 0.0))?0:+1))!=0) { goto l34; }
 JAMAICA_BLOCK_GET_DATA32(r0,6).i = 0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(b0,4).i = 0;
l34:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->m.cli-=1;
 return;
l35:
 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r1,7).r,1).r;
 JAMAICA_BLOCK_GET_DATA64(b0,0).d = d0;
 JAMAICA_BLOCK_GET_DATA64(b0,2).d = d1;
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d0)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(((jamaica_double) 0.0))||(d0<((jamaica_double) 0.0)))?-1:((d0==((jamaica_double) 0.0))?0:+1))!=0) { goto l37; }
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d1)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(((jamaica_double) 0.0))||(d1<((jamaica_double) 0.0)))?-1:((d1==((jamaica_double) 0.0))?0:+1))==0) { goto l38; }
l37:
 JAMAICA_BLOCK_GET_DATA32(r0,6).i = 1;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,1).r,4).i = 1;
l38:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->m.cli-=1;
 return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT jamaica_int32 JBICALL jam_comp_java_awt_geom_Affinsform_0_equals50(jamaica_thread *ct,jamaica_ref r0,jamaica_ref r1) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_int32 n0=0;
 jamaica_ref b0=JAMAICA_NULL,b1=JAMAICA_NULL,b2=JAMAICA_NULL,b3=JAMAICA_NULL;
 /* JAMAICA_C_STACK_OVERFLOW not needed for leaf methods */
 tp=ct->m.cli+2;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->m.cli = tp;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
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
 n0=((r1!=JAMAICA_NULL) && ((JAMAICA_BLOCK_GET_R(r1,1) == jam_class_java_awt_geom_Affinsform_0)?TRUE:(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r1,1),4) == JAMAICA_NULL)?FALSE:(jam_class_java_awt_geom_Affinsform_0 == JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r1,1),4),2))));
 if (n0!=0) { goto l4; }
 ct->m.cli-=2;
 return 0;
l4:
 if ((r1!=JAMAICA_NULL) && (n0==0)) { goto LABEL_tCCE; }
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(JAMAICA_BLOCK_GET_DATA64(r0,4).d)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(JAMAICA_BLOCK_GET_DATA64(r1,4).d)||(JAMAICA_BLOCK_GET_DATA64(r0,4).d<JAMAICA_BLOCK_GET_DATA64(r1,4).d))?-1:((JAMAICA_BLOCK_GET_DATA64(r0,4).d==JAMAICA_BLOCK_GET_DATA64(r1,4).d)?0:+1))!=0) { goto l11; }
 b0=JAMAICA_BLOCK_GET_DATA32(r0,7).r;
 b1=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(JAMAICA_BLOCK_GET_DATA64(b0,4).d)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(JAMAICA_BLOCK_GET_DATA64(b1,4).d)||(JAMAICA_BLOCK_GET_DATA64(b0,4).d<JAMAICA_BLOCK_GET_DATA64(b1,4).d))?-1:((JAMAICA_BLOCK_GET_DATA64(b0,4).d==JAMAICA_BLOCK_GET_DATA64(b1,4).d)?0:+1))!=0) { goto l11; }
 b2=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 b3=JAMAICA_BLOCK_GET_DATA32(b1,1).r;
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(JAMAICA_BLOCK_GET_DATA64(b2,0).d)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(JAMAICA_BLOCK_GET_DATA64(b3,0).d)||(JAMAICA_BLOCK_GET_DATA64(b2,0).d<JAMAICA_BLOCK_GET_DATA64(b3,0).d))?-1:((JAMAICA_BLOCK_GET_DATA64(b2,0).d==JAMAICA_BLOCK_GET_DATA64(b3,0).d)?0:+1))!=0) { goto l11; }
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(JAMAICA_BLOCK_GET_DATA64(b0,2).d)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(JAMAICA_BLOCK_GET_DATA64(b1,2).d)||(JAMAICA_BLOCK_GET_DATA64(b0,2).d<JAMAICA_BLOCK_GET_DATA64(b1,2).d))?-1:((JAMAICA_BLOCK_GET_DATA64(b0,2).d==JAMAICA_BLOCK_GET_DATA64(b1,2).d)?0:+1))!=0) { goto l11; }
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(JAMAICA_BLOCK_GET_DATA64(b0,6).d)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(JAMAICA_BLOCK_GET_DATA64(b1,6).d)||(JAMAICA_BLOCK_GET_DATA64(b0,6).d<JAMAICA_BLOCK_GET_DATA64(b1,6).d))?-1:((JAMAICA_BLOCK_GET_DATA64(b0,6).d==JAMAICA_BLOCK_GET_DATA64(b1,6).d)?0:+1))!=0) { goto l11; }
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(JAMAICA_BLOCK_GET_DATA64(b2,2).d)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(JAMAICA_BLOCK_GET_DATA64(b3,2).d)||(JAMAICA_BLOCK_GET_DATA64(b2,2).d<JAMAICA_BLOCK_GET_DATA64(b3,2).d))?-1:((JAMAICA_BLOCK_GET_DATA64(b2,2).d==JAMAICA_BLOCK_GET_DATA64(b3,2).d)?0:+1))!=0) { goto l11; }
 n0=1;
 goto l12;
l11:
 n0=0;
l12:
 ct->m.cli-=2;
 return n0;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return 0;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
LABEL_tCCE:    jamaica_throwClassCastExc(ct);       return 0;
}
JBIEXPORT jamaica_double JBICALL jam_comp_java_awt_geom_Cubicrve2D_6_getFlessSq1(jamaica_thread *ct,jamaica_ref r0,jamaica_int32 n0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_int32 n1=0,n2=0,n3=0;
 jamaica_double d0=0,d1=0,d2=0,d3=0,d4=0,d5=0,d6=0,d7=0;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+1;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->m.cli = tp;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

l2:
 n1=JAMAICA_ADDS32(n0,0);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 n2=JAMAICA_BLOCK_GET_DATA32(r0,3).i;
 n3=((n2>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n1))>=((jamaica_uint32)(n3))) { goto LABEL_tAIOOBE; }
 n2=(n2&15);
 JAMAICA_GET_ARRAY_DOUBLE(r0,n1,d0);
 n1=JAMAICA_ADDS32(n0,1);
 if (((jamaica_uint32)(n1))>=((jamaica_uint32)(n3))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r0,n1,d1);
 n1=JAMAICA_ADDS32(n0,2);
 if (((jamaica_uint32)(n1))>=((jamaica_uint32)(n3))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r0,n1,d2);
 n1=JAMAICA_ADDS32(n0,3);
 if (((jamaica_uint32)(n1))>=((jamaica_uint32)(n3))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r0,n1,d3);
 n1=JAMAICA_ADDS32(n0,4);
 if (((jamaica_uint32)(n1))>=((jamaica_uint32)(n3))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r0,n1,d4);
 n1=JAMAICA_ADDS32(n0,5);
 if (((jamaica_uint32)(n1))>=((jamaica_uint32)(n3))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r0,n1,d5);
 n1=JAMAICA_ADDS32(n0,6);
 if (((jamaica_uint32)(n1))>=((jamaica_uint32)(n3))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r0,n1,d6);
 n0=JAMAICA_ADDS32(n0,7);
 if (((jamaica_uint32)(n0))>=((jamaica_uint32)(n3))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r0,n0,d7);
{ jamaica_ref m=jam_mtd_java_awt_geom_Cubicrve2D_6_getFlessSq0;
ct->calledMethod=m;
 d0=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_double,jamaica_double,jamaica_double,jamaica_double,jamaica_double,jamaica_double,jamaica_double,jamaica_double))JAMAICA_BLOCK_GET_P(m,4))(ct,d0,d1,d2,d3,d4,d5,d6,d7);
}
 ct->m.cli-=1;
 return d0;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return 0;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return 0;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
}
JBIEXPORT void JBICALL jam_comp_java_awt_geom_Cubicrve2D_6_subdivide2(jamaica_thread *ct,jamaica_ref r0,jamaica_int32 n0,jamaica_ref r1,jamaica_int32 n1,jamaica_ref r2,jamaica_int32 n2) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_int32 n3=0,n4=0,n5=0;
 jamaica_double d0=0,d1=0,d2=0,d3=0,d4=0,d5=0,d6=0,d7=0,d8=0,d9=0,d10=0,d11=0;
 /* JAMAICA_C_STACK_OVERFLOW not needed for leaf methods */
 tp=ct->m.cli+3;
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

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
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
 n3=JAMAICA_ADDS32(n0,0);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 n4=JAMAICA_BLOCK_GET_DATA32(r0,3).i;
 n5=((n4>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n3))>=((jamaica_uint32)(n5))) { goto LABEL_tAIOOBE; }
 n4=(n4&15);
 JAMAICA_GET_ARRAY_DOUBLE(r0,n3,d0);
 d1=d0;
 n3=JAMAICA_ADDS32(n0,1);
 if (((jamaica_uint32)(n3))>=((jamaica_uint32)(n5))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r0,n3,d2);
 d3=d2;
 n3=JAMAICA_ADDS32(n0,2);
 if (((jamaica_uint32)(n3))>=((jamaica_uint32)(n5))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r0,n3,d4);
 n3=JAMAICA_ADDS32(n0,3);
 if (((jamaica_uint32)(n3))>=((jamaica_uint32)(n5))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r0,n3,d5);
 n3=JAMAICA_ADDS32(n0,4);
 if (((jamaica_uint32)(n3))>=((jamaica_uint32)(n5))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r0,n3,d6);
 n3=JAMAICA_ADDS32(n0,5);
 if (((jamaica_uint32)(n3))>=((jamaica_uint32)(n5))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r0,n3,d7);
 n3=JAMAICA_ADDS32(n0,6);
 if (((jamaica_uint32)(n3))>=((jamaica_uint32)(n5))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r0,n3,d8);
 n0=JAMAICA_ADDS32(n0,7);
 if (((jamaica_uint32)(n0))>=((jamaica_uint32)(n5))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r0,n0,d9);
 r0=r1;
 if (r0==JAMAICA_NULL) { goto l4; }
 n0=JAMAICA_ADDS32(n1,0);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 n3=JAMAICA_BLOCK_GET_DATA32(r0,3).i;
 n4=((n3>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n0))>=((jamaica_uint32)(n4))) { goto LABEL_tAIOOBE; }
 n3=(n3&15);
 JAMAICA_SET_ARRAY_DOUBLE(r0,n0,d0);
 n0=JAMAICA_ADDS32(n1,1);
 if (((jamaica_uint32)(n0))>=((jamaica_uint32)(n4))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r0,n0,d2);
l4:
 r0=r2;
 if (r0==JAMAICA_NULL) { goto l6; }
 n0=JAMAICA_ADDS32(n2,6);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 n3=JAMAICA_BLOCK_GET_DATA32(r0,3).i;
 n4=((n3>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n0))>=((jamaica_uint32)(n4))) { goto LABEL_tAIOOBE; }
 n3=(n3&15);
 JAMAICA_SET_ARRAY_DOUBLE(r0,n0,d8);
 n0=JAMAICA_ADDS32(n2,7);
 if (((jamaica_uint32)(n0))>=((jamaica_uint32)(n4))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r0,n0,d9);
l6:
 d0=d4;
 d1=(d1+d0);
 d1=JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_DIV(d1,((jamaica_double) 2.0));
 d2=d5;
 d3=(d3+d2);
 d3=JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_DIV(d3,((jamaica_double) 2.0));
 d4=d8;
 d5=d6;
 d4=(d4+d5);
 d4=JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_DIV(d4,((jamaica_double) 2.0));
 d8=d4;
 d6=d9;
 d6=(d6+d7);
 d10=JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_DIV(d6,((jamaica_double) 2.0));
 d9=d10;
 d0=(d0+d5);
 d0=JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_DIV(d0,((jamaica_double) 2.0));
 d2=(d2+d7);
 d2=JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_DIV(d2,((jamaica_double) 2.0));
 d5=(d1+d0);
 d5=JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_DIV(d5,((jamaica_double) 2.0));
 d6=(d3+d2);
 d11=JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_DIV(d6,((jamaica_double) 2.0));
 d0=(d4+d0);
 d0=JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_DIV(d0,((jamaica_double) 2.0));
 d6=d0;
 d2=(d10+d2);
 d2=JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_DIV(d2,((jamaica_double) 2.0));
 d7=d2;
 d0=(d5+d0);
 d4=JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_DIV(d0,((jamaica_double) 2.0));
 d0=d4;
 d2=(d11+d2);
 d10=JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_DIV(d2,((jamaica_double) 2.0));
 d2=d10;
 if (r1==JAMAICA_NULL) { goto l8; }
 n0=JAMAICA_ADDS32(n1,2);
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 n3=JAMAICA_BLOCK_GET_DATA32(r1,3).i;
 n4=((n3>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n0))>=((jamaica_uint32)(n4))) { goto LABEL_tAIOOBE; }
 n3=(n3&15);
 JAMAICA_SET_ARRAY_DOUBLE(r1,n0,d1);
 n0=JAMAICA_ADDS32(n1,3);
 if (((jamaica_uint32)(n0))>=((jamaica_uint32)(n4))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r1,n0,d3);
 n0=JAMAICA_ADDS32(n1,4);
 if (((jamaica_uint32)(n0))>=((jamaica_uint32)(n4))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r1,n0,d5);
 n0=JAMAICA_ADDS32(n1,5);
 if (((jamaica_uint32)(n0))>=((jamaica_uint32)(n4))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r1,n0,d11);
 n0=JAMAICA_ADDS32(n1,6);
 if (((jamaica_uint32)(n0))>=((jamaica_uint32)(n4))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r1,n0,d4);
 n0=JAMAICA_ADDS32(n1,7);
 if (((jamaica_uint32)(n0))>=((jamaica_uint32)(n4))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r1,n0,d10);
l8:
 if (r2==JAMAICA_NULL) { goto l10; }
 n0=JAMAICA_ADDS32(n2,0);
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n3=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 n4=((n3>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n0))>=((jamaica_uint32)(n4))) { goto LABEL_tAIOOBE; }
 n3=(n3&15);
 JAMAICA_SET_ARRAY_DOUBLE(r2,n0,d0);
 n0=JAMAICA_ADDS32(n2,1);
 if (((jamaica_uint32)(n0))>=((jamaica_uint32)(n4))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r2,n0,d2);
 n0=JAMAICA_ADDS32(n2,2);
 if (((jamaica_uint32)(n0))>=((jamaica_uint32)(n4))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r2,n0,d6);
 n0=JAMAICA_ADDS32(n2,3);
 if (((jamaica_uint32)(n0))>=((jamaica_uint32)(n4))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r2,n0,d7);
 n0=JAMAICA_ADDS32(n2,4);
 if (((jamaica_uint32)(n0))>=((jamaica_uint32)(n4))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r2,n0,d8);
 n0=JAMAICA_ADDS32(n2,5);
 if (((jamaica_uint32)(n0))>=((jamaica_uint32)(n4))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r2,n0,d9);
l10:
 ct->m.cli-=3;
 return;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT void JBICALL jam_comp_java_awt_geom_Flattrator_11_next6(jamaica_thread *ct,jamaica_ref r0,jamaica_int32 n8) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r9=JAMAICA_NULL,r10=JAMAICA_NULL,r5=JAMAICA_NULL,r6=JAMAICA_NULL,r7=JAMAICA_NULL,r8=JAMAICA_NULL;
 jamaica_int32 n9=0,n10=0,n11=0,n12=0,n13=0,n14=0,n15=0,n16=0,n17=0;
 jamaica_double d0=0,d1=0,d2=0,d3=0,d4=0,d5=0,d6=0,d7=0,d8=0,d9=0,d10=0,d11=0;
 jamaica_ref b2=JAMAICA_NULL,b6=JAMAICA_NULL,b7=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+4;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->m.cli = tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 r5=r0;
 b6=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r5,7).r,1).r;
 if (JAMAICA_BLOCK_GET_DATA32(b6,5).i<JAMAICA_BLOCK_GET_DATA32(b6,4).i) { goto l8; }
 if (n8==0) { goto l5; }
 r5=JAMAICA_BLOCK_GET_DATA32(r5,3).r;
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r5,jam_mtd_java_awt_geom_PathIrator_26_next2);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r5);
}
l5:
 r5=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r6=JAMAICA_BLOCK_GET_DATA32(r5,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r6,jam_mtd_java_awt_geom_PathIrator_26_isDone1);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 n8=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r6);
}
 if (n8==0) { goto l7; }
 
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

 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,4).b[0] = (jamaica_int8) 1;
 ct->m.cli-=4;
 return;
l7:
 r6=JAMAICA_BLOCK_GET_DATA32(r5,3).r;
 b6=JAMAICA_BLOCK_GET_DATA32(r5,7).r;
 r7=JAMAICA_BLOCK_GET_DATA32(b6,2).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jamaicaInterpreter_getInterfaceMethod(ct,r6,jam_mtd_java_awt_geom_PathIrator_26_curregment4);
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 n8=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r6,r7);
}
 JAMAICA_BLOCK_GET_DATA32(b6,3).i = n8;
 b6=JAMAICA_BLOCK_GET_DATA32(b6,1).r;
 JAMAICA_BLOCK_GET_DATA32(b6,7).i = 0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r5=JAMAICA_BLOCK_GET_DATA32(b6,6).r;
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 n8=JAMAICA_BLOCK_GET_DATA32(r5,3).i;
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(((n8>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n9=(n8&15);
 JAMAICA_SET_ARRAY32(r5,0,0);
l8:
 r5=r0;
 b6=JAMAICA_BLOCK_GET_DATA32(r5,7).r;
 n8=JAMAICA_BLOCK_GET_DATA32(b6,3).i;
 switch (n8) {
 case 0: goto l9;
 case 1: goto l9;
 case 2: goto l13;
 case 3: goto l21;
 case 4: goto l12;
 default: goto l39;
 }
l9:
 r6=JAMAICA_BLOCK_GET_DATA32(b6,2).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 n9=JAMAICA_BLOCK_GET_DATA32(r6,3).i;
 n10=((n9>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n10))) { goto LABEL_tAIOOBE; }
 n9=(n9&15);
 JAMAICA_GET_ARRAY_DOUBLE(r6,0,d0);
 JAMAICA_BLOCK_GET_DATA64(b6,4).d = d0;
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n10))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r6,1,d0);
 JAMAICA_BLOCK_GET_DATA64(b6,6).d = d0;
 if (n8!=0) { goto l11; }
 b7=JAMAICA_BLOCK_GET_DATA32(b6,1).r;
 JAMAICA_BLOCK_GET_DATA64(b7,0).d = JAMAICA_BLOCK_GET_DATA64(b6,4).d;
 JAMAICA_BLOCK_GET_DATA64(b7,2).d = JAMAICA_BLOCK_GET_DATA64(b6,6).d;
l11:
 b6=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,1).r;
 JAMAICA_BLOCK_GET_DATA32(b6,5).i = 0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(b6,4).i = 0;
 goto l39;
l12:
 b6=JAMAICA_BLOCK_GET_DATA32(r0,7).r;
 b7=JAMAICA_BLOCK_GET_DATA32(b6,1).r;
 JAMAICA_BLOCK_GET_DATA64(b6,4).d = JAMAICA_BLOCK_GET_DATA64(b7,0).d;
 JAMAICA_BLOCK_GET_DATA64(b6,6).d = JAMAICA_BLOCK_GET_DATA64(b7,2).d;
 JAMAICA_BLOCK_GET_DATA32(b7,5).i = 0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(b7,4).i = 0;
 goto l39;
l13:
 r5=r0;
 b6=JAMAICA_BLOCK_GET_DATA32(r5,7).r;
 b7=JAMAICA_BLOCK_GET_DATA32(b6,1).r;
 if (JAMAICA_BLOCK_GET_DATA32(b7,5).i<JAMAICA_BLOCK_GET_DATA32(b7,4).i) { goto l15; }
 r6=JAMAICA_BLOCK_GET_DATA32(b6,2).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 n8=JAMAICA_BLOCK_GET_DATA32(r6,3).i;
 n9=((n8>>4) &  ((jamaica_int32)268435455));
 JAMAICA_BLOCK_GET_DATA32(b7,5).i = JAMAICA_SUBS32(n9,6);
 JAMAICA_BLOCK_GET_DATA32(b7,4).i = JAMAICA_SUBS32(n9,2);
 n10=JAMAICA_BLOCK_GET_DATA32(b7,5).i;
 n11=JAMAICA_ADDS32(n10,0);
 d0=JAMAICA_BLOCK_GET_DATA64(b6,4).d;
 if (((jamaica_uint32)(n11))>=((jamaica_uint32)(n9))) { goto LABEL_tAIOOBE; }
 n8=(n8&15);
 JAMAICA_SET_ARRAY_DOUBLE(r6,n11,d0);
 n11=JAMAICA_ADDS32(n10,1);
 d0=JAMAICA_BLOCK_GET_DATA64(b6,6).d;
 if (((jamaica_uint32)(n11))>=((jamaica_uint32)(n9))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r6,n11,d0);
 n11=JAMAICA_ADDS32(n10,2);
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n9))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r6,0,d0);
 if (((jamaica_uint32)(n11))>=((jamaica_uint32)(n9))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r6,n11,d0);
 n11=JAMAICA_ADDS32(n10,3);
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n9))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r6,1,d0);
 if (((jamaica_uint32)(n11))>=((jamaica_uint32)(n9))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r6,n11,d0);
 n10=JAMAICA_ADDS32(n10,4);
 if (((jamaica_uint32)(2))>=((jamaica_uint32)(n9))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r6,2,d0);
 JAMAICA_BLOCK_GET_DATA64(b6,4).d = d0;
 if (((jamaica_uint32)(n10))>=((jamaica_uint32)(n9))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r6,n10,d0);
 n10=JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b7,5).i,5);
 if (((jamaica_uint32)(3))>=((jamaica_uint32)(n9))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r6,3,d0);
 JAMAICA_BLOCK_GET_DATA64(b6,6).d = d0;
 if (((jamaica_uint32)(n10))>=((jamaica_uint32)(n9))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r6,n10,d0);
l15:
 b6=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,1).r;
 r5=JAMAICA_BLOCK_GET_DATA32(b6,6).r;
 n8=JAMAICA_BLOCK_GET_DATA32(b6,7).i;
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 n9=JAMAICA_BLOCK_GET_DATA32(r5,3).i;
 if (((jamaica_uint32)(n8))>=((jamaica_uint32)(((n9>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n10=(n9&15);
 JAMAICA_GET_ARRAY32(r5,n8,n8);
 r5=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b6=JAMAICA_BLOCK_GET_DATA32(r5,7).r;
 b7=JAMAICA_BLOCK_GET_DATA32(b6,1).r;
 r6=JAMAICA_BLOCK_GET_R(r5,1);
 r6=JAMAICA_BLOCK_GET_DATA32(r6,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 n9=JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_awt_geom_Flattrator_11_ensuracity4,1).i;
 n9=((n9>>20) &  ((jamaica_int32)4095));
 n10=JAMAICA_BLOCK_GET_DATA32(r6,3).i;
 n10=(n10&15);
l16:
 if (n8>=JAMAICA_BLOCK_GET_DATA32(r5,6).i) { goto l20; }
 r7=JAMAICA_BLOCK_GET_DATA32(b6,2).r;
 n11=JAMAICA_BLOCK_GET_DATA32(b7,5).i;
{ jamaica_ref m=jam_mtd_java_awt_geom_QuadCrve2D_30_getFlessSq0;
ct->calledMethod=m;
 d0=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r7,n11);
}
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d0)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(JAMAICA_BLOCK_GET_DATA64(r5,4).d)||(d0>JAMAICA_BLOCK_GET_DATA64(r5,4).d))?+1:((d0==JAMAICA_BLOCK_GET_DATA64(r5,4).d)?0:-1))<0) { goto l20; }
 JAMAICA_GET_REF_ARRAY(r6,n9,r7);
{ jamaica_ref m=r7;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r5,4);
}
 r7=JAMAICA_BLOCK_GET_DATA32(b6,2).r;
 n11=JAMAICA_BLOCK_GET_DATA32(b7,5).i;
{ jamaica_ref m=jam_mtd_java_awt_geom_QuadCrve2D_30_subdivide1;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_ref,jamaica_int32,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r7,n11,r7,JAMAICA_SUBS32(n11,4),r7,n11);
}
 JAMAICA_BLOCK_GET_DATA32(b7,5).i = JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b7,5).i,4);
 n11=JAMAICA_ADDS32(n8,1);
 n8=n11;
 r7=JAMAICA_BLOCK_GET_DATA32(b7,6).r;
 n12=JAMAICA_BLOCK_GET_DATA32(b7,7).i;
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 n13=JAMAICA_BLOCK_GET_DATA32(r7,3).i;
 n14=((n13>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n12))>=((jamaica_uint32)(n14))) { goto LABEL_tAIOOBE; }
 n13=(n13&15);
 JAMAICA_SET_ARRAY32(r7,n12,n11);
 JAMAICA_BLOCK_GET_DATA32(b7,7).i = JAMAICA_ADDS32(n12,1);
 n12=JAMAICA_BLOCK_GET_DATA32(b7,7).i;
 if (((jamaica_uint32)(n12))>=((jamaica_uint32)(n14))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r7,n12,n11);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l16; }
 jamaicaScheduler_syncPointFull(ct);
 goto l16;
l20:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 b6=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,1).r;
 JAMAICA_BLOCK_GET_DATA32(b6,5).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b6,5).i,4);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(b6,7).i = JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b6,7).i,1);
 goto l39;
l21:
 r5=r0;
 b6=JAMAICA_BLOCK_GET_DATA32(r5,7).r;
 b7=JAMAICA_BLOCK_GET_DATA32(b6,1).r;
 if (JAMAICA_BLOCK_GET_DATA32(b7,5).i<JAMAICA_BLOCK_GET_DATA32(b7,4).i) { goto l23; }
 r6=JAMAICA_BLOCK_GET_DATA32(b6,2).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 n8=JAMAICA_BLOCK_GET_DATA32(r6,3).i;
 n9=((n8>>4) &  ((jamaica_int32)268435455));
 JAMAICA_BLOCK_GET_DATA32(b7,5).i = JAMAICA_SUBS32(n9,8);
 JAMAICA_BLOCK_GET_DATA32(b7,4).i = JAMAICA_SUBS32(n9,2);
 n10=JAMAICA_BLOCK_GET_DATA32(b7,5).i;
 n11=JAMAICA_ADDS32(n10,0);
 d0=JAMAICA_BLOCK_GET_DATA64(b6,4).d;
 if (((jamaica_uint32)(n11))>=((jamaica_uint32)(n9))) { goto LABEL_tAIOOBE; }
 n8=(n8&15);
 JAMAICA_SET_ARRAY_DOUBLE(r6,n11,d0);
 n11=JAMAICA_ADDS32(n10,1);
 d0=JAMAICA_BLOCK_GET_DATA64(b6,6).d;
 if (((jamaica_uint32)(n11))>=((jamaica_uint32)(n9))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r6,n11,d0);
 n11=JAMAICA_ADDS32(n10,2);
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n9))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r6,0,d0);
 if (((jamaica_uint32)(n11))>=((jamaica_uint32)(n9))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r6,n11,d0);
 n11=JAMAICA_ADDS32(n10,3);
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n9))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r6,1,d0);
 if (((jamaica_uint32)(n11))>=((jamaica_uint32)(n9))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r6,n11,d0);
 n11=JAMAICA_ADDS32(n10,4);
 if (((jamaica_uint32)(2))>=((jamaica_uint32)(n9))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r6,2,d0);
 if (((jamaica_uint32)(n11))>=((jamaica_uint32)(n9))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r6,n11,d0);
 n11=JAMAICA_ADDS32(n10,5);
 if (((jamaica_uint32)(3))>=((jamaica_uint32)(n9))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r6,3,d0);
 if (((jamaica_uint32)(n11))>=((jamaica_uint32)(n9))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r6,n11,d0);
 n10=JAMAICA_ADDS32(n10,6);
 if (((jamaica_uint32)(4))>=((jamaica_uint32)(n9))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r6,4,d0);
 JAMAICA_BLOCK_GET_DATA64(b6,4).d = d0;
 if (((jamaica_uint32)(n10))>=((jamaica_uint32)(n9))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r6,n10,d0);
 n10=JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b7,5).i,7);
 if (((jamaica_uint32)(5))>=((jamaica_uint32)(n9))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r6,5,d0);
 JAMAICA_BLOCK_GET_DATA64(b6,6).d = d0;
 if (((jamaica_uint32)(n10))>=((jamaica_uint32)(n9))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r6,n10,d0);
l23:
 b6=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,1).r;
 r5=JAMAICA_BLOCK_GET_DATA32(b6,6).r;
 n8=JAMAICA_BLOCK_GET_DATA32(b6,7).i;
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 n9=JAMAICA_BLOCK_GET_DATA32(r5,3).i;
 if (((jamaica_uint32)(n8))>=((jamaica_uint32)(((n9>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n10=(n9&15);
 JAMAICA_GET_ARRAY32(r5,n8,n8);
 r5=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b6=JAMAICA_BLOCK_GET_DATA32(r5,7).r;
 b7=JAMAICA_BLOCK_GET_DATA32(b6,1).r;
 r6=JAMAICA_BLOCK_GET_R(r5,1);
 r6=JAMAICA_BLOCK_GET_DATA32(r6,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 n9=JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_awt_geom_Flattrator_11_ensuracity4,1).i;
 n9=((n9>>20) &  ((jamaica_int32)4095));
 n10=JAMAICA_BLOCK_GET_DATA32(r6,3).i;
 n10=(n10&15);
 r7=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 b2=JAMAICA_BLOCK_GET_DATA32(r7,7).r;
 b2=JAMAICA_BLOCK_GET_DATA32(b2,1).r;
l24:
 if (n8>=JAMAICA_BLOCK_GET_DATA32(r5,6).i) { goto l38; }
 r8=JAMAICA_BLOCK_GET_DATA32(b6,2).r;
 n11=JAMAICA_BLOCK_GET_DATA32(b7,5).i;
 n12=JAMAICA_ADDS32(n11,0);
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 n13=JAMAICA_BLOCK_GET_DATA32(r8,3).i;
 n14=((n13>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n12))>=((jamaica_uint32)(n14))) { goto LABEL_tAIOOBE; }
 n13=(n13&15);
 JAMAICA_GET_ARRAY_DOUBLE(r8,n12,d0);
 n12=JAMAICA_ADDS32(n11,1);
 if (((jamaica_uint32)(n12))>=((jamaica_uint32)(n14))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r8,n12,d1);
 n12=JAMAICA_ADDS32(n11,2);
 if (((jamaica_uint32)(n12))>=((jamaica_uint32)(n14))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r8,n12,d2);
 n12=JAMAICA_ADDS32(n11,3);
 if (((jamaica_uint32)(n12))>=((jamaica_uint32)(n14))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r8,n12,d3);
 n12=JAMAICA_ADDS32(n11,4);
 if (((jamaica_uint32)(n12))>=((jamaica_uint32)(n14))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r8,n12,d4);
 n12=JAMAICA_ADDS32(n11,5);
 if (((jamaica_uint32)(n12))>=((jamaica_uint32)(n14))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r8,n12,d5);
 n12=JAMAICA_ADDS32(n11,6);
 if (((jamaica_uint32)(n12))>=((jamaica_uint32)(n14))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r8,n12,d6);
 n11=JAMAICA_ADDS32(n11,7);
 if (((jamaica_uint32)(n11))>=((jamaica_uint32)(n14))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r8,n11,d7);
{ jamaica_ref m=jam_mtd_java_awt_geom_Cubicrve2D_6_getFlessSq0;
ct->calledMethod=m;
 d0=((jamaica_double(JBICALL *)(jamaica_thread *,jamaica_double,jamaica_double,jamaica_double,jamaica_double,jamaica_double,jamaica_double,jamaica_double,jamaica_double))JAMAICA_BLOCK_GET_P(m,4))(ct,d0,d1,d2,d3,d4,d5,d6,d7);
}
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l27; }
 jamaicaScheduler_syncPointFull(ct);
l27:
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d0)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(JAMAICA_BLOCK_GET_DATA64(r5,4).d)||(d0>JAMAICA_BLOCK_GET_DATA64(r5,4).d))?+1:((d0==JAMAICA_BLOCK_GET_DATA64(r5,4).d)?0:-1))<0) { goto l38; }
 JAMAICA_GET_REF_ARRAY(r6,n9,r8);
{ jamaica_ref m=r8;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r5,6);
}
 r8=JAMAICA_BLOCK_GET_DATA32(b6,2).r;
 n11=JAMAICA_BLOCK_GET_DATA32(b7,5).i;
 n12=JAMAICA_SUBS32(n11,6);
 r9=r8;
 n13=n12;
 r10=r8;
 n14=n11;
 n15=JAMAICA_ADDS32(n11,0);
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 n16=JAMAICA_BLOCK_GET_DATA32(r8,3).i;
 n17=((n16>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n15))>=((jamaica_uint32)(n17))) { goto LABEL_tAIOOBE; }
 n16=(n16&15);
 JAMAICA_GET_ARRAY_DOUBLE(r8,n15,d0);
 d1=d0;
 n15=JAMAICA_ADDS32(n11,1);
 if (((jamaica_uint32)(n15))>=((jamaica_uint32)(n17))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r8,n15,d2);
 d3=d2;
 n15=JAMAICA_ADDS32(n11,2);
 if (((jamaica_uint32)(n15))>=((jamaica_uint32)(n17))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r8,n15,d4);
 n15=JAMAICA_ADDS32(n11,3);
 if (((jamaica_uint32)(n15))>=((jamaica_uint32)(n17))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r8,n15,d5);
 n15=JAMAICA_ADDS32(n11,4);
 if (((jamaica_uint32)(n15))>=((jamaica_uint32)(n17))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r8,n15,d6);
 n15=JAMAICA_ADDS32(n11,5);
 if (((jamaica_uint32)(n15))>=((jamaica_uint32)(n17))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r8,n15,d7);
 n15=JAMAICA_ADDS32(n11,6);
 if (((jamaica_uint32)(n15))>=((jamaica_uint32)(n17))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r8,n15,d8);
 n11=JAMAICA_ADDS32(n11,7);
 if (((jamaica_uint32)(n11))>=((jamaica_uint32)(n17))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_DOUBLE(r8,n11,d9);
 if (r8==JAMAICA_NULL) { goto l30; }
 n11=JAMAICA_ADDS32(n12,0);
 if (((jamaica_uint32)(n11))>=((jamaica_uint32)(n17))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r8,n11,d0);
 n11=JAMAICA_ADDS32(n12,1);
 if (((jamaica_uint32)(n11))>=((jamaica_uint32)(n17))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r8,n11,d2);
l30:
 r8=r10;
 if (r8==JAMAICA_NULL) { goto l32; }
 n11=JAMAICA_ADDS32(n14,6);
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 n12=JAMAICA_BLOCK_GET_DATA32(r8,3).i;
 n15=((n12>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n11))>=((jamaica_uint32)(n15))) { goto LABEL_tAIOOBE; }
 n12=(n12&15);
 JAMAICA_SET_ARRAY_DOUBLE(r8,n11,d8);
 n11=JAMAICA_ADDS32(n14,7);
 if (((jamaica_uint32)(n11))>=((jamaica_uint32)(n15))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r8,n11,d9);
l32:
 d0=d1;
 d1=d4;
 d0=(d0+d1);
 d0=JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_DIV(d0,((jamaica_double) 2.0));
 d2=d3;
 d3=d5;
 d2=(d2+d3);
 d2=JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_DIV(d2,((jamaica_double) 2.0));
 d4=d8;
 d5=d6;
 d4=(d4+d5);
 d4=JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_DIV(d4,((jamaica_double) 2.0));
 d8=d4;
 d6=d9;
 d6=(d6+d7);
 d10=JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_DIV(d6,((jamaica_double) 2.0));
 d9=d10;
 d1=(d1+d5);
 d1=JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_DIV(d1,((jamaica_double) 2.0));
 d3=(d3+d7);
 d3=JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_DIV(d3,((jamaica_double) 2.0));
 d5=(d0+d1);
 d5=JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_DIV(d5,((jamaica_double) 2.0));
 d6=(d2+d3);
 d11=JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_DIV(d6,((jamaica_double) 2.0));
 d1=(d4+d1);
 d1=JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_DIV(d1,((jamaica_double) 2.0));
 d6=d1;
 d3=(d10+d3);
 d3=JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_DIV(d3,((jamaica_double) 2.0));
 d7=d3;
 d1=(d5+d1);
 d4=JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_DIV(d1,((jamaica_double) 2.0));
 d1=d4;
 d3=(d11+d3);
 d10=JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_DIV(d3,((jamaica_double) 2.0));
 d3=d10;
 if (r9==JAMAICA_NULL) { goto l34; }
 n11=JAMAICA_ADDS32(n13,2);
 if (r9==JAMAICA_NULL) { goto LABEL_tNPE; }
 n12=JAMAICA_BLOCK_GET_DATA32(r9,3).i;
 n15=((n12>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n11))>=((jamaica_uint32)(n15))) { goto LABEL_tAIOOBE; }
 n12=(n12&15);
 JAMAICA_SET_ARRAY_DOUBLE(r9,n11,d0);
 n11=JAMAICA_ADDS32(n13,3);
 if (((jamaica_uint32)(n11))>=((jamaica_uint32)(n15))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r9,n11,d2);
 n11=JAMAICA_ADDS32(n13,4);
 if (((jamaica_uint32)(n11))>=((jamaica_uint32)(n15))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r9,n11,d5);
 n11=JAMAICA_ADDS32(n13,5);
 if (((jamaica_uint32)(n11))>=((jamaica_uint32)(n15))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r9,n11,d11);
 n11=JAMAICA_ADDS32(n13,6);
 if (((jamaica_uint32)(n11))>=((jamaica_uint32)(n15))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r9,n11,d4);
 n11=JAMAICA_ADDS32(n13,7);
 if (((jamaica_uint32)(n11))>=((jamaica_uint32)(n15))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r9,n11,d10);
l34:
 if (r10==JAMAICA_NULL) { goto l36; }
 n11=JAMAICA_ADDS32(n14,0);
 if (r10==JAMAICA_NULL) { goto LABEL_tNPE; }
 n12=JAMAICA_BLOCK_GET_DATA32(r10,3).i;
 n13=((n12>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n11))>=((jamaica_uint32)(n13))) { goto LABEL_tAIOOBE; }
 n12=(n12&15);
 JAMAICA_SET_ARRAY_DOUBLE(r10,n11,d1);
 n11=JAMAICA_ADDS32(n14,1);
 if (((jamaica_uint32)(n11))>=((jamaica_uint32)(n13))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r10,n11,d3);
 n11=JAMAICA_ADDS32(n14,2);
 if (((jamaica_uint32)(n11))>=((jamaica_uint32)(n13))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r10,n11,d6);
 n11=JAMAICA_ADDS32(n14,3);
 if (((jamaica_uint32)(n11))>=((jamaica_uint32)(n13))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r10,n11,d7);
 n11=JAMAICA_ADDS32(n14,4);
 if (((jamaica_uint32)(n11))>=((jamaica_uint32)(n13))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r10,n11,d8);
 n11=JAMAICA_ADDS32(n14,5);
 if (((jamaica_uint32)(n11))>=((jamaica_uint32)(n13))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY_DOUBLE(r10,n11,d9);
l36:
 JAMAICA_BLOCK_GET_DATA32(b2,5).i = JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b2,5).i,6);
 n11=JAMAICA_ADDS32(n8,1);
 n8=n11;
 r8=JAMAICA_BLOCK_GET_DATA32(b2,6).r;
 n12=JAMAICA_BLOCK_GET_DATA32(b2,7).i;
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 n13=JAMAICA_BLOCK_GET_DATA32(r8,3).i;
 n14=((n13>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n12))>=((jamaica_uint32)(n14))) { goto LABEL_tAIOOBE; }
 n13=(n13&15);
 JAMAICA_SET_ARRAY32(r8,n12,n11);
 JAMAICA_BLOCK_GET_DATA32(b2,7).i = JAMAICA_ADDS32(n12,1);
 n12=JAMAICA_BLOCK_GET_DATA32(b2,7).i;
 if (((jamaica_uint32)(n12))>=((jamaica_uint32)(n14))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r8,n12,n11);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l24; }
 jamaicaScheduler_syncPointFull(ct);
 goto l24;
l38:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 b6=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,1).r;
 JAMAICA_BLOCK_GET_DATA32(b6,5).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b6,5).i,6);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(b6,7).i = JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b6,7).i,1);
l39:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->m.cli-=4;
 return;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT jamaica_double JBICALL jam_comp_java_awt_geom_Line2D_14_ptSegistSq6(jamaica_thread *ct,jamaica_double d0,jamaica_double d1,jamaica_double d2,jamaica_double d3,jamaica_double d4,jamaica_double d5) {
 jamaica_int32 tp;
 jamaica_double d6=0;
 /* JAMAICA_C_STACK_OVERFLOW not needed for leaf methods */
 tp=ct->m.cli+0;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 d2=(d2-d0);
 d3=(d3-d1);
 d0=(d4-d0);
 d4=d0;
 d1=(d5-d1);
 d5=d1;
 d6=(JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_MUL(d0,d2)+JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_MUL(d1,d3));
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d6)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(((jamaica_double) 0.0))||(d6>((jamaica_double) 0.0)))?+1:((d6==((jamaica_double) 0.0))?0:-1))>0) { goto l4; }
 d2=((jamaica_double) 0.0);
 goto l7;
l4:
 d0=(d2-d0);
 d4=d0;
 d1=(d3-d1);
 d5=d1;
 d0=JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_MUL(d0,d2);
 d1=JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_MUL(d1,d3);
 d0=(d0+d1);
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d0)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(((jamaica_double) 0.0))||(d0>((jamaica_double) 0.0)))?+1:((d0==((jamaica_double) 0.0))?0:-1))>0) { goto l6; }
 d2=((jamaica_double) 0.0);
 goto l7;
l6:
 d2=JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_DIV(JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_MUL(d0,d0),(JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_MUL(d2,d2)+JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_MUL(d3,d3)));
l7:
 d2=((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_MUL(d4,d4)+JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_MUL(d5,d5))-d2);
 d0=d2;
 if (((JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(d2)||JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_ISNAN(((jamaica_double) 0.0))||(d2>((jamaica_double) 0.0)))?+1:((d2==((jamaica_double) 0.0))?0:-1))>=0) { goto l9; }
 d0=((jamaica_double) 0.0);
l9:
 return d0;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
}
JBIEXPORT void JBICALL jam_comp_java_awt_geom_Rectagle2D_32__00030003e0(jamaica_thread *ct,jamaica_ref r0) {
 jamaica_int32 tp;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+0;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT void JBICALL jam_comp_java_awt_geom_RectaShape_35__00030003e0(jamaica_thread *ct,jamaica_ref r0) {
 jamaica_int32 tp;
 /* JAMAICA_C_STACK_OVERFLOW not needed for leaf methods */
 tp=ct->m.cli+0;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
#else
#error 'jamaica.h' not found!
#endif

#ifdef __cplusplus
}
#endif

