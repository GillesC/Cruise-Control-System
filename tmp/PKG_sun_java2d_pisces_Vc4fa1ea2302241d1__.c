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


JBIEXPORT void JBICALL jam_comp_sun_java2d_pisces_PisceCache_2_reallAARLE2(jamaica_thread *ct,jamaica_ref r0,jamaica_int32 n0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r1=JAMAICA_NULL,r2=JAMAICA_NULL;
 jamaica_int32 n1=0,n2=0;
 jamaica_float f0=0;
 jamaica_ref b0=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+2;
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
 b0=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 r1=JAMAICA_BLOCK_GET_DATA32(b0,2).r;
 if (r1!=JAMAICA_NULL) { goto l4; }
 if ((n0<0)) { goto LABEL_tNASE; }
 r1=jamaicaInterpreter_allocSimpleArray(ct,n0,ct->vm->array_class[8]);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,2).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,2).r=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,2).r=new_ref;}
#endif

 goto l9;
l4:
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 n1=JAMAICA_BLOCK_GET_DATA32(r1,3).i;
 n1=((n1>>4) &  ((jamaica_int32)268435455));
 if (n1>=n0) { goto l9; }
 f0=((jamaica_float)n1);
 f0=JAMAICA_NATIVE_MATH_FLOAT_FLOAT_MUL(f0,((jamaica_float) 1.5F));
 n1=JAMAICA_CAST_DOUBLE_TO_INTEGER((jamaica_double)f0);
 n2=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
 if (((n2>>20) |  ((n2>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Math_82,-1);
 }
 n2=n0;
 if (n0<n1) { goto l7; }
 n0=n2;
 goto l8;
l7:
 n0=n1;
l8:
 if ((n0<0)) { goto LABEL_tNASE; }
 r1=jamaicaInterpreter_allocSimpleArray(ct,n0,ct->vm->array_class[8]);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b0=JAMAICA_BLOCK_GET_DATA32(r0,7).r;
 r2=JAMAICA_BLOCK_GET_DATA32(b0,2).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 Jam_java_lang_System_arraycopy(ct,r2,0,r1,0,((JAMAICA_BLOCK_GET_DATA32(r2,3).i>>4) &  ((jamaica_int32)268435455)));
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(b0,2).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(b0,2).r=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(b0,2).r=new_ref;}
#endif

l9:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->m.cli-=2;
 return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
LABEL_tNASE:   jamaica_throwNegArrSzExc(ct);        return;
}
JBIEXPORT void JBICALL jam_comp_sun_java2d_pisces_PisceCache_2_addRLERun4(jamaica_thread *ct,jamaica_ref r0,jamaica_int32 n0,jamaica_int32 n1) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r2=JAMAICA_NULL,r1=JAMAICA_NULL,r3=JAMAICA_NULL;
 jamaica_int32 n3=0,n2=0,n4=0;
 jamaica_float f0=0;
 jamaica_ref b0=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+3;
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
 b0=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 n2=JAMAICA_BLOCK_GET_DATA32(b0,3).i;
 n2=JAMAICA_ADDS32(n2,2);
 r2=r1;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 n3=n2;
 r1=JAMAICA_BLOCK_GET_DATA32(b0,2).r;
 if (r1!=JAMAICA_NULL) { goto l4; }
 if ((n3<0)) { goto LABEL_tNASE; }
 r1=jamaicaInterpreter_allocSimpleArray(ct,n3,ct->vm->array_class[8]);
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,2).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,2).r=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,2).r=new_ref;}
#endif

 goto l9;
l4:
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 n3=JAMAICA_BLOCK_GET_DATA32(r1,3).i;
 n3=((n3>>4) &  ((jamaica_int32)268435455));
 if (n3>=n2) { goto l9; }
 f0=((jamaica_float)n3);
 f0=JAMAICA_NATIVE_MATH_FLOAT_FLOAT_MUL(f0,((jamaica_float) 1.5F));
 n3=JAMAICA_CAST_DOUBLE_TO_INTEGER((jamaica_double)f0);
 n4=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
 if (((n4>>20) |  ((n4>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Math_82,-1);
 }
 n4=n2;
 if (n2<n3) { goto l7; }
 n2=n4;
 goto l8;
l7:
 n2=n3;
l8:
 if ((n2<0)) { goto LABEL_tNASE; }
 r1=jamaicaInterpreter_allocSimpleArray(ct,n2,ct->vm->array_class[8]);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r2,7).r;
 r3=JAMAICA_BLOCK_GET_DATA32(b0,2).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 Jam_java_lang_System_arraycopy(ct,r3,0,r1,0,((JAMAICA_BLOCK_GET_DATA32(r3,3).i>>4) &  ((jamaica_int32)268435455)));
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(b0,2).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(b0,2).r=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(b0,2).r=new_ref;}
#endif

l9:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 b0=JAMAICA_BLOCK_GET_DATA32(r0,7).r;
 r1=JAMAICA_BLOCK_GET_DATA32(b0,2).r;
 n2=JAMAICA_BLOCK_GET_DATA32(b0,3).i;
 JAMAICA_BLOCK_GET_DATA32(b0,3).i = JAMAICA_ADDS32(n2,1);
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 n3=JAMAICA_BLOCK_GET_DATA32(r1,3).i;
 n4=((n3>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n2))>=((jamaica_uint32)(n4))) { goto LABEL_tAIOOBE; }
 n3=(n3&15);
 r2=JAMAICA_BLOCK_GET_R(r1,1);
 JAMAICA_SET_ARRAY8(r1,n2,n0);
 n2=JAMAICA_BLOCK_GET_DATA32(b0,3).i;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(b0,3).i = JAMAICA_ADDS32(n2,1);
 n0=JAMAICA_SUBS32((n1&127),(n1&128));
 if (((jamaica_uint32)(n2))>=((jamaica_uint32)(n4))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY8(r1,n2,n0);
 ct->m.cli-=3;
 return;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
LABEL_tNASE:   jamaica_throwNegArrSzExc(ct);        return;
}
JBIEXPORT void JBICALL jam_comp_sun_java2d_pisces_PisceCache_2_startRow5(jamaica_thread *ct,jamaica_ref r0,jamaica_int32 n0,jamaica_int32 n1,jamaica_int32 n2) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r1=JAMAICA_NULL,r2=JAMAICA_NULL;
 jamaica_int32 n3=0,n4=0,n5=0;
 jamaica_ref b0=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+2;
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
 if (JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r1,7).r,6).i!=0) { goto l4; }
 JAMAICA_BLOCK_GET_DATA32(r0,4).i = n0;
 JAMAICA_BLOCK_GET_DATA32(r0,6).i = JAMAICA_ADDS32(n0,1);
 JAMAICA_BLOCK_GET_DATA32(r0,3).i = n1;
 JAMAICA_BLOCK_GET_DATA32(r0,5).i = JAMAICA_ADDS32(n2,1);
 goto l12;
l4:
 n3=n1;
 if (JAMAICA_BLOCK_GET_DATA32(r1,3).i<=n3) { goto l6; }
 JAMAICA_BLOCK_GET_DATA32(r1,3).i = n3;
l6:
 r1=r0;
 if (JAMAICA_BLOCK_GET_DATA32(r1,5).i>=n2) { goto l8; }
 JAMAICA_BLOCK_GET_DATA32(r1,5).i = n2;
l8:
 r1=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b0=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
l9:
 n2=JAMAICA_BLOCK_GET_DATA32(r1,6).i;
 JAMAICA_BLOCK_GET_DATA32(r1,6).i = JAMAICA_ADDS32(n2,1);
 if (n2>=n0) { goto l12; }
{ jamaica_ref m=jam_mtd_sun_java2d_pisces_PisceCache_2_reallwInfo3;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b0,6).i,1));
}
 r2=JAMAICA_BLOCK_GET_DATA32(b0,5).r;
 n2=JAMAICA_BLOCK_GET_DATA32(b0,6).i;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n3=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 if (((jamaica_uint32)(n2))>=((jamaica_uint32)(((n3>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n4=(n3&15);
 JAMAICA_SET_ARRAY32(r2,n2,0);
 r2=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 n3=JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b0,3).i,2);
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n4=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 if (((jamaica_uint32)(n2))>=((jamaica_uint32)(((n4>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n5=(n4&15);
 JAMAICA_SET_ARRAY32(r2,n2,n3);
 JAMAICA_BLOCK_GET_DATA32(b0,6).i = JAMAICA_ADDS32(n2,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l9; }
 jamaicaScheduler_syncPointFull(ct);
 goto l9;
l12:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 b0=JAMAICA_BLOCK_GET_DATA32(r0,7).r;
{ jamaica_ref m=jam_mtd_sun_java2d_pisces_PisceCache_2_reallwInfo3;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b0,6).i,1));
}
 r1=JAMAICA_BLOCK_GET_DATA32(b0,5).r;
 n0=JAMAICA_BLOCK_GET_DATA32(b0,6).i;
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 n2=JAMAICA_BLOCK_GET_DATA32(r1,3).i;
 if (((jamaica_uint32)(n0))>=((jamaica_uint32)(((n2>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n3=(n2&15);
 JAMAICA_SET_ARRAY32(r1,n0,n1);
 r1=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 n1=JAMAICA_BLOCK_GET_DATA32(b0,3).i;
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 n2=JAMAICA_BLOCK_GET_DATA32(r1,3).i;
 if (((jamaica_uint32)(n0))>=((jamaica_uint32)(((n2>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n3=(n2&15);
 JAMAICA_SET_ARRAY32(r1,n0,n1);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(b0,6).i = JAMAICA_ADDS32(n0,1);
 ct->m.cli-=2;
 return;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT jamaica_int64 JBICALL jam_comp_sun_java2d_pisces_PiscesMath_3_lsqrt0(jamaica_thread *ct,jamaica_int64 j0) {
 jamaica_int32 tp;
 jamaica_int32 n0=0,n1=0;
 jamaica_int64 j1=JAMAICA_INT64_CONST_0,j2=JAMAICA_INT64_CONST_0,j3=JAMAICA_INT64_CONST_0,j4=JAMAICA_INT64_CONST_0,j5=JAMAICA_INT64_CONST_0;
 /* JAMAICA_C_STACK_OVERFLOW not needed for leaf methods */
 tp=ct->m.cli+0;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 n0=16;
 j1=JAMAICA_INT64_CONST_0;
 j2=JAMAICA_INT64_CONST_0;
 n0=JAMAICA_ADDS32(31,JAMAICA_DIVS32(n0,2));
l3:
 j2=JAMAICA_SHIFTL_S64(j2,2);
 j3=JAMAICA_USHIFTR_S64(j0,62);
 j3=JAMAICA_ORS64(j2,j3);
 j2=j3;
 j0=JAMAICA_SHIFTL_S64(j0,2);
 j4=JAMAICA_SHIFTL_S64(j1,1);
 j1=j4;
 j5=JAMAICA_SHIFTL_S64(j4,1);
 j5=JAMAICA_ADDS64(j5,JAMAICA_INT64_CONST_1);
 if ((JAMAICA_GT_S64(j3,j5) ?+1:(JAMAICA_EQ_S64(j3,j5)?0:-1))<0) { goto l5; }
 j2=JAMAICA_SUBS64(j3,j5);
 j1=JAMAICA_ADDS64(j4,JAMAICA_INT64_CONST_1);
l5:
 n1=n0;
 n0=JAMAICA_ADDS32(n1,(-1));
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l7; }
 jamaicaScheduler_syncPointFull(ct);
l7:
 if (n1!=0) { goto l3; }
 return j1;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return JAMAICA_INT64_CONST_0;
}
JBIEXPORT jamaica_int32 JBICALL jam_comp_sun_java2d_pisces_Piscengine_4_Float5_1161(jamaica_thread *ct,jamaica_float f0) {
 jamaica_int32 tp;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+0;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 f0=JAMAICA_NATIVE_MATH_FLOAT_FLOAT_MUL(f0,((jamaica_float) 65536.0F));
 f0=(f0+((jamaica_float) 0.5F));
 if (((JAMAICA_NATIVE_MATH_FLOAT_FLOAT_ISNAN(f0)||JAMAICA_NATIVE_MATH_FLOAT_FLOAT_ISNAN(((jamaica_float) -4.294967296E9F))||(f0>((jamaica_float) -4.294967296E9F)))?+1:((f0==((jamaica_float) -4.294967296E9F))?0:-1))>0) { goto l4; }
 return ((jamaica_int32)0x80000000);
l4:
 if (((JAMAICA_NATIVE_MATH_FLOAT_FLOAT_ISNAN(f0)||JAMAICA_NATIVE_MATH_FLOAT_FLOAT_ISNAN(((jamaica_float) 4.294967296E9F))||(f0<((jamaica_float) 4.294967296E9F)))?-1:((f0==((jamaica_float) 4.294967296E9F))?0:+1))<0) { goto l6; }
 return 2147483647;
l6:
 return JAMAICA_CAST_DOUBLE_TO_INTEGER(JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_FLOOR(((jamaica_double)f0)));
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
}
JBIEXPORT void JBICALL jam_comp_sun_java2d_pisces_Piscengine_4_pathTo8(jamaica_thread *ct,jamaica_ref r4,jamaica_ref r0,jamaica_ref r5) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r15=JAMAICA_NULL,r1=JAMAICA_NULL,r3=JAMAICA_NULL,r6=JAMAICA_NULL,r8=JAMAICA_NULL,r11=JAMAICA_NULL,r13=JAMAICA_NULL,r14=JAMAICA_NULL,r16=JAMAICA_NULL,r17=JAMAICA_NULL,r18=JAMAICA_NULL,r19=JAMAICA_NULL,r20=JAMAICA_NULL,r21=JAMAICA_NULL,r22=JAMAICA_NULL,r23=JAMAICA_NULL,r24=JAMAICA_NULL,r25=JAMAICA_NULL;
 jamaica_int32 n30=0,n31=0,n0=0,n1=0,n3=0,n4=0,n6=0,n8=0,n10=0,n11=0,n13=0,n15=0,n17=0,n18=0,n20=0,n22=0,n24=0,n26=0,n28=0;
 jamaica_float f0=0;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+20;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->m.cli = tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[13];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[13]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[13]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[11]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 r15=jamaicaInterpreter_allocSimpleArray(ct,2,ct->vm->array_class[6]);
 r16=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r16;}
#else
{jamaica_ref new_ref=r16;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r1=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 r3=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 n1=0;
 n0=0;
 n4=0;
 n3=0;
 r6=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 n6=0;
 n8=0;
 n11=0;
 n10=0;
 r8=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 n13=0;
 n15=0;
 n18=0;
 n17=0;
 r11=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r11;}
#else
{jamaica_ref new_ref=r11;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

 n20=0;
 n22=0;
 r13=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r13;}
#else
{jamaica_ref new_ref=r13;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

 n24=0;
 n26=0;
 n28=0;
 r14=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=r14;}
#else
{jamaica_ref new_ref=r14;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[8]=new_ref;}
#endif

 if (r16==JAMAICA_NULL) { goto l4; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 r1=jamaicaInterpreter_getInterfaceMethod(ct,r16,jam_mtd_java_awt_geom_PathIrator_26_isDone1);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

l4:
 r17=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=r17;}
#else
{jamaica_ref new_ref=r17;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[9]=new_ref;}
#endif

 r18=r15;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=r18;}
#else
{jamaica_ref new_ref=r18;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[10]=new_ref;}
#endif

 if (r17==JAMAICA_NULL) { goto l6; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 r3=jamaicaInterpreter_getInterfaceMethod(ct,r17,jam_mtd_java_awt_geom_PathIrator_26_curregment3);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

l6:
 r19=r4;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[12];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[12]=r19;}
#else
{jamaica_ref new_ref=r19;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[12]=new_ref;}
#endif

 if (r18==JAMAICA_NULL) { goto l8; }
 n0=JAMAICA_BLOCK_GET_DATA32(r18,3).i;
 n1=((n0>>4) &  ((jamaica_int32)268435455));
 n0=(n0&15);
l8:
 r20=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[14];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[14]=r20;}
#else
{jamaica_ref new_ref=r20;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[14]=new_ref;}
#endif

 r21=r15;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[15];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[15]=r21;}
#else
{jamaica_ref new_ref=r21;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[15]=new_ref;}
#endif

 if (r21==JAMAICA_NULL) { goto l10; }
 n3=JAMAICA_BLOCK_GET_DATA32(r21,3).i;
 n4=((n3>>4) &  ((jamaica_int32)268435455));
 n3=(n3&15);
l10:
 if (r20==JAMAICA_NULL) { goto l12; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 r6=JAMAICA_BLOCK_GET_R(r20,1);
 r6=JAMAICA_BLOCK_GET_DATA32(r6,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 n6=JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_java2d_pisces_LineSink_1_moveTo1,1).i;
 n6=((n6>>20) &  ((jamaica_int32)4095));
 n8=JAMAICA_BLOCK_GET_DATA32(r6,3).i;
 n8=(n8&15);
l12:
 r22=r15;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[16];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[16]=r22;}
#else
{jamaica_ref new_ref=r22;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[16]=new_ref;}
#endif

 if (r22==JAMAICA_NULL) { goto l14; }
 n10=JAMAICA_BLOCK_GET_DATA32(r22,3).i;
 n11=((n10>>4) &  ((jamaica_int32)268435455));
 n10=(n10&15);
l14:
 r23=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[17];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[17]=r23;}
#else
{jamaica_ref new_ref=r23;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[17]=new_ref;}
#endif

 if (r23==JAMAICA_NULL) { goto l16; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 r8=JAMAICA_BLOCK_GET_R(r23,1);
 r8=JAMAICA_BLOCK_GET_DATA32(r8,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 n13=JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_java2d_pisces_LineSink_1_lineJoin2,1).i;
 n13=((n13>>20) &  ((jamaica_int32)4095));
 n15=JAMAICA_BLOCK_GET_DATA32(r8,3).i;
 n15=(n15&15);
l16:
 r24=r15;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[18];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[18]=r24;}
#else
{jamaica_ref new_ref=r24;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[18]=new_ref;}
#endif

 if (r24==JAMAICA_NULL) { goto l18; }
 n17=JAMAICA_BLOCK_GET_DATA32(r24,3).i;
 n18=((n17>>4) &  ((jamaica_int32)268435455));
 n17=(n17&15);
l18:
 if (r23==JAMAICA_NULL) { goto l20; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

 r15=JAMAICA_BLOCK_GET_R(r23,1);
 r11=JAMAICA_BLOCK_GET_DATA32(r15,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r11;}
#else
{jamaica_ref new_ref=r11;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

 n20=JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_java2d_pisces_LineSink_1_lineTo3,1).i;
 n20=((n20>>20) &  ((jamaica_int32)4095));
 n22=JAMAICA_BLOCK_GET_DATA32(r11,3).i;
 n22=(n22&15);
l20:
 r25=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[19];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[19]=r25;}
#else
{jamaica_ref new_ref=r25;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[19]=new_ref;}
#endif

 if (r25==JAMAICA_NULL) { goto l22; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

 r15=JAMAICA_BLOCK_GET_R(r25,1);
 r13=JAMAICA_BLOCK_GET_DATA32(r15,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r13;}
#else
{jamaica_ref new_ref=r13;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

 n24=JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_java2d_pisces_LineSink_1_lineJoin2,1).i;
 n24=((n24>>20) &  ((jamaica_int32)4095));
 n26=JAMAICA_BLOCK_GET_DATA32(r13,3).i;
 n26=(n26&15);
 n28=JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_java2d_pisces_LineSink_1_close4,1).i;
 n28=((n28>>20) &  ((jamaica_int32)4095));
l22:
 if (r0==JAMAICA_NULL) { goto l79; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=JAMAICA_NULL;}
#else
{l[8]=JAMAICA_NULL;}
#endif

 r14=jamaicaInterpreter_getInterfaceMethod(ct,r0,jam_mtd_java_awt_geom_PathIrator_26_next2);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=r14;}
#else
{jamaica_ref new_ref=r14;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[8]=new_ref;}
#endif

 if (r16==JAMAICA_NULL) { goto l79; }
 if (r17==JAMAICA_NULL) { goto l79; }
 if (r18==JAMAICA_NULL) { goto l79; }
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n1))) { goto l79; }
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n1))) { goto l79; }
 if (r21==JAMAICA_NULL) { goto l79; }
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n4))) { goto l79; }
 if (r20==JAMAICA_NULL) { goto l79; }
 if (r22==JAMAICA_NULL) { goto l79; }
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n11))) { goto l79; }
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n11))) { goto l79; }
 if (r23==JAMAICA_NULL) { goto l79; }
 if (r24==JAMAICA_NULL) { goto l79; }
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n18))) { goto l79; }
 if (r23==JAMAICA_NULL) { goto l79; }
 if (r25==JAMAICA_NULL) { goto l79; }
 if (n0!=0) { goto l79; }
 if (n3!=0) { goto l79; }
 if (n8!=0) { goto l79; }
 if (n10!=0) { goto l79; }
 if (n15!=0) { goto l79; }
 if (n17!=0) { goto l79; }
 if (n22!=0) { goto l79; }
 if (n26!=0) { goto l79; }
l47:
{ jamaica_ref m=r1;
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 n30=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r16);
}
 if (n30!=0) { goto l111; }
{ jamaica_ref m=r3;
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 n30=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r17,r18);
}
 switch (n30) {
 case 0: goto l49;
 case 1: goto l62;
 case 2: goto l76;
 case 3: goto l76;
 case 4: goto l75;
 default: goto l76;
 }
l49:
 JAMAICA_GET_ARRAY_FLOAT_D0(r18,0,f0);
{ jamaica_ref m=jam_mtd_sun_java2d_pisces_Piscengine_4_coordOk9;
ct->calledMethod=m;
 n30=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_float))JAMAICA_BLOCK_GET_P(m,4))(ct,r19,f0);
}
 if (n30==0) { goto l77; }
 JAMAICA_GET_ARRAY_FLOAT_D0(r18,1,f0);
{ jamaica_ref m=jam_mtd_sun_java2d_pisces_Piscengine_4_coordOk9;
ct->calledMethod=m;
 n30=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_float))JAMAICA_BLOCK_GET_P(m,4))(ct,r19,f0);
}
 if (n30==0) { goto l77; }
 JAMAICA_GET_ARRAY_FLOAT_D0(r18,0,f0);
 f0=JAMAICA_NATIVE_MATH_FLOAT_FLOAT_MUL(f0,((jamaica_float) 65536.0F));
 f0=(f0+((jamaica_float) 0.5F));
 if (((JAMAICA_NATIVE_MATH_FLOAT_FLOAT_ISNAN(f0)||JAMAICA_NATIVE_MATH_FLOAT_FLOAT_ISNAN(((jamaica_float) -4.294967296E9F))||(f0>((jamaica_float) -4.294967296E9F)))?+1:((f0==((jamaica_float) -4.294967296E9F))?0:-1))>0) { goto l53; }
 n30=((jamaica_int32)0x80000000);
 goto l56;
l53:
 if (((JAMAICA_NATIVE_MATH_FLOAT_FLOAT_ISNAN(f0)||JAMAICA_NATIVE_MATH_FLOAT_FLOAT_ISNAN(((jamaica_float) 4.294967296E9F))||(f0<((jamaica_float) 4.294967296E9F)))?-1:((f0==((jamaica_float) 4.294967296E9F))?0:+1))<0) { goto l55; }
 n30=2147483647;
 goto l56;
l55:
 n30=JAMAICA_CAST_DOUBLE_TO_INTEGER(JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_FLOOR(((jamaica_double)f0)));
l56:
 JAMAICA_GET_ARRAY_FLOAT_D0(r21,1,f0);
 f0=JAMAICA_NATIVE_MATH_FLOAT_FLOAT_MUL(f0,((jamaica_float) 65536.0F));
 f0=(f0+((jamaica_float) 0.5F));
 if (((JAMAICA_NATIVE_MATH_FLOAT_FLOAT_ISNAN(f0)||JAMAICA_NATIVE_MATH_FLOAT_FLOAT_ISNAN(((jamaica_float) -4.294967296E9F))||(f0>((jamaica_float) -4.294967296E9F)))?+1:((f0==((jamaica_float) -4.294967296E9F))?0:-1))>0) { goto l58; }
 n31=((jamaica_int32)0x80000000);
 goto l61;
l58:
 if (((JAMAICA_NATIVE_MATH_FLOAT_FLOAT_ISNAN(f0)||JAMAICA_NATIVE_MATH_FLOAT_FLOAT_ISNAN(((jamaica_float) 4.294967296E9F))||(f0<((jamaica_float) 4.294967296E9F)))?-1:((f0==((jamaica_float) 4.294967296E9F))?0:+1))<0) { goto l60; }
 n31=2147483647;
 goto l61;
l60:
 n31=JAMAICA_CAST_DOUBLE_TO_INTEGER(JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_FLOOR(((jamaica_double)f0)));
l61:
 JAMAICA_GET_REF_ARRAY_D0(r6,n6,r15);
{ jamaica_ref m=r15;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r20,n30,n31);
}
 goto l77;
l62:
 JAMAICA_GET_ARRAY_FLOAT_D0(r22,0,f0);
{ jamaica_ref m=jam_mtd_sun_java2d_pisces_Piscengine_4_coordOk9;
ct->calledMethod=m;
 n30=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_float))JAMAICA_BLOCK_GET_P(m,4))(ct,r4,f0);
}
 if (n30==0) { goto l77; }
 JAMAICA_GET_ARRAY_FLOAT_D0(r22,1,f0);
{ jamaica_ref m=jam_mtd_sun_java2d_pisces_Piscengine_4_coordOk9;
ct->calledMethod=m;
 n30=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_float))JAMAICA_BLOCK_GET_P(m,4))(ct,r4,f0);
}
 if (n30==0) { goto l77; }
 JAMAICA_GET_REF_ARRAY_D0(r8,n13,r15);
{ jamaica_ref m=r15;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r23);
}
 JAMAICA_GET_ARRAY_FLOAT_D0(r22,0,f0);
 f0=JAMAICA_NATIVE_MATH_FLOAT_FLOAT_MUL(f0,((jamaica_float) 65536.0F));
 f0=(f0+((jamaica_float) 0.5F));
 if (((JAMAICA_NATIVE_MATH_FLOAT_FLOAT_ISNAN(f0)||JAMAICA_NATIVE_MATH_FLOAT_FLOAT_ISNAN(((jamaica_float) -4.294967296E9F))||(f0>((jamaica_float) -4.294967296E9F)))?+1:((f0==((jamaica_float) -4.294967296E9F))?0:-1))>0) { goto l66; }
 n30=((jamaica_int32)0x80000000);
 goto l69;
l66:
 if (((JAMAICA_NATIVE_MATH_FLOAT_FLOAT_ISNAN(f0)||JAMAICA_NATIVE_MATH_FLOAT_FLOAT_ISNAN(((jamaica_float) 4.294967296E9F))||(f0<((jamaica_float) 4.294967296E9F)))?-1:((f0==((jamaica_float) 4.294967296E9F))?0:+1))<0) { goto l68; }
 n30=2147483647;
 goto l69;
l68:
 n30=JAMAICA_CAST_DOUBLE_TO_INTEGER(JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_FLOOR(((jamaica_double)f0)));
l69:
 JAMAICA_GET_ARRAY_FLOAT_D0(r24,1,f0);
 f0=JAMAICA_NATIVE_MATH_FLOAT_FLOAT_MUL(f0,((jamaica_float) 65536.0F));
 f0=(f0+((jamaica_float) 0.5F));
 if (((JAMAICA_NATIVE_MATH_FLOAT_FLOAT_ISNAN(f0)||JAMAICA_NATIVE_MATH_FLOAT_FLOAT_ISNAN(((jamaica_float) -4.294967296E9F))||(f0>((jamaica_float) -4.294967296E9F)))?+1:((f0==((jamaica_float) -4.294967296E9F))?0:-1))>0) { goto l71; }
 n31=((jamaica_int32)0x80000000);
 goto l74;
l71:
 if (((JAMAICA_NATIVE_MATH_FLOAT_FLOAT_ISNAN(f0)||JAMAICA_NATIVE_MATH_FLOAT_FLOAT_ISNAN(((jamaica_float) 4.294967296E9F))||(f0<((jamaica_float) 4.294967296E9F)))?-1:((f0==((jamaica_float) 4.294967296E9F))?0:+1))<0) { goto l73; }
 n31=2147483647;
 goto l74;
l73:
 n31=JAMAICA_CAST_DOUBLE_TO_INTEGER(JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_FLOOR(((jamaica_double)f0)));
l74:
 JAMAICA_GET_REF_ARRAY_D0(r11,n20,r15);
{ jamaica_ref m=r15;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r23,n30,n31);
}
 goto l77;
l75:
 JAMAICA_GET_REF_ARRAY_D0(r13,n24,r15);
{ jamaica_ref m=r15;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r25);
}
 JAMAICA_GET_REF_ARRAY_D0(r13,n28,r15);
{ jamaica_ref m=r15;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r25);
}
 goto l77;
l76:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[19];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[19]=JAMAICA_NULL;}
#else
{l[19]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[18];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[18]=JAMAICA_NULL;}
#else
{l[18]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[17];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[17]=JAMAICA_NULL;}
#else
{l[17]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[16];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[16]=JAMAICA_NULL;}
#else
{l[16]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[15];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[15]=JAMAICA_NULL;}
#else
{l[15]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[14];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[14]=JAMAICA_NULL;}
#else
{l[14]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[13];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[13]=JAMAICA_NULL;}
#else
{l[13]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[12];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[12]=JAMAICA_NULL;}
#else
{l[12]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=JAMAICA_NULL;}
#else
{l[11]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=JAMAICA_NULL;}
#else
{l[10]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=JAMAICA_NULL;}
#else
{l[9]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=JAMAICA_NULL;}
#else
{l[8]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 
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

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 r15=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_InterError_73);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r15;}
#else
{jamaica_ref new_ref=r15;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (r15==JAMAICA_NULL) { goto LABEL_tOOME; }
{ jamaica_ref m=jam_mtd_java_lang_InterError_73__00030003e1;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r15,jam_str_sun_java2d_pisces_Piscengine_453);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 jamaicaExceptions_throw(ct,r15);
l77:
{ jamaica_ref m=r14;
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r0);
}
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l47; }
 jamaicaScheduler_syncPointFull(ct);
 goto l47;
l79:
 if (r16==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=r1;
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 n30=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r16);
}
 if (n30!=0) { goto l111; }
 if (r17==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=r3;
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 n30=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r17,r18);
}
 switch (n30) {
 case 0: goto l81;
 case 1: goto l94;
 case 2: goto l108;
 case 3: goto l108;
 case 4: goto l107;
 default: goto l108;
 }
l81:
 if (r18==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n1))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_FLOAT(r18,0,f0);
{ jamaica_ref m=jam_mtd_sun_java2d_pisces_Piscengine_4_coordOk9;
ct->calledMethod=m;
 n30=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_float))JAMAICA_BLOCK_GET_P(m,4))(ct,r19,f0);
}
 if (n30==0) { goto l109; }
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n1))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_FLOAT(r18,1,f0);
{ jamaica_ref m=jam_mtd_sun_java2d_pisces_Piscengine_4_coordOk9;
ct->calledMethod=m;
 n30=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_float))JAMAICA_BLOCK_GET_P(m,4))(ct,r19,f0);
}
 if (n30==0) { goto l109; }
 JAMAICA_GET_ARRAY_FLOAT(r18,0,f0);
 f0=JAMAICA_NATIVE_MATH_FLOAT_FLOAT_MUL(f0,((jamaica_float) 65536.0F));
 f0=(f0+((jamaica_float) 0.5F));
 if (((JAMAICA_NATIVE_MATH_FLOAT_FLOAT_ISNAN(f0)||JAMAICA_NATIVE_MATH_FLOAT_FLOAT_ISNAN(((jamaica_float) -4.294967296E9F))||(f0>((jamaica_float) -4.294967296E9F)))?+1:((f0==((jamaica_float) -4.294967296E9F))?0:-1))>0) { goto l85; }
 n30=((jamaica_int32)0x80000000);
 goto l88;
l85:
 if (((JAMAICA_NATIVE_MATH_FLOAT_FLOAT_ISNAN(f0)||JAMAICA_NATIVE_MATH_FLOAT_FLOAT_ISNAN(((jamaica_float) 4.294967296E9F))||(f0<((jamaica_float) 4.294967296E9F)))?-1:((f0==((jamaica_float) 4.294967296E9F))?0:+1))<0) { goto l87; }
 n30=2147483647;
 goto l88;
l87:
 n30=JAMAICA_CAST_DOUBLE_TO_INTEGER(JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_FLOOR(((jamaica_double)f0)));
l88:
 if (r21==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n4))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_FLOAT(r21,1,f0);
 f0=JAMAICA_NATIVE_MATH_FLOAT_FLOAT_MUL(f0,((jamaica_float) 65536.0F));
 f0=(f0+((jamaica_float) 0.5F));
 if (((JAMAICA_NATIVE_MATH_FLOAT_FLOAT_ISNAN(f0)||JAMAICA_NATIVE_MATH_FLOAT_FLOAT_ISNAN(((jamaica_float) -4.294967296E9F))||(f0>((jamaica_float) -4.294967296E9F)))?+1:((f0==((jamaica_float) -4.294967296E9F))?0:-1))>0) { goto l90; }
 n31=((jamaica_int32)0x80000000);
 goto l93;
l90:
 if (((JAMAICA_NATIVE_MATH_FLOAT_FLOAT_ISNAN(f0)||JAMAICA_NATIVE_MATH_FLOAT_FLOAT_ISNAN(((jamaica_float) 4.294967296E9F))||(f0<((jamaica_float) 4.294967296E9F)))?-1:((f0==((jamaica_float) 4.294967296E9F))?0:+1))<0) { goto l92; }
 n31=2147483647;
 goto l93;
l92:
 n31=JAMAICA_CAST_DOUBLE_TO_INTEGER(JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_FLOOR(((jamaica_double)f0)));
l93:
 if (r20==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_GET_REF_ARRAY(r6,n6,r15);
{ jamaica_ref m=r15;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r20,n30,n31);
}
 goto l109;
l94:
 if (r22==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n11))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_FLOAT(r22,0,f0);
{ jamaica_ref m=jam_mtd_sun_java2d_pisces_Piscengine_4_coordOk9;
ct->calledMethod=m;
 n30=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_float))JAMAICA_BLOCK_GET_P(m,4))(ct,r4,f0);
}
 if (n30==0) { goto l109; }
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n11))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_FLOAT(r22,1,f0);
{ jamaica_ref m=jam_mtd_sun_java2d_pisces_Piscengine_4_coordOk9;
ct->calledMethod=m;
 n30=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_float))JAMAICA_BLOCK_GET_P(m,4))(ct,r4,f0);
}
 if (n30==0) { goto l109; }
 if (r23==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_GET_REF_ARRAY(r8,n13,r15);
{ jamaica_ref m=r15;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r23);
}
 JAMAICA_GET_ARRAY_FLOAT(r22,0,f0);
 f0=JAMAICA_NATIVE_MATH_FLOAT_FLOAT_MUL(f0,((jamaica_float) 65536.0F));
 f0=(f0+((jamaica_float) 0.5F));
 if (((JAMAICA_NATIVE_MATH_FLOAT_FLOAT_ISNAN(f0)||JAMAICA_NATIVE_MATH_FLOAT_FLOAT_ISNAN(((jamaica_float) -4.294967296E9F))||(f0>((jamaica_float) -4.294967296E9F)))?+1:((f0==((jamaica_float) -4.294967296E9F))?0:-1))>0) { goto l98; }
 n30=((jamaica_int32)0x80000000);
 goto l101;
l98:
 if (((JAMAICA_NATIVE_MATH_FLOAT_FLOAT_ISNAN(f0)||JAMAICA_NATIVE_MATH_FLOAT_FLOAT_ISNAN(((jamaica_float) 4.294967296E9F))||(f0<((jamaica_float) 4.294967296E9F)))?-1:((f0==((jamaica_float) 4.294967296E9F))?0:+1))<0) { goto l100; }
 n30=2147483647;
 goto l101;
l100:
 n30=JAMAICA_CAST_DOUBLE_TO_INTEGER(JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_FLOOR(((jamaica_double)f0)));
l101:
 if (r24==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n18))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY_FLOAT(r24,1,f0);
 f0=JAMAICA_NATIVE_MATH_FLOAT_FLOAT_MUL(f0,((jamaica_float) 65536.0F));
 f0=(f0+((jamaica_float) 0.5F));
 if (((JAMAICA_NATIVE_MATH_FLOAT_FLOAT_ISNAN(f0)||JAMAICA_NATIVE_MATH_FLOAT_FLOAT_ISNAN(((jamaica_float) -4.294967296E9F))||(f0>((jamaica_float) -4.294967296E9F)))?+1:((f0==((jamaica_float) -4.294967296E9F))?0:-1))>0) { goto l103; }
 n31=((jamaica_int32)0x80000000);
 goto l106;
l103:
 if (((JAMAICA_NATIVE_MATH_FLOAT_FLOAT_ISNAN(f0)||JAMAICA_NATIVE_MATH_FLOAT_FLOAT_ISNAN(((jamaica_float) 4.294967296E9F))||(f0<((jamaica_float) 4.294967296E9F)))?-1:((f0==((jamaica_float) 4.294967296E9F))?0:+1))<0) { goto l105; }
 n31=2147483647;
 goto l106;
l105:
 n31=JAMAICA_CAST_DOUBLE_TO_INTEGER(JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_FLOOR(((jamaica_double)f0)));
l106:
 if (r23==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_GET_REF_ARRAY(r11,n20,r15);
{ jamaica_ref m=r15;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r23,n30,n31);
}
 goto l109;
l107:
 if (r25==JAMAICA_NULL) { goto LABEL_tNPE; }
 JAMAICA_GET_REF_ARRAY(r13,n24,r15);
{ jamaica_ref m=r15;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r25);
}
 JAMAICA_GET_REF_ARRAY(r13,n28,r15);
{ jamaica_ref m=r15;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r25);
}
 goto l109;
l108:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[19];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[19]=JAMAICA_NULL;}
#else
{l[19]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[18];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[18]=JAMAICA_NULL;}
#else
{l[18]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[17];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[17]=JAMAICA_NULL;}
#else
{l[17]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[16];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[16]=JAMAICA_NULL;}
#else
{l[16]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[15];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[15]=JAMAICA_NULL;}
#else
{l[15]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[14];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[14]=JAMAICA_NULL;}
#else
{l[14]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[13];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[13]=JAMAICA_NULL;}
#else
{l[13]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[12];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[12]=JAMAICA_NULL;}
#else
{l[12]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=JAMAICA_NULL;}
#else
{l[11]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=JAMAICA_NULL;}
#else
{l[10]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=JAMAICA_NULL;}
#else
{l[9]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=JAMAICA_NULL;}
#else
{l[8]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 
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

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 r15=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_InterError_73);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r15;}
#else
{jamaica_ref new_ref=r15;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (r15==JAMAICA_NULL) { goto LABEL_tOOME; }
{ jamaica_ref m=jam_mtd_java_lang_InterError_73__00030003e1;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r15,jam_str_sun_java2d_pisces_Piscengine_453);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 jamaicaExceptions_throw(ct,r15);
l109:
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=r14;
ct->calledMethod=m;
 if(m == JAMAICA_NULL) jamaica_throwIncompClassChangeErr(ct);
 if(JAMAICA_BLOCK_GET_I(m,1) & 1024 )jamaica_throwAbstrMethodErr(ct);
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r0);
}
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l79; }
 jamaicaScheduler_syncPointFull(ct);
 goto l79;
l111:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[19];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[19]=JAMAICA_NULL;}
#else
{l[19]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[18];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[18]=JAMAICA_NULL;}
#else
{l[18]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[17];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[17]=JAMAICA_NULL;}
#else
{l[17]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[16];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[16]=JAMAICA_NULL;}
#else
{l[16]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[15];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[15]=JAMAICA_NULL;}
#else
{l[15]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[14];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[14]=JAMAICA_NULL;}
#else
{l[14]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[12];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[12]=JAMAICA_NULL;}
#else
{l[12]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=JAMAICA_NULL;}
#else
{l[11]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=JAMAICA_NULL;}
#else
{l[10]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=JAMAICA_NULL;}
#else
{l[9]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=JAMAICA_NULL;}
#else
{l[8]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 
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

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 r15=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r5,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_java2d_pisces_LineSink_1_end5,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r15,3).i&15);
 JAMAICA_GET_REF_ARRAY(r15,n0,r15);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[13];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[13]=JAMAICA_NULL;}
#else
{l[13]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r15;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r5);
}
 ct->m.cli-=20;
 return;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return;
LABEL_tOOME:   jamaica_throwOutOfMemErr(ct);        return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT void JBICALL jam_comp_sun_java2d_pisces_Piscerator_7_getAlpha7(jamaica_thread *volatile ct,jamaica_ref volatile r4,jamaica_ref volatile r0,jamaica_int32 volatile n12,jamaica_int32 volatile n13) {
 jamaica_int32 volatile tp;
 jamaica_native_longjump u;
 jamaica_GCEnv *volatile gc = ct->m.gcenv;
 jamaica_ref *volatile l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref volatile r6=JAMAICA_NULL,r7=JAMAICA_NULL,r8=JAMAICA_NULL;
 jamaica_int32 volatile n14=0,n16=0,n0=0,n18=0,n19=0,n20=0,n21=0,n22=0,n8=0,n24=0,n27=0,n28=0,n10=0,n15=0,n17=0,n23=0,n25=0,n26=0;
 jamaica_ref volatile b0=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+8;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 if (JAMAICA_NATIVE_ON_LONGJUMP(u)) {
   jamaica_clearRefsOnExc(ct,tp);
    while (1) {
  jamaica_ref ec=JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(ct->cT,3),1);
  switch(n14) {
  case 1: if (jamaicaClasses_compatibleClass(ct,ec,jam_class_java_lang_Runtiption_125)) { goto l21; } else { n14=0; break; }
  case 2: if (jamaicaClasses_compatibleClass(ct,ec,jam_class_java_lang_Runtiption_125)) { goto l34; } /* fall through */
  default: jamaica_propagate_exception(ct);
  }
  jamaicaScheduler_syncPoint(ct);
  }
 }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=JAMAICA_LONG_JUMP_BUF_TO_INDEX(ct,&u);
 {jamaica_ref m=jam_mtd_sun_java2d_pisces_Piscerator_7_getAlpha7;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

l2:
 n14=0;
 r6=r4;
 n15=JAMAICA_BLOCK_GET_DATA32(r6,4).i;
 n16=n15;
 n15=JAMAICA_ADDS32(n15,32);
 n0=n15;
 n17=JAMAICA_BLOCK_GET_DATA32(r6,5).i;
 n18=n17;
 n19=JAMAICA_ADDS32(n17,32);
 r6=JAMAICA_BLOCK_GET_DATA32(r6,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 n17=JAMAICA_BLOCK_GET_DATA32(r6,5).i;
 if (n15<=n17) { goto l4; }
 n0=n17;
l4:
 r6=r4;
 r6=JAMAICA_BLOCK_GET_DATA32(r6,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 n15=JAMAICA_BLOCK_GET_DATA32(r6,6).i;
 if (n19<=n15) { goto l6; }
 n19=n15;
l6:
 n15=n18;
 r6=JAMAICA_BLOCK_GET_DATA32(r4,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 n17=JAMAICA_BLOCK_GET_DATA32(r6,4).i;
 n15=JAMAICA_SUBS32(n15,n17);
 n18=n15;
 n19=JAMAICA_SUBS32(n19,n17);
 n20=n12;
 n21=n15;
l7:
 if (n21>=n19) { goto l49; }
 r6=JAMAICA_BLOCK_GET_DATA32(r4,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 r7=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 n15=JAMAICA_BLOCK_GET_DATA32(r7,3).i;
 if (((jamaica_uint32)(n21))>=((jamaica_uint32)(((n15>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n17=(n15&15);
 JAMAICA_GET_ARRAY32(r7,n21,n15);
 n22=n15;
 r6=JAMAICA_BLOCK_GET_DATA32(b0,5).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 n15=JAMAICA_BLOCK_GET_DATA32(r6,3).i;
 if (((jamaica_uint32)(n21))>=((jamaica_uint32)(((n15>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n17=(n15&15);
 JAMAICA_GET_ARRAY32(r6,n21,n15);
 n8=n15;
 n17=n0;
 if (n15<=n17) { goto l10; }
 n8=n17;
l10:
 n15=n16;
 if (n8<=n15) { goto l19; }
 n17=n8;
 r6=r0;
 n10=0;
 n12=0;
 r7=JAMAICA_NULL;
 if (r6==JAMAICA_NULL) { goto l16; }
 n12=JAMAICA_BLOCK_GET_DATA32(r6,3).i;
 n10=((n12>>4) &  ((jamaica_int32)268435455));
 n12=(n12&15);
 r7=JAMAICA_BLOCK_GET_R(r6,1);
 if (n12!=0) { goto l16; }
l13:
 if (n15>=n17) { goto l19; }
 n23=n20;
 n20=JAMAICA_ADDS32(n23,1);
 if (((jamaica_uint32)(n23))>=((jamaica_uint32)(n10))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY8_D0(r6,n23,0);
 n15=JAMAICA_ADDS32(n15,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l13; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
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

 goto l13;
l16:
 if (n15>=n17) { goto l19; }
 n23=n20;
 n20=JAMAICA_ADDS32(n23,1);
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n23))>=((jamaica_uint32)(n10))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY8(r6,n23,0);
 n15=JAMAICA_ADDS32(n15,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l16; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
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

 goto l16;
l19:
 n17=n8;
 if (n17>=n0) { goto l37; }
 n24=0;
 n14=1;
 r6=r4;
 r7=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r6,7).r,2).r;
 r6=JAMAICA_BLOCK_GET_DATA32(r6,3).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 r6=JAMAICA_BLOCK_GET_DATA32(b0,2).r;
 n12=n22;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 n15=JAMAICA_BLOCK_GET_DATA32(r6,3).i;
 n10=((n15>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n12))>=((jamaica_uint32)(n10))) { goto LABEL_tAIOOBE; }
 n23=(n15&15);
 r8=JAMAICA_BLOCK_GET_R(r6,1);
 JAMAICA_GET_ARRAY8(r6,n12,n15);
 n15=(n15&255);
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 n25=JAMAICA_BLOCK_GET_DATA32(r7,3).i;
 if (((jamaica_uint32)(n15))>=((jamaica_uint32)(((n25>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n26=(n25&15);
 JAMAICA_GET_ARRAY8(r7,n15,n15);
 n12=JAMAICA_ADDS32(n12,1);
 if (((jamaica_uint32)(n12))>=((jamaica_uint32)(n10))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY8(r6,n12,n12);
 n12=(n12&255);
 n24=n12;
 n14=0;
 if (n12!=0) { goto l22; } else { goto l37; }
l21:
 
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

 r6=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 n14=0;
 b0=JAMAICA_BLOCK_GET_DATA32(jam_fld_java_lang_System_146_out5,7).r;
 r7=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 r0=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Strinilder_140);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 if (r0==JAMAICA_NULL) { goto LABEL_tOOME; }
 jam_comp_java_lang_Strinilder_140__00030003e0(ct,r0);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 r0=jam_comp_java_lang_Strinilder_140_append4(ct,r0,jam_str_sun_java2d_pisces_Piscerator_721);
 n15=JAMAICA_BLOCK_GET_DATA32(r4,6).i;
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_append13(ct,r0,n15);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_toString20(ct,r0);
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r7,1),3).r;
 n15=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_io_Printtream_94_println19,1).i>>20) &  ((jamaica_int32)4095));
 n17=(JAMAICA_BLOCK_GET_DATA32(r8,3).i&15);
 JAMAICA_GET_REF_ARRAY(r8,n15,r8);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r8;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r7,r0);
}
 r7=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 r0=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Strinilder_140);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 if (r0==JAMAICA_NULL) { goto LABEL_tOOME; }
 jam_comp_java_lang_Strinilder_140__00030003e0(ct,r0);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 r0=jam_comp_java_lang_Strinilder_140_append4(ct,r0,jam_str_sun_java2d_pisces_Piscerator_726);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_append13(ct,r0,n16);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_append4(ct,r0,jam_str_sun_java2d_pisces_Piscerator_727);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_append13(ct,r0,n18);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_append4(ct,r0,jam_str_sun_java2d_pisces_Piscerator_728);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_append13(ct,r0,n0);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_append4(ct,r0,jam_str_sun_java2d_pisces_Piscerator_727);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_append13(ct,r0,n19);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_append4(ct,r0,jam_str_sun_java2d_pisces_Piscerator_729);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_toString20(ct,r0);
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r7,1),3).r;
 n15=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_io_Printtream_94_println19,1).i>>20) &  ((jamaica_int32)4095));
 n17=(JAMAICA_BLOCK_GET_DATA32(r8,3).i&15);
 JAMAICA_GET_REF_ARRAY(r8,n15,r8);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r8;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r7,r0);
}
 r7=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 r0=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Strinilder_140);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 if (r0==JAMAICA_NULL) { goto LABEL_tOOME; }
 jam_comp_java_lang_Strinilder_140__00030003e0(ct,r0);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 r0=jam_comp_java_lang_Strinilder_140_append4(ct,r0,jam_str_sun_java2d_pisces_Piscerator_730);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_append13(ct,r0,n8);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_append4(ct,r0,jam_str_sun_java2d_pisces_Piscerator_731);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_append13(ct,r0,n21);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_toString20(ct,r0);
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r7,1),3).r;
 n15=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_io_Printtream_94_println19,1).i>>20) &  ((jamaica_int32)4095));
 n17=(JAMAICA_BLOCK_GET_DATA32(r8,3).i&15);
 JAMAICA_GET_REF_ARRAY(r8,n15,r8);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r8;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r7,r0);
}
 r7=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 r0=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Strinilder_140);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 if (r0==JAMAICA_NULL) { goto LABEL_tOOME; }
 jam_comp_java_lang_Strinilder_140__00030003e0(ct,r0);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 r0=jam_comp_java_lang_Strinilder_140_append4(ct,r0,jam_str_sun_java2d_pisces_Piscerator_732);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_append13(ct,r0,n20);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_append4(ct,r0,jam_str_sun_java2d_pisces_Piscerator_733);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_append13(ct,r0,n22);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_toString20(ct,r0);
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r7,1),3).r;
 n15=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_io_Printtream_94_println19,1).i>>20) &  ((jamaica_int32)4095));
 n17=(JAMAICA_BLOCK_GET_DATA32(r8,3).i&15);
 JAMAICA_GET_REF_ARRAY(r8,n15,r8);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r8;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r7,r0);
}
 r7=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 r0=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Strinilder_140);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 if (r0==JAMAICA_NULL) { goto LABEL_tOOME; }
 jam_comp_java_lang_Strinilder_140__00030003e0(ct,r0);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 r0=jam_comp_java_lang_Strinilder_140_append4(ct,r0,jam_str_sun_java2d_pisces_Piscerator_734);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_append13(ct,r0,n24);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_toString20(ct,r0);
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r7,1),3).r;
 n15=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_io_Printtream_94_println19,1).i>>20) &  ((jamaica_int32)4095));
 n17=(JAMAICA_BLOCK_GET_DATA32(r8,3).i&15);
 JAMAICA_GET_REF_ARRAY(r8,n15,r8);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r8;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r7,r0);
}
 r7=JAMAICA_BLOCK_GET_DATA32(r4,3).r;
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_java2d_pisces_PisceCache_2_print6;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r7,JAMAICA_BLOCK_GET_DATA32(b0,4).r);
}
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 r7=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r6,1),3).r;
 n15=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_lang_Throwable_178_printTrace19,1).i>>20) &  ((jamaica_int32)4095));
 n17=(JAMAICA_BLOCK_GET_DATA32(r7,3).i&15);
 JAMAICA_GET_REF_ARRAY(r7,n15,r7);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r7;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r6);
}
{ jamaica_ref m=jam_mtd_java_lang_System_146_exit28;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,1);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-8;
 return;
l22:
 n27=n17;
 n12=JAMAICA_ADDS32(n17,n12);
 n8=n12;
 n28=n12;
 n12=n16;
 if (n17>=n12) { goto l24; }
 n27=n12;
l24:
 n17=n0;
 if (n28<=n17) { goto l26; }
 n28=n17;
l26:
 n24=JAMAICA_SUBS32(n28,n27);
 r6=r0;
 n12=0;
 n17=0;
 r7=JAMAICA_NULL;
 if (r6==JAMAICA_NULL) { goto l31; }
 n17=JAMAICA_BLOCK_GET_DATA32(r6,3).i;
 n12=((n17>>4) &  ((jamaica_int32)268435455));
 n17=(n17&15);
 r7=JAMAICA_BLOCK_GET_R(r6,1);
 if (n17!=0) { goto l31; }
l28:
 n10=n24;
 n10=JAMAICA_ADDS32(n10,(-1));
 n24=n10;
 if (n10<0) { goto l35; }
 n14=2;
 n10=n20;
 n20=JAMAICA_ADDS32(n10,1);
 if (((jamaica_uint32)(n10))>=((jamaica_uint32)(n12))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY8_D0(r6,n10,n15);
 n14=0;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l28; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
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

 goto l28;
l31:
 n10=n24;
 n10=JAMAICA_ADDS32(n10,(-1));
 n24=n10;
 if (n10<0) { goto l35; }
 n14=2;
 n10=n20;
 n20=JAMAICA_ADDS32(n10,1);
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n10))>=((jamaica_uint32)(n12))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY8(r6,n10,n15);
 n14=0;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l31; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
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

 goto l31;
l34:
 
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

 r6=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 n14=0;
 b0=JAMAICA_BLOCK_GET_DATA32(jam_fld_java_lang_System_146_out5,7).r;
 r7=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 r0=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Strinilder_140);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 if (r0==JAMAICA_NULL) { goto LABEL_tOOME; }
 jam_comp_java_lang_Strinilder_140__00030003e0(ct,r0);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 r0=jam_comp_java_lang_Strinilder_140_append4(ct,r0,jam_str_sun_java2d_pisces_Piscerator_721);
 n15=JAMAICA_BLOCK_GET_DATA32(r4,6).i;
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_append13(ct,r0,n15);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_toString20(ct,r0);
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r7,1),3).r;
 n15=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_io_Printtream_94_println19,1).i>>20) &  ((jamaica_int32)4095));
 n17=(JAMAICA_BLOCK_GET_DATA32(r8,3).i&15);
 JAMAICA_GET_REF_ARRAY(r8,n15,r8);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r8;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r7,r0);
}
 r7=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 r0=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Strinilder_140);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 if (r0==JAMAICA_NULL) { goto LABEL_tOOME; }
 jam_comp_java_lang_Strinilder_140__00030003e0(ct,r0);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 r0=jam_comp_java_lang_Strinilder_140_append4(ct,r0,jam_str_sun_java2d_pisces_Piscerator_726);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_append13(ct,r0,n16);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_append4(ct,r0,jam_str_sun_java2d_pisces_Piscerator_727);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_append13(ct,r0,n18);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_append4(ct,r0,jam_str_sun_java2d_pisces_Piscerator_728);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_append13(ct,r0,n0);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_append4(ct,r0,jam_str_sun_java2d_pisces_Piscerator_727);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_append13(ct,r0,n19);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_append4(ct,r0,jam_str_sun_java2d_pisces_Piscerator_729);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_toString20(ct,r0);
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r7,1),3).r;
 n15=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_io_Printtream_94_println19,1).i>>20) &  ((jamaica_int32)4095));
 n17=(JAMAICA_BLOCK_GET_DATA32(r8,3).i&15);
 JAMAICA_GET_REF_ARRAY(r8,n15,r8);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r8;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r7,r0);
}
 r7=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 r0=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Strinilder_140);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 if (r0==JAMAICA_NULL) { goto LABEL_tOOME; }
 jam_comp_java_lang_Strinilder_140__00030003e0(ct,r0);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 r0=jam_comp_java_lang_Strinilder_140_append4(ct,r0,jam_str_sun_java2d_pisces_Piscerator_730);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_append13(ct,r0,n8);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_append4(ct,r0,jam_str_sun_java2d_pisces_Piscerator_731);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_append13(ct,r0,n21);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_toString20(ct,r0);
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r7,1),3).r;
 n15=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_io_Printtream_94_println19,1).i>>20) &  ((jamaica_int32)4095));
 n17=(JAMAICA_BLOCK_GET_DATA32(r8,3).i&15);
 JAMAICA_GET_REF_ARRAY(r8,n15,r8);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r8;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r7,r0);
}
 r7=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 r0=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Strinilder_140);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 if (r0==JAMAICA_NULL) { goto LABEL_tOOME; }
 jam_comp_java_lang_Strinilder_140__00030003e0(ct,r0);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 r0=jam_comp_java_lang_Strinilder_140_append4(ct,r0,jam_str_sun_java2d_pisces_Piscerator_732);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_append13(ct,r0,n20);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_append4(ct,r0,jam_str_sun_java2d_pisces_Piscerator_733);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_append13(ct,r0,n22);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_toString20(ct,r0);
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r7,1),3).r;
 n15=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_io_Printtream_94_println19,1).i>>20) &  ((jamaica_int32)4095));
 n17=(JAMAICA_BLOCK_GET_DATA32(r8,3).i&15);
 JAMAICA_GET_REF_ARRAY(r8,n15,r8);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r8;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r7,r0);
}
 r7=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 r0=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Strinilder_140);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 if (r0==JAMAICA_NULL) { goto LABEL_tOOME; }
 jam_comp_java_lang_Strinilder_140__00030003e0(ct,r0);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 r0=jam_comp_java_lang_Strinilder_140_append4(ct,r0,jam_str_sun_java2d_pisces_Piscerator_738);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_append13(ct,r0,n27);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_append4(ct,r0,jam_str_sun_java2d_pisces_Piscerator_739);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_append13(ct,r0,n28);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_toString20(ct,r0);
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r7,1),3).r;
 n15=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_io_Printtream_94_println19,1).i>>20) &  ((jamaica_int32)4095));
 n17=(JAMAICA_BLOCK_GET_DATA32(r8,3).i&15);
 JAMAICA_GET_REF_ARRAY(r8,n15,r8);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r8;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r7,r0);
}
 r7=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 r0=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Strinilder_140);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 if (r0==JAMAICA_NULL) { goto LABEL_tOOME; }
 jam_comp_java_lang_Strinilder_140__00030003e0(ct,r0);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 r0=jam_comp_java_lang_Strinilder_140_append4(ct,r0,jam_str_sun_java2d_pisces_Piscerator_734);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_append13(ct,r0,n24);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 r0=jam_comp_java_lang_Strinilder_140_toString20(ct,r0);
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 r8=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r7,1),3).r;
 n15=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_io_Printtream_94_println19,1).i>>20) &  ((jamaica_int32)4095));
 n17=(JAMAICA_BLOCK_GET_DATA32(r8,3).i&15);
 JAMAICA_GET_REF_ARRAY(r8,n15,r8);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r8;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r7,r0);
}
 r7=JAMAICA_BLOCK_GET_DATA32(r4,3).r;
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_java2d_pisces_PisceCache_2_print6;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r7,JAMAICA_BLOCK_GET_DATA32(b0,4).r);
}
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 r7=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r6,1),3).r;
 n15=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_lang_Throwable_178_printTrace19,1).i>>20) &  ((jamaica_int32)4095));
 n17=(JAMAICA_BLOCK_GET_DATA32(r7,3).i&15);
 JAMAICA_GET_REF_ARRAY(r7,n15,r7);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r7;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r6);
}
{ jamaica_ref m=jam_mtd_java_lang_System_146_exit28;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,1);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-8;
 return;
l35:
 n22=JAMAICA_ADDS32(n22,2);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l19; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 goto l19;
l37:
 n15=n16;
 if (n8>=n15) { goto l39; }
 n8=n15;
l39:
 n15=n0;
 r6=r0;
 n12=0;
 n17=0;
 r7=JAMAICA_NULL;
 if (r6==JAMAICA_NULL) { goto l44; }
 n17=JAMAICA_BLOCK_GET_DATA32(r6,3).i;
 n12=((n17>>4) &  ((jamaica_int32)268435455));
 n17=(n17&15);
 r7=JAMAICA_BLOCK_GET_R(r6,1);
 if (n17!=0) { goto l44; }
l41:
 if (n8>=n15) { goto l47; }
 n10=n20;
 n20=JAMAICA_ADDS32(n10,1);
 if (((jamaica_uint32)(n10))>=((jamaica_uint32)(n12))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY8_D0(r6,n10,0);
 n8=JAMAICA_ADDS32(n8,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l41; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
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

 goto l41;
l44:
 if (n8>=n15) { goto l47; }
 n10=n20;
 n20=JAMAICA_ADDS32(n10,1);
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n10))>=((jamaica_uint32)(n12))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY8(r6,n10,0);
 n8=JAMAICA_ADDS32(n8,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l44; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
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

 goto l44;
l47:
 n20=JAMAICA_ADDS32(n20,JAMAICA_SUBS32(n13,JAMAICA_SUBS32(n15,n16)));
 n21=JAMAICA_ADDS32(n21,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l7; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 goto l7;
l49:
 r6=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r4,1),3).r;
 n15=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_java2d_pisces_Piscerator_7_nextTile6,1).i>>20) &  ((jamaica_int32)4095));
 n17=(JAMAICA_BLOCK_GET_DATA32(r6,3).i&15);
 JAMAICA_GET_REF_ARRAY(r6,n15,r6);
{ jamaica_ref m=r6;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r4);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-8;
 return;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return;
LABEL_tOOME:   jamaica_throwOutOfMemErr(ct);        return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT void JBICALL jam_comp_sun_java2d_pisces_Renderer_8_lineTo6(jamaica_thread *ct,jamaica_ref r0,jamaica_int32 n0,jamaica_int32 n1) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r1=JAMAICA_NULL;
 jamaica_int32 n2=0,n3=0,n4=0;
 jamaica_ref b0=JAMAICA_NULL;
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
 b0=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,3).r;
 n2=JAMAICA_BLOCK_GET_DATA32(b0,4).i;
 n3=n1;
 if (n2!=n3) { goto l4; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,3).r,3).i = n0;
 ct->m.cli-=1;
 return;
l4:
 if (n2>=n3) { goto l6; }
 n2=1;
 goto l7;
l6:
 n2=(-1);
l7:
 n3=n2;
 r1=r0;
 b0=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,2).r;
 n4=JAMAICA_BLOCK_GET_DATA32(b0,1).i;
 if (n4!=0) { goto l9; }
 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,2).r,0).i = n3;
 goto l11;
l9:
 if (n2==n4) { goto l11; }
 JAMAICA_BLOCK_GET_DATA32(b0,2).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b0,2).i,1);
l11:
 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r;
 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,2).r,1).i = n3;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,3).r;
 jam_comp_sun_java2d_pisces_Renderer_8_addEdge17(ct,r0,JAMAICA_BLOCK_GET_DATA32(b0,3).i,(JAMAICA_BLOCK_GET_DATA32(b0,4).i|1),n0,(n1|1));
 JAMAICA_BLOCK_GET_DATA32(b0,3).i = n0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(b0,4).i = n1;
 ct->m.cli-=1;
 return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT void JBICALL jam_comp_sun_java2d_pisces_Renderer_8_compurEdge9(jamaica_thread *ct,jamaica_ref r0,jamaica_int32 n5,jamaica_int32 n6,jamaica_int32 n7) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r1=JAMAICA_NULL,r2=JAMAICA_NULL,r3=JAMAICA_NULL,r4=JAMAICA_NULL;
 jamaica_int32 n11=0,n13=0,n15=0,n8=0,n9=0,n10=0,n12=0,n14=0,n16=0;
 jamaica_int64 j1=JAMAICA_INT64_CONST_0,j2=JAMAICA_INT64_CONST_0,j3=JAMAICA_INT64_CONST_0,j4=JAMAICA_INT64_CONST_0;
 jamaica_ref b5=JAMAICA_NULL,b6=JAMAICA_NULL,b7=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+2;
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
 r1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,2).r,4).r;
 n8=JAMAICA_ADDS32(n5,1);
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 n9=JAMAICA_BLOCK_GET_DATA32(r1,3).i;
 n10=((n9>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n8))>=((jamaica_uint32)(n10))) { goto LABEL_tAIOOBE; }
 n9=(n9&15);
 JAMAICA_GET_ARRAY32(r1,n8,n8);
 n11=n8;
 n12=JAMAICA_ADDS32(n5,3);
 if (((jamaica_uint32)(n12))>=((jamaica_uint32)(n10))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r1,n12,n9);
 if (n8<=n6) { goto l4; }
 n8=n11;
 goto l5;
l4:
 n8=n6;
l5:
 n10=n8;
 if (n9>=n7) { goto l7; }
 n8=n9;
 goto l8;
l7:
 n8=n7;
l8:
 r1=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b5=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 b6=JAMAICA_BLOCK_GET_DATA32(b5,1).r;
 n12=JAMAICA_BLOCK_GET_DATA32(b6,1).i;
 n10=JAMAICA_ADDS32(n10,n12);
 n6=JAMAICA_BLOCK_GET_DATA32(b6,2).i;
 n10=(n10&n6);
 n10=JAMAICA_ADDS32(n10,n12);
 n8=JAMAICA_SUBS32(n8,n12);
 n8=(n8&n6);
 n8=JAMAICA_ADDS32(n8,n12);
 n12=n8;
 if (n10<=n8) { goto l10; }
 
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

 ct->m.cli-=2;
 return;
l10:
 b7=JAMAICA_BLOCK_GET_DATA32(b5,0).r;
 b7=JAMAICA_BLOCK_GET_DATA32(b7,2).r;
 r2=JAMAICA_BLOCK_GET_DATA32(b7,4).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n6=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 n7=((n6>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n5))>=((jamaica_uint32)(n7))) { goto LABEL_tAIOOBE; }
 n6=(n6&15);
 JAMAICA_GET_ARRAY32(r2,n5,n13);
 n14=JAMAICA_ADDS32(n5,2);
 if (((jamaica_uint32)(n14))>=((jamaica_uint32)(n7))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r2,n14,n14);
 j1=JAMAICA_INT32_TO_INT64(n14);
 j2=JAMAICA_INT32_TO_INT64(n13);
 j1=JAMAICA_SUBS64(j1,j2);
 j3=JAMAICA_INT32_TO_INT64(n9);
 j4=JAMAICA_INT32_TO_INT64(n11);
 j3=JAMAICA_SUBS64(j3,j4);
 n5=JAMAICA_ADDS32(n5,4);
 if (((jamaica_uint32)(n5))>=((jamaica_uint32)(n7))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r2,n5,n5);
 n9=n5;
 if (JAMAICA_EQ_S64(j3,JAMAICA_INT64_CONST_0)) { goto LABEL_tAE; }
 j2=JAMAICA_ADDS64(JAMAICA_DIVS64(JAMAICA_MULS64(JAMAICA_SUBS64(JAMAICA_INT32_TO_INT64(n10),j4),j1),j3),j2);
 j4=j2;
 jam_comp_sun_java2d_pisces_Renderer_8_addCrssing24(ct,r1,((n10>>(JAMAICA_BLOCK_GET_DATA32(b5,7).i&31)) | (((n10>=0)||((JAMAICA_BLOCK_GET_DATA32(b5,7).i&31)==0))?0:(((jamaica_int32)-1)<<(32-(JAMAICA_BLOCK_GET_DATA32(b5,7).i&31))))),JAMAICA_INT64_TO_INT32(JAMAICA_SHIFTR_S64(j2,(JAMAICA_BLOCK_GET_DATA32(b5,6).i&63))),n5);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 n11=JAMAICA_BLOCK_GET_DATA32(b6,0).i;
 n10=JAMAICA_ADDS32(n10,n11);
 n5=n10;
 if (n10<=n8) { goto l12; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->m.cli-=2;
 return;
l12:
 j1=JAMAICA_DIVS64(JAMAICA_MULS64(JAMAICA_INT32_TO_INT64(n11),j1),j3);
 n8=n12;
 r1=r0;
 b5=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 n10=JAMAICA_BLOCK_GET_DATA32(b5,6).i;
 n10=(n10&63);
 n11=n9;
 b6=JAMAICA_BLOCK_GET_DATA32(b5,0).r;
 b6=JAMAICA_BLOCK_GET_DATA32(b6,1).r;
 b7=JAMAICA_BLOCK_GET_DATA32(r0,7).r;
 b7=JAMAICA_BLOCK_GET_DATA32(b7,1).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 n9=JAMAICA_BLOCK_GET_DATA32(b7,0).i;
l13:
 if (n5>n8) { goto l23; }
 j2=j4;
 j2=JAMAICA_ADDS64(j2,j1);
 j4=j2;
 j2=JAMAICA_SHIFTR_S64(j2,n10);
 n12=JAMAICA_INT64_TO_INT32(j2);
 r2=r1;
 n6=((n5>>(JAMAICA_BLOCK_GET_DATA32(b5,7).i&31)) | (((n5>=0)||((JAMAICA_BLOCK_GET_DATA32(b5,7).i&31)==0))?0:(((jamaica_int32)-1)<<(32-(JAMAICA_BLOCK_GET_DATA32(b5,7).i&31)))));
 n7=n12;
 n13=n11;
 if (n12>=JAMAICA_BLOCK_GET_DATA32(b6,4).i) { goto l16; }
 JAMAICA_BLOCK_GET_DATA32(b6,4).i = n12;
l16:
 n12=n7;
 r3=r2;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 b7=JAMAICA_BLOCK_GET_DATA32(r3,7).r;
 b7=JAMAICA_BLOCK_GET_DATA32(b7,0).r;
 b7=JAMAICA_BLOCK_GET_DATA32(b7,1).r;
 if (n12<=JAMAICA_BLOCK_GET_DATA32(b7,5).i) { goto l18; }
 JAMAICA_BLOCK_GET_DATA32(b7,5).i = n12;
l18:
 r3=r2;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 b7=JAMAICA_BLOCK_GET_DATA32(r3,7).r;
 b7=JAMAICA_BLOCK_GET_DATA32(b7,0).r;
 b7=JAMAICA_BLOCK_GET_DATA32(b7,1).r;
 r4=JAMAICA_BLOCK_GET_DATA32(b7,0).r;
 n12=n6;
 n6=JAMAICA_BLOCK_GET_DATA32(b7,2).i;
 n12=JAMAICA_SUBS32(n12,n6);
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 n6=JAMAICA_BLOCK_GET_DATA32(r4,3).i;
 n14=((n6>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n12))>=((jamaica_uint32)(n14))) { goto LABEL_tAIOOBE; }
 n6=(n6&15);
 JAMAICA_GET_ARRAY32(r4,n12,n15);
 n16=JAMAICA_ADDS32(n15,1);
 JAMAICA_SET_ARRAY32(r4,n12,n16);
 n12=n7;
 n12=(n12<<1);
 n7=n12;
 r3=JAMAICA_BLOCK_GET_DATA32(b7,1).r;
 r4=r3;
 n6=n15;
 if (n13!=1) { goto l20; }
 n12=(n7|1);
 goto l21;
l20:
 r4=r3;
 n6=n15;
l21:
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 n7=JAMAICA_BLOCK_GET_DATA32(r4,3).i;
 if (((jamaica_uint32)(n6))>=((jamaica_uint32)(((n7>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n13=(n7&15);
 JAMAICA_SET_ARRAY32(r4,n6,n12);
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b7=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r2,7).r,0).r,1).r;
 JAMAICA_BLOCK_GET_DATA32(b7,7).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b7,7).i,1);
 n5=JAMAICA_ADDS32(n5,n9);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l13; }
 
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

 goto l13;
l23:
 ct->m.cli-=2;
 return;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
LABEL_tAE:     jamaica_throwArithmExc(ct);          return;
}
JBIEXPORT void JBICALL jam_comp_sun_java2d_pisces_Renderer_8__1endering11(jamaica_thread *ct,jamaica_ref r0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r2=JAMAICA_NULL,r3=JAMAICA_NULL,r4=JAMAICA_NULL,r5=JAMAICA_NULL,r6=JAMAICA_NULL,r7=JAMAICA_NULL,r8=JAMAICA_NULL,r9=JAMAICA_NULL,r10=JAMAICA_NULL,r11=JAMAICA_NULL;
 jamaica_int32 n10=0,n13=0,n14=0,n2=0,n16=0,n25=0,n27=0,n9=0,n11=0,n12=0,n15=0,n17=0,n18=0,n19=0,n20=0,n21=0,n22=0,n23=0,n24=0,n26=0,n28=0;
 jamaica_int64 j1=JAMAICA_INT64_CONST_0,j2=JAMAICA_INT64_CONST_0,j3=JAMAICA_INT64_CONST_0,j4=JAMAICA_INT64_CONST_0;
 jamaica_ref b4=JAMAICA_NULL,b7=JAMAICA_NULL,b10=JAMAICA_NULL,b11=JAMAICA_NULL,b12=JAMAICA_NULL,b13=JAMAICA_NULL,b19=JAMAICA_NULL,b20=JAMAICA_NULL,b21=JAMAICA_NULL,b22=JAMAICA_NULL,b23=JAMAICA_NULL,b24=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+8;
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
 r2=r0;
 b19=JAMAICA_BLOCK_GET_DATA32(r2,7).r;
 b20=JAMAICA_BLOCK_GET_DATA32(b19,0).r;
 b20=JAMAICA_BLOCK_GET_DATA32(b20,2).r;
 if (JAMAICA_BLOCK_GET_DATA32(b20,2).i!=0) { goto l4; }
 b19=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,3).r;
 JAMAICA_BLOCK_GET_DATA32(b19,0).i = 0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(b19,1).i = (-1);
 ct->m.cli-=8;
 return;
l4:
 b19=JAMAICA_BLOCK_GET_DATA32(b19,1).r;
 n9=JAMAICA_BLOCK_GET_DATA32(b19,5).i;
 if (JAMAICA_BLOCK_GET_DATA32(b20,6).i<=n9) { goto l6; }
 n9=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,2).r,6).i;
l6:
 n10=n9;
 r2=r0;
 b19=JAMAICA_BLOCK_GET_DATA32(r2,7).r;
 b20=JAMAICA_BLOCK_GET_DATA32(b19,1).r;
 n9=JAMAICA_BLOCK_GET_DATA32(b20,7).i;
 if (JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b19,0).r,2).r,7).i>=n9) { goto l8; }
 n9=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,2).r,7).i;
l8:
 if (n10<=n9) { goto l10; }
 b19=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,3).r;
 JAMAICA_BLOCK_GET_DATA32(b19,0).i = 0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(b19,1).i = (-1);
 ct->m.cli-=8;
 return;
l10:
 r2=r0;
 b19=JAMAICA_BLOCK_GET_DATA32(r2,7).r;
 n11=JAMAICA_BLOCK_GET_DATA32(b19,7).i;
 n11=(n11&31);
 n12=JAMAICA_BLOCK_GET_DATA32(r2,6).i;
 n10=(((n10>>n11) | (((n10>=0)||(n11==0))?0:(((jamaica_int32)-1)<<(32-n11))))&(n12^(-1)));
 n13=n10;
 n9=(((n9>>n11) | (((n9>=0)||(n11==0))?0:(((jamaica_int32)-1)<<(32-n11))))|n12);
 n12=n9;
 n10=JAMAICA_ADDS32(JAMAICA_SUBS32(n9,n10),1);
 n14=n10;
 b19=JAMAICA_BLOCK_GET_DATA32(b19,1).r;
 n10=JAMAICA_BLOCK_GET_DATA32(b19,7).i;
 n10=((n10>>n11) | (((n10>=0)||(n11==0))?0:(((jamaica_int32)-1)<<(32-n11))));
 n10=JAMAICA_SUBS32(n10,1);
 if (n9<=n10) { goto l12; }
 n12=n10;
l12:
 b19=JAMAICA_BLOCK_GET_DATA32(r0,7).r;
 b20=JAMAICA_BLOCK_GET_DATA32(b19,0).r;
 b21=JAMAICA_BLOCK_GET_DATA32(b20,3).r;
 JAMAICA_BLOCK_GET_DATA32(b21,0).i = 2147483647;
 JAMAICA_BLOCK_GET_DATA32(b21,1).i = ((jamaica_int32)0x80000000);
 n9=(JAMAICA_BLOCK_GET_DATA32(r0,4).i&31);
 n10=JAMAICA_BLOCK_GET_DATA32(b19,3).i;
 n11=JAMAICA_SUBS32(JAMAICA_ADDS32(n12,n10),1);
 n9=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b20,2).r,2).i;
 n9=JAMAICA_MULS32(n9,n10);
 if (n9==0) { goto LABEL_tAE; }
 n9=JAMAICA_DIVS32(32768,n9);
 n10=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
 if (((n10>>20) |  ((n10>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Math_82,-1);
 }
 n9=jam_comp_java_lang_Math_82_min23(ct,n9,n14);
 n10=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
 n9=jam_comp_java_lang_Math_82_max19(ct,n9,1);
 n10=n12;
 n11=n9;
 r2=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b19=JAMAICA_BLOCK_GET_DATA32(r2,7).r;
 b20=JAMAICA_BLOCK_GET_DATA32(b19,0).r;
 b20=JAMAICA_BLOCK_GET_DATA32(b20,2).r;
 b21=JAMAICA_BLOCK_GET_DATA32(b19,1).r;
 r3=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 b4=JAMAICA_BLOCK_GET_DATA32(r3,7).r;
 b4=JAMAICA_BLOCK_GET_DATA32(b4,0).r;
 b4=JAMAICA_BLOCK_GET_DATA32(b4,2).r;
 r4=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 b7=JAMAICA_BLOCK_GET_DATA32(r4,7).r;
 b7=JAMAICA_BLOCK_GET_DATA32(b7,0).r;
 b7=JAMAICA_BLOCK_GET_DATA32(b7,2).r;
 r5=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 b10=JAMAICA_BLOCK_GET_DATA32(r5,7).r;
 b11=JAMAICA_BLOCK_GET_DATA32(b10,0).r;
 b12=JAMAICA_BLOCK_GET_DATA32(b11,3).r;
 r6=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 b13=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
l13:
 if (n13>n10) { goto l50; }
 n14=JAMAICA_BLOCK_GET_DATA32(b19,3).i;
 n15=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
 if (((n15>>20) |  ((n15>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Math_82,-1);
 }
 n14=jam_comp_java_lang_Math_82_min23(ct,JAMAICA_SUBS32(JAMAICA_ADDS32(n13,JAMAICA_MULS32(n11,n14)),1),n12);
{ jamaica_ref m=jam_mtd_sun_java2d_pisces_Renderer_8_setCrtents19;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,n13,n14,JAMAICA_BLOCK_GET_DATA32(b20,2).i);
}
 n15=(JAMAICA_BLOCK_GET_DATA32(b19,7).i&31);
 n2=(n13<<n15);
 n14=((n14<<n15)|(JAMAICA_BLOCK_GET_DATA32(b21,2).i^(-1)));
 n15=JAMAICA_BLOCK_GET_DATA32(b20,5).i;
 n16=0;
l15:
 if (n16>=n15) { goto l46; }
 r7=JAMAICA_BLOCK_GET_DATA32(b4,4).r;
 n17=n16;
 n18=JAMAICA_ADDS32(n17,3);
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 n19=JAMAICA_BLOCK_GET_DATA32(r7,3).i;
 n20=((n19>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n18))>=((jamaica_uint32)(n20))) { goto LABEL_tAIOOBE; }
 n19=(n19&15);
 JAMAICA_GET_ARRAY32(r7,n18,n18);
 if (n18>=n2) { goto l18; }
 JAMAICA_BLOCK_GET_DATA32(b7,5).i = JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b7,5).i,5);
 n17=JAMAICA_BLOCK_GET_DATA32(b7,5).i;
 r7=JAMAICA_BLOCK_GET_DATA32(b7,4).r;
 n18=JAMAICA_ADDS32(n16,1);
 n19=JAMAICA_ADDS32(n17,1);
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 n20=JAMAICA_BLOCK_GET_DATA32(r7,3).i;
 n21=((n20>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n17))>=((jamaica_uint32)(n21))) { goto LABEL_tAIOOBE; }
 n20=(n20&15);
 JAMAICA_GET_ARRAY32(r7,n17,n17);
 if (((jamaica_uint32)(n16))>=((jamaica_uint32)(n21))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r7,n16,n17);
 n17=JAMAICA_ADDS32(n18,1);
 n22=JAMAICA_ADDS32(n19,1);
 if (((jamaica_uint32)(n19))>=((jamaica_uint32)(n21))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r7,n19,n19);
 if (((jamaica_uint32)(n18))>=((jamaica_uint32)(n21))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r7,n18,n19);
 n18=JAMAICA_ADDS32(n17,1);
 n19=JAMAICA_ADDS32(n22,1);
 if (((jamaica_uint32)(n22))>=((jamaica_uint32)(n21))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r7,n22,n22);
 if (((jamaica_uint32)(n17))>=((jamaica_uint32)(n21))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r7,n17,n22);
 n17=JAMAICA_ADDS32(n18,1);
 n22=JAMAICA_ADDS32(n19,1);
 if (((jamaica_uint32)(n19))>=((jamaica_uint32)(n21))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r7,n19,n19);
 if (((jamaica_uint32)(n18))>=((jamaica_uint32)(n21))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r7,n18,n19);
 if (((jamaica_uint32)(n22))>=((jamaica_uint32)(n21))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r7,n22,n18);
 if (((jamaica_uint32)(n17))>=((jamaica_uint32)(n21))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r7,n17,n18);
 n15=JAMAICA_ADDS32(n15,(-5));
 n16=JAMAICA_ADDS32(n16,(-5));
 goto l44;
l18:
 n21=JAMAICA_ADDS32(n17,1);
 if (((jamaica_uint32)(n21))>=((jamaica_uint32)(n20))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r7,n21,n19);
 if (n19>n14) { goto l44; }
 r7=r3;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

 n20=n14;
 n21=n19;
 if (n19<=n2) { goto l21; }
 n19=n21;
 goto l22;
l21:
 n19=n2;
l22:
 n22=n19;
 n19=n20;
 if (n18>=n19) { goto l24; }
 n19=n18;
l24:
 n20=n22;
 r8=r7;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 b22=JAMAICA_BLOCK_GET_DATA32(r8,7).r;
 b23=JAMAICA_BLOCK_GET_DATA32(b22,1).r;
 n22=JAMAICA_BLOCK_GET_DATA32(b23,1).i;
 n20=JAMAICA_ADDS32(n20,n22);
 n23=JAMAICA_BLOCK_GET_DATA32(b23,2).i;
 n20=(n20&n23);
 n20=JAMAICA_ADDS32(n20,n22);
 n19=JAMAICA_SUBS32(n19,n22);
 n19=(n19&n23);
 n19=JAMAICA_ADDS32(n19,n22);
 n22=n19;
 if (n20>n19) { goto l44; }
 b24=JAMAICA_BLOCK_GET_DATA32(b22,0).r;
 b24=JAMAICA_BLOCK_GET_DATA32(b24,2).r;
 r9=JAMAICA_BLOCK_GET_DATA32(b24,4).r;
 if (r9==JAMAICA_NULL) { goto LABEL_tNPE; }
 n23=JAMAICA_BLOCK_GET_DATA32(r9,3).i;
 n24=((n23>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n17))>=((jamaica_uint32)(n24))) { goto LABEL_tAIOOBE; }
 n23=(n23&15);
 JAMAICA_GET_ARRAY32(r9,n17,n25);
 n26=JAMAICA_ADDS32(n17,2);
 if (((jamaica_uint32)(n26))>=((jamaica_uint32)(n24))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r9,n26,n26);
 j1=JAMAICA_INT32_TO_INT64(n26);
 j2=JAMAICA_INT32_TO_INT64(n25);
 j1=JAMAICA_SUBS64(j1,j2);
 j3=JAMAICA_INT32_TO_INT64(n18);
 n18=n21;
 j4=JAMAICA_INT32_TO_INT64(n18);
 j3=JAMAICA_SUBS64(j3,j4);
 n17=JAMAICA_ADDS32(n17,4);
 if (((jamaica_uint32)(n17))>=((jamaica_uint32)(n24))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r9,n17,n17);
 n18=n17;
 if (JAMAICA_EQ_S64(j3,JAMAICA_INT64_CONST_0)) { goto LABEL_tAE; }
 j2=JAMAICA_ADDS64(JAMAICA_DIVS64(JAMAICA_MULS64(JAMAICA_SUBS64(JAMAICA_INT32_TO_INT64(n20),j4),j1),j3),j2);
 j4=j2;
 jam_comp_sun_java2d_pisces_Renderer_8_addCrssing24(ct,r8,((n20>>(JAMAICA_BLOCK_GET_DATA32(b22,7).i&31)) | (((n20>=0)||((JAMAICA_BLOCK_GET_DATA32(b22,7).i&31)==0))?0:(((jamaica_int32)-1)<<(32-(JAMAICA_BLOCK_GET_DATA32(b22,7).i&31))))),JAMAICA_INT64_TO_INT32(JAMAICA_SHIFTR_S64(j2,(JAMAICA_BLOCK_GET_DATA32(b22,6).i&63))),n17);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

 n21=JAMAICA_BLOCK_GET_DATA32(b23,0).i;
 n20=JAMAICA_ADDS32(n20,n21);
 n17=n20;
 if (n20>n19) { goto l44; }
 j1=JAMAICA_DIVS64(JAMAICA_MULS64(JAMAICA_INT32_TO_INT64(n21),j1),j3);
 n19=n22;
 r8=r7;
 b22=JAMAICA_NULL;
 n20=0;
 b23=JAMAICA_NULL;
 n21=0;
 if (r8==JAMAICA_NULL) { goto l28; }
 b22=JAMAICA_BLOCK_GET_DATA32(r8,7).r;
 n20=JAMAICA_BLOCK_GET_DATA32(b22,6).i;
 n20=(n20&63);
l28:
 if (r8==JAMAICA_NULL) { goto l30; }
 b23=JAMAICA_BLOCK_GET_DATA32(b22,0).r;
 b23=JAMAICA_BLOCK_GET_DATA32(b23,1).r;
l30:
 if (r7==JAMAICA_NULL) { goto l32; }
 b24=JAMAICA_BLOCK_GET_DATA32(r7,7).r;
 b24=JAMAICA_BLOCK_GET_DATA32(b24,1).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

 n21=JAMAICA_BLOCK_GET_DATA32(b24,0).i;
l32:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l34; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

l34:
 if (n17>n19) { goto l44; }
 j2=j4;
 j2=JAMAICA_ADDS64(j2,j1);
 j4=j2;
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 j2=JAMAICA_SHIFTR_S64(j2,n20);
 n22=JAMAICA_INT64_TO_INT32(j2);
 r9=r8;
 n23=((n17>>(JAMAICA_BLOCK_GET_DATA32(b22,7).i&31)) | (((n17>=0)||((JAMAICA_BLOCK_GET_DATA32(b22,7).i&31)==0))?0:(((jamaica_int32)-1)<<(32-(JAMAICA_BLOCK_GET_DATA32(b22,7).i&31)))));
 n24=n22;
 n25=n18;
 if (n22>=JAMAICA_BLOCK_GET_DATA32(b23,4).i) { goto l37; }
 JAMAICA_BLOCK_GET_DATA32(b23,4).i = n22;
l37:
 n22=n24;
 r10=r9;
 if (r10==JAMAICA_NULL) { goto LABEL_tNPE; }
 b24=JAMAICA_BLOCK_GET_DATA32(r10,7).r;
 b24=JAMAICA_BLOCK_GET_DATA32(b24,0).r;
 b24=JAMAICA_BLOCK_GET_DATA32(b24,1).r;
 if (n22<=JAMAICA_BLOCK_GET_DATA32(b24,5).i) { goto l39; }
 JAMAICA_BLOCK_GET_DATA32(b24,5).i = n22;
l39:
 r10=r9;
 if (r10==JAMAICA_NULL) { goto LABEL_tNPE; }
 b24=JAMAICA_BLOCK_GET_DATA32(r10,7).r;
 b24=JAMAICA_BLOCK_GET_DATA32(b24,0).r;
 b24=JAMAICA_BLOCK_GET_DATA32(b24,1).r;
 r11=JAMAICA_BLOCK_GET_DATA32(b24,0).r;
 n22=n23;
 n23=JAMAICA_BLOCK_GET_DATA32(b24,2).i;
 n22=JAMAICA_SUBS32(n22,n23);
 if (r11==JAMAICA_NULL) { goto LABEL_tNPE; }
 n23=JAMAICA_BLOCK_GET_DATA32(r11,3).i;
 n26=((n23>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n22))>=((jamaica_uint32)(n26))) { goto LABEL_tAIOOBE; }
 n23=(n23&15);
 JAMAICA_GET_ARRAY32(r11,n22,n27);
 n28=JAMAICA_ADDS32(n27,1);
 JAMAICA_SET_ARRAY32(r11,n22,n28);
 n22=n24;
 n22=(n22<<1);
 n24=n22;
 r10=JAMAICA_BLOCK_GET_DATA32(b24,1).r;
 r11=r10;
 n23=n27;
 if (n25!=1) { goto l41; }
 n22=(n24|1);
 goto l42;
l41:
 r11=r10;
 n23=n27;
l42:
 if (r11==JAMAICA_NULL) { goto LABEL_tNPE; }
 n24=JAMAICA_BLOCK_GET_DATA32(r11,3).i;
 if (((jamaica_uint32)(n23))>=((jamaica_uint32)(((n24>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n25=(n24&15);
 JAMAICA_SET_ARRAY32(r11,n23,n22);
 if (r9==JAMAICA_NULL) { goto LABEL_tNPE; }
 b24=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r9,7).r,0).r,1).r;
 JAMAICA_BLOCK_GET_DATA32(b24,7).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b24,7).i,1);
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 n17=JAMAICA_ADDS32(n17,n21);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l32; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

 goto l32;
l44:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

 n16=JAMAICA_ADDS32(n16,5);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l15; }
 jamaicaScheduler_syncPointFull(ct);
 goto l15;
l46:
{ jamaica_ref m=jam_mtd_sun_java2d_pisces_Renderer_8_compuounds10;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r5);
}
 n14=JAMAICA_BLOCK_GET_DATA32(b11,4).i;
 if (JAMAICA_BLOCK_GET_DATA32(b11,5).i<n14) { goto l48; }
 n15=JAMAICA_BLOCK_GET_DATA32(b12,0).i;
 n2=JAMAICA_BLOCK_GET_DATA32(r5,3).i;
 n16=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
 if (((n16>>20) |  ((n16>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Math_82,-1);
 }
 n14=jam_comp_java_lang_Math_82_min23(ct,n15,((n14>>(n2&31)) | (((n14>=0)||((n2&31)==0))?0:(((jamaica_int32)-1)<<(32-(n2&31))))));
 JAMAICA_BLOCK_GET_DATA32(b12,0).i = n14;
 n14=JAMAICA_BLOCK_GET_DATA32(b12,1).i;
 n15=JAMAICA_BLOCK_GET_DATA32(b11,5).i;
 n2=JAMAICA_BLOCK_GET_DATA32(b10,2).i;
 n15=JAMAICA_SUBS32(JAMAICA_ADDS32(n15,n2),1);
 n2=JAMAICA_BLOCK_GET_DATA32(r5,3).i;
 n16=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
 n14=jam_comp_java_lang_Math_82_max19(ct,n14,((n15>>(n2&31)) | (((n15>=0)||((n2&31)==0))?0:(((jamaica_int32)-1)<<(32-(n2&31))))));
 JAMAICA_BLOCK_GET_DATA32(b12,1).i = n14;
 jam_comp_sun_java2d_pisces_Renderer_8_rendeStrip13(ct,r5);
l48:
 n13=JAMAICA_ADDS32(n13,JAMAICA_MULS32(n9,JAMAICA_BLOCK_GET_DATA32(b13,3).i));
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l13; }
 jamaicaScheduler_syncPointFull(ct);
 goto l13;
l50:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 
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

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_java2d_pisces_Renderer_8_crossished21;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r0);
}
 ct->m.cli-=8;
 return;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
LABEL_tAE:     jamaica_throwArithmExc(ct);          return;
}
JBIEXPORT void JBICALL jam_comp_sun_java2d_pisces_Renderer_8_rendeStrip13(jamaica_thread *ct,jamaica_ref r0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r29=JAMAICA_NULL,r4=JAMAICA_NULL,r5=JAMAICA_NULL,r6=JAMAICA_NULL,r7=JAMAICA_NULL,r8=JAMAICA_NULL,r9=JAMAICA_NULL,r10=JAMAICA_NULL,r11=JAMAICA_NULL,r12=JAMAICA_NULL,r13=JAMAICA_NULL,r14=JAMAICA_NULL,r15=JAMAICA_NULL,r16=JAMAICA_NULL,r17=JAMAICA_NULL,r18=JAMAICA_NULL,r19=JAMAICA_NULL,r20=JAMAICA_NULL,r21=JAMAICA_NULL,r22=JAMAICA_NULL,r23=JAMAICA_NULL,r24=JAMAICA_NULL,r25=JAMAICA_NULL,r26=JAMAICA_NULL,r27=JAMAICA_NULL,r28=JAMAICA_NULL,r30=JAMAICA_NULL;
 jamaica_int32 n30=0,n31=0,n32=0,n39=0,n43=0,n5=0,n6=0,n7=0,n9=0,n11=0,n12=0,n14=0,n15=0,n16=0,n17=0,n19=0,n20=0,n21=0,n23=0,n24=0,n25=0,n28=0,n29=0,n33=0,n34=0,n35=0,n36=0,n37=0,n38=0,n40=0,n41=0,n42=0,n44=0;
 jamaica_ref b6=JAMAICA_NULL,b9=JAMAICA_NULL,b13=JAMAICA_NULL,b15=JAMAICA_NULL,b17=JAMAICA_NULL,b19=JAMAICA_NULL,b20=JAMAICA_NULL,b22=JAMAICA_NULL,b24=JAMAICA_NULL,b26=JAMAICA_NULL,b28=JAMAICA_NULL,b30=JAMAICA_NULL,b32=JAMAICA_NULL,b35=JAMAICA_NULL,b37=JAMAICA_NULL,b39=JAMAICA_NULL,b40=JAMAICA_NULL,b41=JAMAICA_NULL,b44=JAMAICA_NULL,b45=JAMAICA_NULL,b46=JAMAICA_NULL,b48=JAMAICA_NULL,b51=JAMAICA_NULL,b52=JAMAICA_NULL,b54=JAMAICA_NULL,b60=JAMAICA_NULL,b61=JAMAICA_NULL,b62=JAMAICA_NULL,b63=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+28;
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
 r11=r0;
 b60=JAMAICA_BLOCK_GET_DATA32(r11,7).r;
 b60=JAMAICA_BLOCK_GET_DATA32(b60,0).r;
 n28=JAMAICA_BLOCK_GET_DATA32(b60,5).i;
 n29=JAMAICA_BLOCK_GET_DATA32(b60,4).i;
 n28=JAMAICA_SUBS32(n28,n29);
 n28=JAMAICA_ADDS32(n28,1);
 n29=JAMAICA_BLOCK_GET_DATA32(r11,3).i;
 n29=(n29&31);
 n28=((n28>>n29) | (((n28>=0)||(n29==0))?0:(((jamaica_int32)-1)<<(32-n29))));
 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b60,2).r,3).i = n28;
 n28=JAMAICA_ADDS32(n28,1);
 n29=n28;
 b60=JAMAICA_BLOCK_GET_DATA32(b60,3).r;
 r11=JAMAICA_BLOCK_GET_DATA32(b60,7).r;
 if (r11==JAMAICA_NULL) { goto l4; }
 if (r11==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((JAMAICA_BLOCK_GET_DATA32(r11,3).i>>4) &  ((jamaica_int32)268435455))>=n28) { goto l5; }
l4:
 if ((n29<0)) { goto LABEL_tNASE; }
 r11=jamaicaInterpreter_allocSimpleArray(ct,n29,ct->vm->array_class[8]);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,3).r,7).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,3).r,7).r=r11;}
#else
{jamaica_ref new_ref=r11;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,3).r,7).r=new_ref;}
#endif

l5:
 if (JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,3).r,2).i!=0) { goto l7; }
 n28=1;
 goto l8;
l7:
 n28=(-1);
l8:
 n30=JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,6).i,1);
 n31=2147483647;
 n32=((jamaica_int32)0x80000000);
{ jamaica_ref m=jam_mtd_sun_java2d_pisces_Renderer_8_iterasings25;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r0);
}
 r11=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r11;}
#else
{jamaica_ref new_ref=r11;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b60=JAMAICA_BLOCK_GET_DATA32(r11,7).r;
 b60=JAMAICA_BLOCK_GET_DATA32(b60,0).r;
 b6=JAMAICA_BLOCK_GET_DATA32(b60,0).r;
 b6=JAMAICA_BLOCK_GET_DATA32(b6,7).r;
 b60=JAMAICA_BLOCK_GET_DATA32(b60,1).r;
 r12=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r12;}
#else
{jamaica_ref new_ref=r12;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 b9=JAMAICA_BLOCK_GET_DATA32(r12,7).r;
 b9=JAMAICA_BLOCK_GET_DATA32(b9,0).r;
 b9=JAMAICA_BLOCK_GET_DATA32(b9,0).r;
 b9=JAMAICA_BLOCK_GET_DATA32(b9,7).r;
 r13=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r13;}
#else
{jamaica_ref new_ref=r13;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 b13=JAMAICA_BLOCK_GET_DATA32(r13,7).r;
 b13=JAMAICA_BLOCK_GET_DATA32(b13,0).r;
 r14=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r14;}
#else
{jamaica_ref new_ref=r14;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 r15=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r15;}
#else
{jamaica_ref new_ref=r15;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 b15=JAMAICA_BLOCK_GET_DATA32(r15,7).r;
 b15=JAMAICA_BLOCK_GET_DATA32(b15,0).r;
 b17=JAMAICA_BLOCK_GET_DATA32(b15,0).r;
 b17=JAMAICA_BLOCK_GET_DATA32(b17,7).r;
 b19=JAMAICA_BLOCK_GET_DATA32(b15,1).r;
 r16=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r16;}
#else
{jamaica_ref new_ref=r16;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

 b20=JAMAICA_BLOCK_GET_DATA32(r16,7).r;
 b20=JAMAICA_BLOCK_GET_DATA32(b20,0).r;
 r17=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r17;}
#else
{jamaica_ref new_ref=r17;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

 b22=JAMAICA_BLOCK_GET_DATA32(r17,7).r;
 b22=JAMAICA_BLOCK_GET_DATA32(b22,0).r;
 r18=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=r18;}
#else
{jamaica_ref new_ref=r18;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[8]=new_ref;}
#endif

 r19=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=r19;}
#else
{jamaica_ref new_ref=r19;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[9]=new_ref;}
#endif

 b24=JAMAICA_BLOCK_GET_DATA32(r19,7).r;
 b24=JAMAICA_BLOCK_GET_DATA32(b24,0).r;
 r20=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=r20;}
#else
{jamaica_ref new_ref=r20;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[10]=new_ref;}
#endif

 b26=JAMAICA_BLOCK_GET_DATA32(r20,7).r;
 b26=JAMAICA_BLOCK_GET_DATA32(b26,0).r;
 b28=JAMAICA_BLOCK_GET_DATA32(b26,0).r;
 b28=JAMAICA_BLOCK_GET_DATA32(b28,7).r;
 r21=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=r21;}
#else
{jamaica_ref new_ref=r21;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[11]=new_ref;}
#endif

 b30=JAMAICA_BLOCK_GET_DATA32(r21,7).r;
 b30=JAMAICA_BLOCK_GET_DATA32(b30,0).r;
 b32=JAMAICA_BLOCK_GET_DATA32(b30,1).r;
 b30=JAMAICA_BLOCK_GET_DATA32(b30,0).r;
 b30=JAMAICA_BLOCK_GET_DATA32(b30,7).r;
 n33=n28;
 r22=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[12];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[12]=r22;}
#else
{jamaica_ref new_ref=r22;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[12]=new_ref;}
#endif

 b35=JAMAICA_BLOCK_GET_DATA32(r22,7).r;
 b35=JAMAICA_BLOCK_GET_DATA32(b35,0).r;
 r23=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[13];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[13]=r23;}
#else
{jamaica_ref new_ref=r23;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[13]=new_ref;}
#endif

 b37=JAMAICA_BLOCK_GET_DATA32(r23,7).r;
 b37=JAMAICA_BLOCK_GET_DATA32(b37,0).r;
 r24=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[14];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[14]=r24;}
#else
{jamaica_ref new_ref=r24;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[14]=new_ref;}
#endif

 b39=JAMAICA_BLOCK_GET_DATA32(r24,7).r;
 b40=JAMAICA_BLOCK_GET_DATA32(b39,0).r;
 r25=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[15];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[15]=r25;}
#else
{jamaica_ref new_ref=r25;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[15]=new_ref;}
#endif

 b41=JAMAICA_BLOCK_GET_DATA32(r25,7).r;
 b41=JAMAICA_BLOCK_GET_DATA32(b41,0).r;
 b41=JAMAICA_BLOCK_GET_DATA32(b41,3).r;
 b44=JAMAICA_BLOCK_GET_DATA32(b40,3).r;
 r26=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[16];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[16]=r26;}
#else
{jamaica_ref new_ref=r26;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[16]=new_ref;}
#endif

 b45=JAMAICA_BLOCK_GET_DATA32(r26,7).r;
 b46=JAMAICA_BLOCK_GET_DATA32(b45,0).r;
 b46=JAMAICA_BLOCK_GET_DATA32(b46,3).r;
 r27=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[17];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[17]=r27;}
#else
{jamaica_ref new_ref=r27;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[17]=new_ref;}
#endif

 b48=JAMAICA_BLOCK_GET_DATA32(r27,7).r;
 b48=JAMAICA_BLOCK_GET_DATA32(b48,0).r;
 b48=JAMAICA_BLOCK_GET_DATA32(b48,3).r;
 r28=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[18];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[18]=r28;}
#else
{jamaica_ref new_ref=r28;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[18]=new_ref;}
#endif

 b51=JAMAICA_BLOCK_GET_DATA32(r28,7).r;
 b52=JAMAICA_BLOCK_GET_DATA32(b51,1).r;
 b51=JAMAICA_BLOCK_GET_DATA32(b51,0).r;
 b54=JAMAICA_BLOCK_GET_DATA32(b51,3).r;
l9:
 r29=r11;
 n28=JAMAICA_BLOCK_GET_DATA32(b6,1).i;
 n28=JAMAICA_ADDS32(n28,1);
 JAMAICA_BLOCK_GET_DATA32(b6,1).i = n28;
 if (n28>JAMAICA_BLOCK_GET_DATA32(b60,3).i) { goto l11; }
 if (r29==JAMAICA_NULL) { goto LABEL_tNPE; }
 b61=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r29,7).r,0).r;
 b62=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b61,0).r,7).r;
 b61=JAMAICA_BLOCK_GET_DATA32(b61,1).r;
 n28=JAMAICA_BLOCK_GET_DATA32(b61,6).i;
 JAMAICA_BLOCK_GET_DATA32(b62,3).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b62,3).i,n28);
 n29=JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b62,1).i,JAMAICA_BLOCK_GET_DATA32(b61,2).i);
 r30=JAMAICA_BLOCK_GET_DATA32(b61,0).r;
 if (r30==JAMAICA_NULL) { goto LABEL_tNPE; }
 n34=JAMAICA_BLOCK_GET_DATA32(r30,3).i;
 if (((jamaica_uint32)(n29))>=((jamaica_uint32)(((n34>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n35=(n34&15);
 JAMAICA_GET_ARRAY32(r30,n29,n34);
 JAMAICA_BLOCK_GET_DATA32(b62,2).i = JAMAICA_SUBS32(n34,JAMAICA_MULS32(n29,n28));
 JAMAICA_BLOCK_GET_DATA32(b62,4).i = 0;
 n28=1;
 goto l12;
l11:
 n28=0;
l12:
 if (n28==0) { goto l98; }
 n29=JAMAICA_BLOCK_GET_DATA32(b9,1).i;
 n34=JAMAICA_ADDS32(n30,1);
 n28=n29;
l14:
 if (n34>=n28) { goto l26; }
 n30=n34;
 n35=JAMAICA_BLOCK_GET_DATA32(r13,6).i;
 if ((n30&n35)==n35) { goto l17; }
 if (n30!=JAMAICA_BLOCK_GET_DATA32(b13,7).i) { goto l18; }
l17:
 jam_comp_sun_java2d_pisces_Renderer_8_emitRow15(ct,r14,((n34>>(JAMAICA_BLOCK_GET_DATA32(r14,4).i&31)) | (((n34>=0)||((JAMAICA_BLOCK_GET_DATA32(r14,4).i&31)==0))?0:(((jamaica_int32)-1)<<(32-(JAMAICA_BLOCK_GET_DATA32(r14,4).i&31))))),0,(-1));
l18:
 n34=JAMAICA_ADDS32(n34,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l14; }
 jamaicaScheduler_syncPointFull(ct);
 goto l14;
l20:
 n30=n34;
 n35=JAMAICA_BLOCK_GET_DATA32(r13,6).i;
 if ((n30&n35)==n35) { goto l22; }
 if (n30!=JAMAICA_BLOCK_GET_DATA32(b13,7).i) { goto l23; }
l22:
 jam_comp_sun_java2d_pisces_Renderer_8_emitRow15(ct,r14,((n34>>(JAMAICA_BLOCK_GET_DATA32(r14,4).i&31)) | (((n34>=0)||((JAMAICA_BLOCK_GET_DATA32(r14,4).i&31)==0))?0:(((jamaica_int32)-1)<<(32-(JAMAICA_BLOCK_GET_DATA32(r14,4).i&31))))),0,(-1));
l23:
 n34=JAMAICA_ADDS32(n34,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l25; }
 jamaicaScheduler_syncPointFull(ct);
l25:
 if (n34<n28) { goto l20; }
l26:
 n30=n28;
 n28=JAMAICA_BLOCK_GET_DATA32(b17,4).i;
 n35=JAMAICA_BLOCK_GET_DATA32(b17,2).i;
 if (n28>=n35) { goto l37; }
 r29=JAMAICA_BLOCK_GET_DATA32(b19,1).r;
 n36=JAMAICA_BLOCK_GET_DATA32(b17,3).i;
 n28=JAMAICA_ADDS32(n36,n28);
 if (r29==JAMAICA_NULL) { goto LABEL_tNPE; }
 n34=JAMAICA_BLOCK_GET_DATA32(r29,3).i;
 n37=((n34>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n28))>=((jamaica_uint32)(n37))) { goto LABEL_tAIOOBE; }
 n38=(n34&15);
 JAMAICA_GET_ARRAY32(r29,n28,n28);
 n28=((n28>>1) |  ((n28>=0)?0:(jamaica_int32)((jamaica_int32)0x80000000)));
 n34=n28;
 n35=JAMAICA_SUBS32(JAMAICA_ADDS32(n36,n35),1);
 if (((jamaica_uint32)(n35))>=((jamaica_uint32)(n37))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r29,n35,n35);
 n35=((n35>>1) |  ((n35>=0)?0:(jamaica_int32)((jamaica_int32)0x80000000)));
 n36=JAMAICA_BLOCK_GET_DATA32(b15,4).i;
 if (n28<=n36) { goto l29; }
 n28=n34;
 goto l30;
l29:
 n28=n36;
l30:
 n34=n28;
 n28=JAMAICA_BLOCK_GET_DATA32(b20,5).i;
 if (n35>=n28) { goto l32; }
 n28=n35;
l32:
 n35=JAMAICA_BLOCK_GET_DATA32(b22,4).i;
 n34=JAMAICA_SUBS32(n34,n35);
 n36=JAMAICA_SUBS32(n28,n35);
 n28=JAMAICA_BLOCK_GET_DATA32(r17,3).i;
 n28=(n28&31);
 n28=((n34>>n28) | (((n34>=0)||(n28==0))?0:(((jamaica_int32)-1)<<(32-n28))));
 n34=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
 if (((n34>>20) |  ((n34>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Math_82,-1);
 }
 n34=n31;
 if (n31>n28) { goto l34; }
 n28=n34;
l34:
 n31=n28;
 n28=n36;
 n34=JAMAICA_BLOCK_GET_DATA32(r18,3).i;
 n34=(n34&31);
 n28=((n28>>n34) | (((n28>=0)||(n34==0))?0:(((jamaica_int32)-1)<<(32-n34))));
 n34=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
 if (((n34>>20) |  ((n34>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Math_82,-1);
 }
 n34=n32;
 if (n32<n28) { goto l36; }
 n28=n34;
l36:
 n32=n28;
l37:
 n34=0;
 n35=JAMAICA_BLOCK_GET_DATA32(b24,4).i;
 n5=0;
 n6=0;
 n11=0;
 n12=0;
 r4=JAMAICA_NULL;
 n14=0;
 n15=0;
 r6=JAMAICA_NULL;
 n19=0;
 n20=0;
 r8=JAMAICA_NULL;
 n23=0;
 n24=0;
 r10=JAMAICA_NULL;
 n37=JAMAICA_BLOCK_GET_DATA32(b28,2).i;
 r29=JAMAICA_BLOCK_GET_DATA32(b32,1).r;
 n38=JAMAICA_BLOCK_GET_DATA32(b30,3).i;
 if (r29==JAMAICA_NULL) { goto l39; }
 n28=JAMAICA_BLOCK_GET_DATA32(r29,3).i;
 n5=((n28>>4) &  ((jamaica_int32)268435455));
 n6=(n28&15);
l39:
 n7=JAMAICA_BLOCK_GET_DATA32(b37,5).i;
 n28=JAMAICA_BLOCK_GET_DATA32(r24,3).i;
 n9=(n28&31);
 r30=JAMAICA_BLOCK_GET_DATA32(b41,7).r;
 if (r30==JAMAICA_NULL) { goto l41; }
 n28=JAMAICA_BLOCK_GET_DATA32(r30,3).i;
 n11=((n28>>4) &  ((jamaica_int32)268435455));
 n12=(n28&15);
 r4=JAMAICA_BLOCK_GET_R(r30,1);
l41:
 r5=JAMAICA_BLOCK_GET_DATA32(b44,7).r;
 if (r5==JAMAICA_NULL) { goto l43; }
 n28=JAMAICA_BLOCK_GET_DATA32(r5,3).i;
 n14=((n28>>4) &  ((jamaica_int32)268435455));
 n15=(n28&15);
 r6=JAMAICA_BLOCK_GET_R(r5,1);
l43:
 n16=JAMAICA_BLOCK_GET_DATA32(b39,2).i;
 n17=JAMAICA_BLOCK_GET_DATA32(r24,5).i;
 r7=JAMAICA_BLOCK_GET_DATA32(b46,7).r;
 if (r7==JAMAICA_NULL) { goto l46; }
 n28=JAMAICA_BLOCK_GET_DATA32(r7,3).i;
 n19=((n28>>4) &  ((jamaica_int32)268435455));
 n20=(n28&15);
 r8=JAMAICA_BLOCK_GET_R(r7,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l46; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[19];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[19]=r29;}
#else
{jamaica_ref new_ref=r29;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[19]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[20];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[20]=r30;}
#else
{jamaica_ref new_ref=r30;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[20]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[21];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[21]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[21]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[22];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[22]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[22]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[23];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[23]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[23]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[24];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[24]=r10;}
#else
{jamaica_ref new_ref=r10;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[24]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[25];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[25]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[25]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[26];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[26]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[26]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[26];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[26]=JAMAICA_NULL;}
#else
{l[26]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[25];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[25]=JAMAICA_NULL;}
#else
{l[25]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[24];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[24]=JAMAICA_NULL;}
#else
{l[24]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[23];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[23]=JAMAICA_NULL;}
#else
{l[23]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[22];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[22]=JAMAICA_NULL;}
#else
{l[22]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[21];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[21]=JAMAICA_NULL;}
#else
{l[21]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[20];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[20]=JAMAICA_NULL;}
#else
{l[20]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[19];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[19]=JAMAICA_NULL;}
#else
{l[19]=JAMAICA_NULL;}
#endif

l46:
 n21=JAMAICA_BLOCK_GET_DATA32(b45,2).i;
 r9=JAMAICA_BLOCK_GET_DATA32(b48,7).r;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l48; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[19];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[19]=r29;}
#else
{jamaica_ref new_ref=r29;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[19]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[20];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[20]=r30;}
#else
{jamaica_ref new_ref=r30;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[20]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[21];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[21]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[21]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[22];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[22]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[22]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[23];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[23]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[23]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[24];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[24]=r10;}
#else
{jamaica_ref new_ref=r10;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[24]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[25];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[25]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[25]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[26];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[26]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[26]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[27];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[27]=r9;}
#else
{jamaica_ref new_ref=r9;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[27]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[27];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[27]=JAMAICA_NULL;}
#else
{l[27]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[26];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[26]=JAMAICA_NULL;}
#else
{l[26]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[25];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[25]=JAMAICA_NULL;}
#else
{l[25]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[24];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[24]=JAMAICA_NULL;}
#else
{l[24]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[23];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[23]=JAMAICA_NULL;}
#else
{l[23]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[22];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[22]=JAMAICA_NULL;}
#else
{l[22]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[21];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[21]=JAMAICA_NULL;}
#else
{l[21]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[20];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[20]=JAMAICA_NULL;}
#else
{l[20]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[19];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[19]=JAMAICA_NULL;}
#else
{l[19]=JAMAICA_NULL;}
#endif

l48:
 if (r9==JAMAICA_NULL) { goto l50; }
 n28=JAMAICA_BLOCK_GET_DATA32(r9,3).i;
 n23=((n28>>4) &  ((jamaica_int32)268435455));
 n24=(n28&15);
 r10=JAMAICA_BLOCK_GET_R(r9,1);
l50:
 n25=JAMAICA_BLOCK_GET_DATA32(r27,5).i;
l51:
 if (JAMAICA_BLOCK_GET_DATA32(b28,4).i>=n37) { goto l74; }
 n28=JAMAICA_BLOCK_GET_DATA32(b30,4).i;
 n36=JAMAICA_ADDS32(n38,n28);
 if (r29==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n36))>=((jamaica_uint32)(n5))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r29,n36,n39);
 JAMAICA_BLOCK_GET_DATA32(b30,4).i = JAMAICA_ADDS32(n28,1);
 n36=((n39>>1) |  ((n39>=0)?0:(jamaica_int32)((jamaica_int32)0x80000000)));
 if ((n39&1)!=1) { goto l54; }
 n28=1;
 goto l55;
l54:
 n28=(-1);
l55:
 n39=n28;
 if ((n34&n33)==0) { goto l72; }
 n28=JAMAICA_BLOCK_GET_DATA32(b35,4).i;
 if (n35<=n28) { goto l58; }
 n28=n35;
l58:
 n35=n28;
 if (n36>=n7) { goto l60; }
 n28=n36;
 goto l61;
l60:
 n28=n7;
l61:
 if (n28<=n35) { goto l72; }
 n40=JAMAICA_BLOCK_GET_DATA32(b40,4).i;
 n41=JAMAICA_SUBS32(n35,n40);
 n35=n41;
 n40=JAMAICA_SUBS32(n28,n40);
 n28=n40;
 n42=((n41>>n9) | (((n41>=0)||(n9==0))?0:(((jamaica_int32)-1)<<(32-n9))));
 n43=n42;
 n44=JAMAICA_SUBS32(n40,1);
 n44=((n44>>n9) | (((n44>=0)||(n9==0))?0:(((jamaica_int32)-1)<<(32-n9))));
 if (n42!=n44) { goto l64; }
 if (r30==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n43))>=((jamaica_uint32)(n11))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY8(r30,n43,n40);
 n28=JAMAICA_ADDS32(n40,JAMAICA_SUBS32(n28,n35));
 n28=JAMAICA_SUBS32((n28&127),(n28&128));
 JAMAICA_SET_ARRAY8(r30,n43,n28);
 goto l72;
l64:
 n43=JAMAICA_ADDS32(n42,1);
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n42))>=((jamaica_uint32)(n14))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY8(r5,n42,n35);
 n35=JAMAICA_ADDS32(n35,JAMAICA_SUBS32(n16,(n41&n17)));
 n35=JAMAICA_SUBS32((n35&127),(n35&128));
 JAMAICA_SET_ARRAY8(r5,n42,n35);
 n35=((n40>>n9) | (((n40>=0)||(n9==0))?0:(((jamaica_int32)-1)<<(32-n9))));
 if (r7==JAMAICA_NULL) { goto l68; }
l65:
 n40=n43;
 if (n43>=n35) { goto l71; }
 n40=n43;
 n43=JAMAICA_ADDS32(n40,1);
 if (((jamaica_uint32)(n40))>=((jamaica_uint32)(n19))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY8(r7,n40,n41);
 n41=JAMAICA_ADDS32(n41,n21);
 n41=JAMAICA_SUBS32((n41&127),(n41&128));
 JAMAICA_SET_ARRAY8(r7,n40,n41);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l65; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[19];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[19]=r29;}
#else
{jamaica_ref new_ref=r29;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[19]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[20];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[20]=r30;}
#else
{jamaica_ref new_ref=r30;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[20]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[21];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[21]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[21]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[22];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[22]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[22]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[23];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[23]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[23]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[24];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[24]=r10;}
#else
{jamaica_ref new_ref=r10;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[24]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[25];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[25]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[25]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[26];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[26]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[26]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[27];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[27]=r9;}
#else
{jamaica_ref new_ref=r9;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[27]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[27];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[27]=JAMAICA_NULL;}
#else
{l[27]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[26];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[26]=JAMAICA_NULL;}
#else
{l[26]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[25];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[25]=JAMAICA_NULL;}
#else
{l[25]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[24];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[24]=JAMAICA_NULL;}
#else
{l[24]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[23];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[23]=JAMAICA_NULL;}
#else
{l[23]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[22];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[22]=JAMAICA_NULL;}
#else
{l[22]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[21];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[21]=JAMAICA_NULL;}
#else
{l[21]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[20];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[20]=JAMAICA_NULL;}
#else
{l[20]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[19];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[19]=JAMAICA_NULL;}
#else
{l[19]=JAMAICA_NULL;}
#endif

 goto l65;
l68:
 n40=n43;
 if (n43>=n35) { goto l71; }
 n40=n43;
 n43=JAMAICA_ADDS32(n40,1);
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n40))>=((jamaica_uint32)(n19))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY8(r7,n40,n41);
 n41=JAMAICA_ADDS32(n41,n21);
 n41=JAMAICA_SUBS32((n41&127),(n41&128));
 JAMAICA_SET_ARRAY8(r7,n40,n41);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l68; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[19];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[19]=r29;}
#else
{jamaica_ref new_ref=r29;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[19]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[20];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[20]=r30;}
#else
{jamaica_ref new_ref=r30;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[20]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[21];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[21]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[21]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[22];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[22]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[22]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[23];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[23]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[23]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[24];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[24]=r10;}
#else
{jamaica_ref new_ref=r10;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[24]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[25];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[25]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[25]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[26];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[26]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[26]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[27];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[27]=r9;}
#else
{jamaica_ref new_ref=r9;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[27]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[27];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[27]=JAMAICA_NULL;}
#else
{l[27]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[26];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[26]=JAMAICA_NULL;}
#else
{l[26]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[25];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[25]=JAMAICA_NULL;}
#else
{l[25]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[24];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[24]=JAMAICA_NULL;}
#else
{l[24]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[23];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[23]=JAMAICA_NULL;}
#else
{l[23]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[22];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[22]=JAMAICA_NULL;}
#else
{l[22]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[21];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[21]=JAMAICA_NULL;}
#else
{l[21]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[20];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[20]=JAMAICA_NULL;}
#else
{l[20]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[19];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[19]=JAMAICA_NULL;}
#else
{l[19]=JAMAICA_NULL;}
#endif

 goto l68;
l71:
 if (r9==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n40))>=((jamaica_uint32)(n23))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY8(r9,n40,n35);
 n28=JAMAICA_ADDS32(n35,(n28&n25));
 n28=JAMAICA_SUBS32((n28&127),(n28&128));
 JAMAICA_SET_ARRAY8(r9,n40,n28);
l72:
 n34=JAMAICA_ADDS32(n34,n39);
 n35=n36;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l51; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[19];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[19]=r29;}
#else
{jamaica_ref new_ref=r29;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[19]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[20];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[20]=r30;}
#else
{jamaica_ref new_ref=r30;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[20]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[21];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[21]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[21]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[22];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[22]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[22]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[23];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[23]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[23]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[24];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[24]=r10;}
#else
{jamaica_ref new_ref=r10;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[24]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[25];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[25]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[25]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[26];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[26]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[26]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[27];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[27]=r9;}
#else
{jamaica_ref new_ref=r9;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[27]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[27];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[27]=JAMAICA_NULL;}
#else
{l[27]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[26];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[26]=JAMAICA_NULL;}
#else
{l[26]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[25];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[25]=JAMAICA_NULL;}
#else
{l[25]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[24];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[24]=JAMAICA_NULL;}
#else
{l[24]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[23];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[23]=JAMAICA_NULL;}
#else
{l[23]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[22];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[22]=JAMAICA_NULL;}
#else
{l[22]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[21];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[21]=JAMAICA_NULL;}
#else
{l[21]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[20];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[20]=JAMAICA_NULL;}
#else
{l[20]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[19];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[19]=JAMAICA_NULL;}
#else
{l[19]=JAMAICA_NULL;}
#endif

 goto l51;
l74:
 n28=n29;
 n34=JAMAICA_BLOCK_GET_DATA32(r20,6).i;
 if ((n28&n34)==n34) { goto l78; }
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l77; }
 jamaicaScheduler_syncPointFull(ct);
l77:
 if (n28!=JAMAICA_BLOCK_GET_DATA32(b26,7).i) { goto l9; }
l78:
 n28=n29;
 n29=JAMAICA_BLOCK_GET_DATA32(r28,4).i;
 n29=(n29&31);
 n28=((n28>>n29) | (((n28>=0)||(n29==0))?0:(((jamaica_int32)-1)<<(32-n29))));
 r29=r28;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[19];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[19]=r29;}
#else
{jamaica_ref new_ref=r29;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[19]=new_ref;}
#endif

 n29=n31;
 n34=n32;
 r30=JAMAICA_BLOCK_GET_DATA32(b52,3).r;
 if (r30==JAMAICA_NULL) { goto l96; }
 if (n32<n31) { goto l96; }
 n35=JAMAICA_BLOCK_GET_DATA32(b51,4).i;
 n35=((n35>>(JAMAICA_BLOCK_GET_DATA32(r28,3).i&31)) | (((n35>=0)||((JAMAICA_BLOCK_GET_DATA32(r28,3).i&31)==0))?0:(((jamaica_int32)-1)<<(32-(JAMAICA_BLOCK_GET_DATA32(r28,3).i&31)))));
 n36=JAMAICA_ADDS32(n31,n35);
 n32=JAMAICA_ADDS32(n32,n35);
 if (r30==JAMAICA_NULL) { goto LABEL_tNPE; }
 jam_comp_sun_java2d_pisces_PisceCache_2_startRow5(ct,r30,n28,n36,JAMAICA_ADDS32(n32,1));
 r30=JAMAICA_BLOCK_GET_DATA32(b54,7).r;
 n28=JAMAICA_ADDS32(n31,1);
 if (r30==JAMAICA_NULL) { goto LABEL_tNPE; }
 n32=JAMAICA_BLOCK_GET_DATA32(r30,3).i;
 if (((jamaica_uint32)(n31))>=((jamaica_uint32)(((n32>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n35=(n32&15);
 JAMAICA_GET_ARRAY8(r30,n31,n31);
 n32=1;
 n35=n34;
 r30=r29;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[20];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[20]=r30;}
#else
{jamaica_ref new_ref=r30;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[20]=new_ref;}
#endif

 b61=JAMAICA_NULL;
 b62=JAMAICA_NULL;
 if (r30==JAMAICA_NULL) { goto l82; }
 b61=JAMAICA_BLOCK_GET_DATA32(r30,7).r;
 b61=JAMAICA_BLOCK_GET_DATA32(b61,0).r;
 b61=JAMAICA_BLOCK_GET_DATA32(b61,3).r;
l82:
 r4=r29;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[21];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[21]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[21]=new_ref;}
#endif

 if (r4==JAMAICA_NULL) { goto l84; }
 b62=JAMAICA_BLOCK_GET_DATA32(r4,7).r;
 b62=JAMAICA_BLOCK_GET_DATA32(b62,1).r;
l84:
 if (n28>n35) { goto l95; }
 if (r30==JAMAICA_NULL) { goto LABEL_tNPE; }
 r5=JAMAICA_BLOCK_GET_DATA32(b61,7).r;
 n36=n28;
 n28=JAMAICA_ADDS32(n36,1);
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 n37=JAMAICA_BLOCK_GET_DATA32(r5,3).i;
 if (((jamaica_uint32)(n36))>=((jamaica_uint32)(((n37>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n38=(n37&15);
 JAMAICA_GET_ARRAY8(r5,n36,n36);
 n37=n36;
 if (n36!=n31) { goto l89; }
 n36=n32;
 if (n36>=255) { goto l89; }
 n32=JAMAICA_ADDS32(n36,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l84; }
 jamaicaScheduler_syncPointFull(ct);
 goto l84;
l89:
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 r5=JAMAICA_BLOCK_GET_DATA32(b62,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[23];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[23]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[23]=new_ref;}
#endif

 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 r6=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[22];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[22]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[22]=new_ref;}
#endif

 b63=JAMAICA_BLOCK_GET_DATA32(r5,7).r;
 n36=JAMAICA_BLOCK_GET_DATA32(b63,3).i;
 n36=JAMAICA_ADDS32(n36,2);
 r7=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[24];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[24]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[24]=new_ref;}
#endif

 n38=n36;
 r8=JAMAICA_BLOCK_GET_DATA32(b63,2).r;
 if (r8!=JAMAICA_NULL) { goto l91; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[23];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[23]=JAMAICA_NULL;}
#else
{l[23]=JAMAICA_NULL;}
#endif

 if ((n38<0)) { goto LABEL_tNASE; }
 r5=jamaicaInterpreter_allocSimpleArray(ct,n38,ct->vm->array_class[8]);
 if (r7==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[24];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[24]=JAMAICA_NULL;}
#else
{l[24]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r7,7).r,2).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r7,7).r,2).r=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r7,7).r,2).r=new_ref;}
#endif

 goto l93;
l91:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[24];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[24]=JAMAICA_NULL;}
#else
{l[24]=JAMAICA_NULL;}
#endif

 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 n38=JAMAICA_BLOCK_GET_DATA32(r8,3).i;
 n38=((n38>>4) &  ((jamaica_int32)268435455));
 if (n38>=n36) { goto l93; }
 n5=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
 if (((n5>>20) |  ((n5>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Math_82,-1);
 }
 n36=jam_comp_java_lang_Math_82_max19(ct,n36,JAMAICA_CAST_DOUBLE_TO_INTEGER((jamaica_double)JAMAICA_NATIVE_MATH_FLOAT_FLOAT_MUL(((jamaica_float)n38),((jamaica_float) 1.5F))));
 if ((n36<0)) { goto LABEL_tNASE; }
 r7=jamaicaInterpreter_allocSimpleArray(ct,n36,ct->vm->array_class[8]);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[24];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[24]=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[24]=new_ref;}
#endif

 r8=JAMAICA_BLOCK_GET_DATA32(b63,2).r;
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 Jam_java_lang_System_arraycopy(ct,r8,0,r7,0,((JAMAICA_BLOCK_GET_DATA32(r8,3).i>>4) &  ((jamaica_int32)268435455)));
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[23];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[23]=JAMAICA_NULL;}
#else
{l[23]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[24];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[24]=JAMAICA_NULL;}
#else
{l[24]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(b63,2).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(b63,2).r=r7;}
#else
{jamaica_ref new_ref=r7;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(b63,2).r=new_ref;}
#endif

l93:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[23];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[23]=JAMAICA_NULL;}
#else
{l[23]=JAMAICA_NULL;}
#endif

 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 b63=JAMAICA_BLOCK_GET_DATA32(r6,7).r;
 r5=JAMAICA_BLOCK_GET_DATA32(b63,2).r;
 n36=JAMAICA_BLOCK_GET_DATA32(b63,3).i;
 JAMAICA_BLOCK_GET_DATA32(b63,3).i = JAMAICA_ADDS32(n36,1);
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 n38=JAMAICA_BLOCK_GET_DATA32(r5,3).i;
 n5=((n38>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n36))>=((jamaica_uint32)(n5))) { goto LABEL_tAIOOBE; }
 n38=(n38&15);
 r7=JAMAICA_BLOCK_GET_R(r5,1);
 JAMAICA_SET_ARRAY8(r5,n36,n31);
 n31=JAMAICA_BLOCK_GET_DATA32(b63,3).i;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[22];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[22]=JAMAICA_NULL;}
#else
{l[22]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(b63,3).i = JAMAICA_ADDS32(n31,1);
 n32=JAMAICA_SUBS32((n32&127),(n32&128));
 if (((jamaica_uint32)(n31))>=((jamaica_uint32)(n5))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY8(r5,n31,n32);
 n32=1;
 n31=n37;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l84; }
 jamaicaScheduler_syncPointFull(ct);
 goto l84;
l95:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[21];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[21]=JAMAICA_NULL;}
#else
{l[21]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[20];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[20]=JAMAICA_NULL;}
#else
{l[20]=JAMAICA_NULL;}
#endif

 if (r29==JAMAICA_NULL) { goto LABEL_tNPE; }
 b61=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r29,7).r,1).r;
 r30=JAMAICA_BLOCK_GET_DATA32(b61,3).r;
 if (r30==JAMAICA_NULL) { goto LABEL_tNPE; }
 jam_comp_sun_java2d_pisces_PisceCache_2_addRLERun4(ct,r30,n31,n32);
 r30=JAMAICA_BLOCK_GET_DATA32(b61,3).r;
 if (r30==JAMAICA_NULL) { goto LABEL_tNPE; }
 jam_comp_sun_java2d_pisces_PisceCache_2_addRLERun4(ct,r30,0,0);
l96:
 if (r29==JAMAICA_NULL) { goto LABEL_tNPE; }
 b61=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r29,7).r,0).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[19];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[19]=JAMAICA_NULL;}
#else
{l[19]=JAMAICA_NULL;}
#endif

 jam_comp_sun_java2d_pisces_Renderer_8_clearAlpha14(ct,r29,JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b61,3).r,7).r,JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b61,2).r,3).i,n29,n34);
 n31=2147483647;
 n32=((jamaica_int32)0x80000000);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l9; }
 jamaicaScheduler_syncPointFull(ct);
 goto l9;
l98:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[18];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[18]=JAMAICA_NULL;}
#else
{l[18]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[17];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[17]=JAMAICA_NULL;}
#else
{l[17]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[16];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[16]=JAMAICA_NULL;}
#else
{l[16]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[15];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[15]=JAMAICA_NULL;}
#else
{l[15]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[14];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[14]=JAMAICA_NULL;}
#else
{l[14]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[13];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[13]=JAMAICA_NULL;}
#else
{l[13]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[12];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[12]=JAMAICA_NULL;}
#else
{l[12]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[11];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[11]=JAMAICA_NULL;}
#else
{l[11]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[10];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[10]=JAMAICA_NULL;}
#else
{l[10]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[9];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[9]=JAMAICA_NULL;}
#else
{l[9]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[8];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[8]=JAMAICA_NULL;}
#else
{l[8]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 
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

 n34=JAMAICA_ADDS32(n30,1);
 r11=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r11;}
#else
{jamaica_ref new_ref=r11;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b60=JAMAICA_BLOCK_GET_DATA32(r11,7).r;
 b60=JAMAICA_BLOCK_GET_DATA32(b60,0).r;
 r12=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r12;}
#else
{jamaica_ref new_ref=r12;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 b6=JAMAICA_BLOCK_GET_DATA32(r12,7).r;
 b6=JAMAICA_BLOCK_GET_DATA32(b6,0).r;
l99:
 if (n34>JAMAICA_BLOCK_GET_DATA32(b60,7).i) { goto l111; }
 n28=n34;
 n29=JAMAICA_BLOCK_GET_DATA32(r12,6).i;
 if ((n28&n29)==n29) { goto l102; }
 if (n28!=JAMAICA_BLOCK_GET_DATA32(b6,7).i) { goto l103; }
l102:
 jam_comp_sun_java2d_pisces_Renderer_8_emitRow15(ct,r0,((n34>>(JAMAICA_BLOCK_GET_DATA32(r0,4).i&31)) | (((n34>=0)||((JAMAICA_BLOCK_GET_DATA32(r0,4).i&31)==0))?0:(((jamaica_int32)-1)<<(32-(JAMAICA_BLOCK_GET_DATA32(r0,4).i&31))))),n31,n32);
 n31=2147483647;
 n32=((jamaica_int32)0x80000000);
l103:
 n34=JAMAICA_ADDS32(n34,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l99; }
 jamaicaScheduler_syncPointFull(ct);
 goto l99;
l105:
 n28=n34;
 n29=JAMAICA_BLOCK_GET_DATA32(r12,6).i;
 if ((n28&n29)==n29) { goto l107; }
 if (n28!=JAMAICA_BLOCK_GET_DATA32(b6,7).i) { goto l108; }
l107:
 jam_comp_sun_java2d_pisces_Renderer_8_emitRow15(ct,r0,((n34>>(JAMAICA_BLOCK_GET_DATA32(r0,4).i&31)) | (((n34>=0)||((JAMAICA_BLOCK_GET_DATA32(r0,4).i&31)==0))?0:(((jamaica_int32)-1)<<(32-(JAMAICA_BLOCK_GET_DATA32(r0,4).i&31))))),n31,n32);
 n31=2147483647;
 n32=((jamaica_int32)0x80000000);
l108:
 n34=JAMAICA_ADDS32(n34,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l110; }
 jamaicaScheduler_syncPointFull(ct);
l110:
 if (n34<=JAMAICA_BLOCK_GET_DATA32(b60,7).i) { goto l105; }
l111:
 
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

 ct->m.cli-=28;
 return;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
LABEL_tNASE:   jamaica_throwNegArrSzExc(ct);        return;
}
JBIEXPORT void JBICALL jam_comp_sun_java2d_pisces_Renderer_8_clearAlpha14(jamaica_thread *ct,jamaica_ref r2,jamaica_ref r0,jamaica_int32 n4,jamaica_int32 n5,jamaica_int32 n6) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r1=JAMAICA_NULL;
 jamaica_int32 n0=0,n7=0;
 /* JAMAICA_C_STACK_OVERFLOW not needed for leaf methods */
 tp=ct->m.cli+2;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->m.cli = tp;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 
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

l2:
 n7=n5;
 if (n6<n7) { goto l13; }
 n6=JAMAICA_ADDS32(JAMAICA_SUBS32(n6,n7),1);
 n0=n6;
 if (JAMAICA_ADDS32(n6,n7)<=n4) { goto l5; }
 n0=JAMAICA_SUBS32(n4,n7);
l5:
 n6=0;
 n4=0;
 n7=0;
 r1=JAMAICA_NULL;
 if (r0==JAMAICA_NULL) { goto l10; }
 n7=JAMAICA_BLOCK_GET_DATA32(r0,3).i;
 n4=((n7>>4) &  ((jamaica_int32)268435455));
 n7=(n7&15);
 r1=JAMAICA_BLOCK_GET_R(r0,1);
 if (n7!=0) { goto l10; }
l7:
 if (n6>=n0) { goto l13; }
 if (((jamaica_uint32)(n5))>=((jamaica_uint32)(n4))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY8_D0(r0,n5,0);
 n6=JAMAICA_ADDS32(n6,1);
 n5=JAMAICA_ADDS32(n5,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l7; }
 
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

 goto l7;
l10:
 if (n6>=n0) { goto l13; }
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n5))>=((jamaica_uint32)(n4))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY8(r0,n5,0);
 n6=JAMAICA_ADDS32(n6,1);
 n5=JAMAICA_ADDS32(n5,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l10; }
 
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

 goto l10;
l13:
 ct->m.cli-=2;
 return;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT void JBICALL jam_comp_sun_java2d_pisces_Renderer_8_emitRow15(jamaica_thread *ct,jamaica_ref r0,jamaica_int32 n1,jamaica_int32 n2,jamaica_int32 n0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r4=JAMAICA_NULL,r5=JAMAICA_NULL,r1=JAMAICA_NULL,r2=JAMAICA_NULL,r3=JAMAICA_NULL,r6=JAMAICA_NULL;
 jamaica_int32 n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,n9=0;
 jamaica_ref b5=JAMAICA_NULL,b6=JAMAICA_NULL,b7=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+6;
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
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b5=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 b6=JAMAICA_BLOCK_GET_DATA32(b5,1).r;
 r2=JAMAICA_BLOCK_GET_DATA32(b6,3).r;
 if (r2==JAMAICA_NULL) { goto l17; }
 n3=n0;
 n4=n2;
 if (n3<n4) { goto l17; }
 b5=JAMAICA_BLOCK_GET_DATA32(b5,0).r;
 n5=JAMAICA_BLOCK_GET_DATA32(b5,4).i;
 n5=((n5>>(JAMAICA_BLOCK_GET_DATA32(r1,3).i&31)) | (((n5>=0)||((JAMAICA_BLOCK_GET_DATA32(r1,3).i&31)==0))?0:(((jamaica_int32)-1)<<(32-(JAMAICA_BLOCK_GET_DATA32(r1,3).i&31)))));
 n6=JAMAICA_ADDS32(n4,n5);
 n3=JAMAICA_ADDS32(n3,n5);
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 jam_comp_sun_java2d_pisces_PisceCache_2_startRow5(ct,r2,n1,n6,JAMAICA_ADDS32(n3,1));
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b5,3).r,7).r;
 n3=JAMAICA_ADDS32(n4,1);
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 n5=JAMAICA_BLOCK_GET_DATA32(r1,3).i;
 if (((jamaica_uint32)(n4))>=((jamaica_uint32)(((n5>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n6=(n5&15);
 JAMAICA_GET_ARRAY8(r1,n4,n4);
 n5=1;
 n6=n0;
 r1=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b5=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 b5=JAMAICA_BLOCK_GET_DATA32(b5,0).r;
 b5=JAMAICA_BLOCK_GET_DATA32(b5,3).r;
 r2=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 b6=JAMAICA_BLOCK_GET_DATA32(r2,7).r;
 b6=JAMAICA_BLOCK_GET_DATA32(b6,1).r;
l5:
 if (n3>n6) { goto l16; }
 r3=JAMAICA_BLOCK_GET_DATA32(b5,7).r;
 n1=n3;
 n3=JAMAICA_ADDS32(n1,1);
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 n7=JAMAICA_BLOCK_GET_DATA32(r3,3).i;
 if (((jamaica_uint32)(n1))>=((jamaica_uint32)(((n7>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n8=(n7&15);
 JAMAICA_GET_ARRAY8(r3,n1,n1);
 n7=n1;
 if (n1!=n4) { goto l10; }
 n1=n5;
 if (n1>=255) { goto l10; }
 n5=JAMAICA_ADDS32(n1,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l5; }
 jamaicaScheduler_syncPointFull(ct);
 goto l5;
l10:
 r3=JAMAICA_BLOCK_GET_DATA32(b6,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=r3;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 b7=JAMAICA_BLOCK_GET_DATA32(r3,7).r;
 n1=JAMAICA_BLOCK_GET_DATA32(b7,3).i;
 n1=JAMAICA_ADDS32(n1,2);
 r5=r3;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 n8=n1;
 r6=JAMAICA_BLOCK_GET_DATA32(b7,2).r;
 if (r6!=JAMAICA_NULL) { goto l12; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 if ((n8<0)) { goto LABEL_tNASE; }
 r3=jamaicaInterpreter_allocSimpleArray(ct,n8,ct->vm->array_class[8]);
 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r5,7).r,2).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r5,7).r,2).r=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r5,7).r,2).r=new_ref;}
#endif

 goto l14;
l12:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 n8=JAMAICA_BLOCK_GET_DATA32(r6,3).i;
 n8=((n8>>4) &  ((jamaica_int32)268435455));
 if (n8>=n1) { goto l14; }
 n9=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
 if (((n9>>20) |  ((n9>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Math_82,-1);
 }
 n1=jam_comp_java_lang_Math_82_max19(ct,n1,JAMAICA_CAST_DOUBLE_TO_INTEGER((jamaica_double)JAMAICA_NATIVE_MATH_FLOAT_FLOAT_MUL(((jamaica_float)n8),((jamaica_float) 1.5F))));
 if ((n1<0)) { goto LABEL_tNASE; }
 r5=jamaicaInterpreter_allocSimpleArray(ct,n1,ct->vm->array_class[8]);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 r6=JAMAICA_BLOCK_GET_DATA32(b7,2).r;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 Jam_java_lang_System_arraycopy(ct,r6,0,r5,0,((JAMAICA_BLOCK_GET_DATA32(r6,3).i>>4) &  ((jamaica_int32)268435455)));
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(b7,2).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(b7,2).r=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(b7,2).r=new_ref;}
#endif

l14:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 b7=JAMAICA_BLOCK_GET_DATA32(r4,7).r;
 r3=JAMAICA_BLOCK_GET_DATA32(b7,2).r;
 n1=JAMAICA_BLOCK_GET_DATA32(b7,3).i;
 JAMAICA_BLOCK_GET_DATA32(b7,3).i = JAMAICA_ADDS32(n1,1);
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 n8=JAMAICA_BLOCK_GET_DATA32(r3,3).i;
 n9=((n8>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n1))>=((jamaica_uint32)(n9))) { goto LABEL_tAIOOBE; }
 n8=(n8&15);
 r5=JAMAICA_BLOCK_GET_R(r3,1);
 JAMAICA_SET_ARRAY8(r3,n1,n4);
 n4=JAMAICA_BLOCK_GET_DATA32(b7,3).i;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(b7,3).i = JAMAICA_ADDS32(n4,1);
 n5=JAMAICA_SUBS32((n5&127),(n5&128));
 if (((jamaica_uint32)(n4))>=((jamaica_uint32)(n9))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY8(r3,n4,n5);
 n5=1;
 n4=n7;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l5; }
 jamaicaScheduler_syncPointFull(ct);
 goto l5;
l16:
 
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

 b5=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,1).r;
 r1=JAMAICA_BLOCK_GET_DATA32(b5,3).r;
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 jam_comp_sun_java2d_pisces_PisceCache_2_addRLERun4(ct,r1,n4,n5);
 r1=JAMAICA_BLOCK_GET_DATA32(b5,3).r;
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 jam_comp_sun_java2d_pisces_PisceCache_2_addRLERun4(ct,r1,0,0);
l17:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 b5=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 jam_comp_sun_java2d_pisces_Renderer_8_clearAlpha14(ct,r0,JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b5,3).r,7).r,JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b5,2).r,3).i,n2,n0);
 ct->m.cli-=6;
 return;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
LABEL_tNASE:   jamaica_throwNegArrSzExc(ct);        return;
}
JBIEXPORT void JBICALL jam_comp_sun_java2d_pisces_Renderer_8_addEdge17(jamaica_thread *ct,jamaica_ref r0,jamaica_int32 n0,jamaica_int32 n1,jamaica_int32 n2,jamaica_int32 n3) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r1=JAMAICA_NULL,r2=JAMAICA_NULL;
 jamaica_int32 n4=0,n5=0,n6=0,n7=0;
 jamaica_ref b0=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+2;
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
 b0=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,2).r;
 n4=JAMAICA_BLOCK_GET_DATA32(b0,5).i;
 n4=JAMAICA_ADDS32(n4,5);
 r1=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 n5=JAMAICA_BLOCK_GET_DATA32(r1,3).i;
 n5=((n5>>4) &  ((jamaica_int32)268435455));
 if (n5>=n4) { goto l6; }
 n5=JAMAICA_DIVS32(JAMAICA_MULS32(11,n5),10);
 n6=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_Math_82,5).i;
 if (((n6>>20) |  ((n6>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_Math_82,-1);
 }
 n6=n5;
 if (n5<n4) { goto l5; }
 n4=n6;
l5:
 if ((n4<0)) { goto LABEL_tNASE; }
 r1=jamaicaInterpreter_allocSimpleArray(ct,n4,ct->vm->array_class[10]);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,2).r;
 Jam_java_lang_System_arraycopy(ct,JAMAICA_BLOCK_GET_DATA32(b0,4).r,0,r1,0,JAMAICA_BLOCK_GET_DATA32(b0,5).i);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(b0,4).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(b0,4).r=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(b0,4).r=new_ref;}
#endif

l6:
 n4=1;
 n5=n1;
 n6=n3;
 if (n5<=n6) { goto l8; }
 n1=n6;
 n3=n5;
 n4=(-1);
l8:
 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,1).r;
 n5=JAMAICA_BLOCK_GET_DATA32(b0,1).i;
 n6=JAMAICA_BLOCK_GET_DATA32(b0,2).i;
 n7=(JAMAICA_ADDS32(n1,n5)&n6);
 n5=(JAMAICA_SUBS32(n3,n5)&n6);
 if (n7<=n5) { goto l10; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->m.cli-=2;
 return;
l10:
 if (n4!=(-1)) { goto l12; }
 n5=n0;
 n0=n2;
 n2=n5;
l12:
 r1=r0;
 b0=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,2).r;
 r2=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 n5=JAMAICA_BLOCK_GET_DATA32(b0,5).i;
 JAMAICA_BLOCK_GET_DATA32(b0,5).i = JAMAICA_ADDS32(n5,1);
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n6=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 n7=((n6>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n5))>=((jamaica_uint32)(n7))) { goto LABEL_tAIOOBE; }
 n6=(n6&15);
 JAMAICA_SET_ARRAY32(r2,n5,n0);
 n5=JAMAICA_BLOCK_GET_DATA32(b0,5).i;
 JAMAICA_BLOCK_GET_DATA32(b0,5).i = JAMAICA_ADDS32(n5,1);
 if (((jamaica_uint32)(n5))>=((jamaica_uint32)(n7))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r2,n5,n1);
 n5=JAMAICA_BLOCK_GET_DATA32(b0,5).i;
 JAMAICA_BLOCK_GET_DATA32(b0,5).i = JAMAICA_ADDS32(n5,1);
 if (((jamaica_uint32)(n5))>=((jamaica_uint32)(n7))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r2,n5,n2);
 n5=JAMAICA_BLOCK_GET_DATA32(b0,5).i;
 JAMAICA_BLOCK_GET_DATA32(b0,5).i = JAMAICA_ADDS32(n5,1);
 if (((jamaica_uint32)(n5))>=((jamaica_uint32)(n7))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r2,n5,n3);
 n5=JAMAICA_BLOCK_GET_DATA32(b0,5).i;
 JAMAICA_BLOCK_GET_DATA32(b0,5).i = JAMAICA_ADDS32(n5,1);
 if (((jamaica_uint32)(n5))>=((jamaica_uint32)(n7))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r2,n5,n4);
 if (n1>=JAMAICA_BLOCK_GET_DATA32(b0,6).i) { goto l14; }
 JAMAICA_BLOCK_GET_DATA32(b0,6).i = n1;
l14:
 b0=JAMAICA_BLOCK_GET_DATA32(r0,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,2).r;
 if (n3<=JAMAICA_BLOCK_GET_DATA32(b0,7).i) { goto l16; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(b0,7).i = n3;
l16:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->m.cli-=2;
 return;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
LABEL_tNASE:   jamaica_throwNegArrSzExc(ct);        return;
}
JBIEXPORT void JBICALL jam_comp_sun_java2d_pisces_Renderer_8_resetsings20(jamaica_thread *ct,jamaica_ref r0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r1=JAMAICA_NULL,r2=JAMAICA_NULL;
 jamaica_int32 n0=0,n5=0,n6=0,n1=0,n2=0,n4=0;
 jamaica_ref b3=JAMAICA_NULL,b4=JAMAICA_NULL;
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

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

l2:
 b3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,1).r;
 n0=JAMAICA_ADDS32(JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b3,3).i,JAMAICA_BLOCK_GET_DATA32(b3,2).i),1);
 n5=0;
 n6=0;
 r2=r0;
 n2=0;
 n1=0;
 b3=JAMAICA_BLOCK_GET_DATA32(r2,7).r;
 b3=JAMAICA_BLOCK_GET_DATA32(b3,0).r;
 b3=JAMAICA_BLOCK_GET_DATA32(b3,1).r;
 r1=JAMAICA_BLOCK_GET_DATA32(b3,0).r;
 if (r1==JAMAICA_NULL) { goto l4; }
 n1=JAMAICA_BLOCK_GET_DATA32(r1,3).i;
 n2=((n1>>4) &  ((jamaica_int32)268435455));
 n1=(n1&15);
l4:
 n4=JAMAICA_BLOCK_GET_DATA32(b3,6).i;
 if (r1==JAMAICA_NULL) { goto l9; }
 if (n1!=0) { goto l9; }
l6:
 if (n6>=n0) { goto l12; }
 if (((jamaica_uint32)(n6))>=((jamaica_uint32)(n2))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32_D0(r1,n6,n5);
 n5=JAMAICA_ADDS32(n5,n4);
 n6=JAMAICA_ADDS32(n6,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l6; }
 
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

 goto l6;
l9:
 if (n6>=n0) { goto l12; }
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n6))>=((jamaica_uint32)(n2))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r1,n6,n5);
 n5=JAMAICA_ADDS32(n5,n4);
 n6=JAMAICA_ADDS32(n6,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l9; }
 
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

 goto l9;
l12:
 b3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r;
 b4=JAMAICA_BLOCK_GET_DATA32(b3,1).r;
 JAMAICA_BLOCK_GET_DATA32(b4,4).i = 2147483647;
 JAMAICA_BLOCK_GET_DATA32(b4,5).i = ((jamaica_int32)0x80000000);
 JAMAICA_BLOCK_GET_DATA32(b4,7).i = 0;
 JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b3,0).r,7).r,0).b[0] = (jamaica_int8) 0;
 ct->m.cli-=2;
 return;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT void JBICALL jam_comp_sun_java2d_pisces_Renderer_8_sortCsings22(jamaica_thread *ct,jamaica_ref r1,jamaica_ref r0,jamaica_int32 n0,jamaica_int32 n1) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r2=JAMAICA_NULL;
 jamaica_int32 n10=0,n13=0,n15=0,n4=0,n7=0,n8=0,n11=0,n12=0,n14=0;
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

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

l2:
 n10=JAMAICA_ADDS32(n0,1);
 n11=n0;
 n11=JAMAICA_ADDS32(n11,n1);
 r2=r0;
 n4=0;
 n1=0;
 n7=0;
 n8=0;
 if (r2==JAMAICA_NULL) { goto l4; }
 n1=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 n4=((n1>>4) &  ((jamaica_int32)268435455));
 n1=(n1&15);
l4:
 n12=n0;
 if (r0==JAMAICA_NULL) { goto l16; }
 n0=JAMAICA_BLOCK_GET_DATA32(r0,3).i;
 n7=((n0>>4) &  ((jamaica_int32)268435455));
 n8=(n0&15);
 if (r2==JAMAICA_NULL) { goto l16; }
 if (n1!=0) { goto l16; }
 if (n8!=0) { goto l16; }
l8:
 if (n10>=n11) { goto l24; }
 n0=n10;
 if (((jamaica_uint32)(n10))>=((jamaica_uint32)(n4))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r2,n10,n13);
l10:
 if (n0<=n12) { goto l14; }
 n14=JAMAICA_SUBS32(n0,1);
 if (((jamaica_uint32)(n14))>=((jamaica_uint32)(n7))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r0,n14,n15);
 if (n15<=n13) { goto l14; }
 if (((jamaica_uint32)(n0))>=((jamaica_uint32)(n7))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32_D0(r0,n0,n15);
 JAMAICA_SET_ARRAY32_D0(r0,n14,n13);
 n0=JAMAICA_ADDS32(n0,(-1));
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l10; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
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

 goto l10;
l14:
 n10=JAMAICA_ADDS32(n10,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l8; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
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

 goto l8;
l16:
 if (n10>=n11) { goto l24; }
 n0=n10;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n10))>=((jamaica_uint32)(n4))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r2,n10,n13);
l18:
 if (n0<=n12) { goto l22; }
 n14=JAMAICA_SUBS32(n0,1);
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n14))>=((jamaica_uint32)(n7))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r0,n14,n15);
 if (n15<=n13) { goto l22; }
 if (((jamaica_uint32)(n0))>=((jamaica_uint32)(n7))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r0,n0,n15);
 JAMAICA_SET_ARRAY32(r0,n14,n13);
 n0=JAMAICA_ADDS32(n0,(-1));
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l18; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
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

 goto l18;
l22:
 n10=JAMAICA_ADDS32(n10,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l16; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
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

 goto l16;
l24:
 ct->m.cli-=2;
 return;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT void JBICALL jam_comp_sun_java2d_pisces_Renderer_8_sortCsings23(jamaica_thread *ct,jamaica_ref r0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r3=JAMAICA_NULL,r1=JAMAICA_NULL,r2=JAMAICA_NULL,r4=JAMAICA_NULL,r5=JAMAICA_NULL,r6=JAMAICA_NULL;
 jamaica_int32 n17=0,n18=0,n19=0,n7=0,n20=0,n23=0,n25=0,n0=0,n1=0,n4=0,n5=0,n11=0,n14=0,n15=0,n21=0,n22=0,n24=0;
 jamaica_ref b0=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+4;
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
 n17=0;
 n18=0;
 r4=r0;
 n4=0;
 n5=0;
 b0=JAMAICA_BLOCK_GET_DATA32(r4,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 n0=JAMAICA_BLOCK_GET_DATA32(b0,3).i;
 n1=JAMAICA_BLOCK_GET_DATA32(b0,2).i;
 n0=JAMAICA_SUBS32(n0,n1);
 r5=r0;
 b0=JAMAICA_BLOCK_GET_DATA32(r5,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 r1=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 r2=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 if (r2==JAMAICA_NULL) { goto l4; }
 n1=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 n4=((n1>>4) &  ((jamaica_int32)268435455));
 n5=(n1&15);
l4:
 b0=JAMAICA_BLOCK_GET_DATA32(r0,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 n1=JAMAICA_BLOCK_GET_DATA32(b0,6).i;
l5:
 if (n18>n0) { goto l30; }
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n18))>=((jamaica_uint32)(n4))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r2,n18,n19);
 r3=r1;
 n7=n17;
 n19=JAMAICA_SUBS32(n19,n17);
 n20=JAMAICA_ADDS32(n17,1);
 n21=n7;
 n19=JAMAICA_ADDS32(n21,n19);
 r6=r3;
 n11=0;
 n21=0;
 n14=0;
 n15=0;
 if (r6==JAMAICA_NULL) { goto l8; }
 n21=JAMAICA_BLOCK_GET_DATA32(r6,3).i;
 n11=((n21>>4) &  ((jamaica_int32)268435455));
 n21=(n21&15);
l8:
 n22=n7;
 if (r3==JAMAICA_NULL) { goto l20; }
 n7=JAMAICA_BLOCK_GET_DATA32(r3,3).i;
 n14=((n7>>4) &  ((jamaica_int32)268435455));
 n15=(n7&15);
 if (r6==JAMAICA_NULL) { goto l20; }
 if (n21!=0) { goto l20; }
 if (n15!=0) { goto l20; }
l12:
 if (n20>=n19) { goto l28; }
 n7=n20;
 if (((jamaica_uint32)(n20))>=((jamaica_uint32)(n11))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r6,n20,n23);
l14:
 if (n7<=n22) { goto l18; }
 n24=JAMAICA_SUBS32(n7,1);
 if (((jamaica_uint32)(n24))>=((jamaica_uint32)(n14))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r3,n24,n25);
 if (n25<=n23) { goto l18; }
 if (((jamaica_uint32)(n7))>=((jamaica_uint32)(n14))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32_D0(r3,n7,n25);
 JAMAICA_SET_ARRAY32_D0(r3,n24,n23);
 n7=JAMAICA_ADDS32(n7,(-1));
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l14; }
 
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

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
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

 goto l14;
l18:
 n20=JAMAICA_ADDS32(n20,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l12; }
 
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

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
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

 goto l12;
l20:
 if (n20>=n19) { goto l28; }
 n7=n20;
 if (r6==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n20))>=((jamaica_uint32)(n11))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r6,n20,n23);
l22:
 if (n7<=n22) { goto l26; }
 n24=JAMAICA_SUBS32(n7,1);
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n24))>=((jamaica_uint32)(n14))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r3,n24,n25);
 if (n25<=n23) { goto l26; }
 if (((jamaica_uint32)(n7))>=((jamaica_uint32)(n14))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r3,n7,n25);
 JAMAICA_SET_ARRAY32(r3,n24,n23);
 n7=JAMAICA_ADDS32(n7,(-1));
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l22; }
 
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

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
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

 goto l22;
l26:
 n20=JAMAICA_ADDS32(n20,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l20; }
 
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

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r6;}
#else
{jamaica_ref new_ref=r6;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
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

 goto l20;
l28:
 n17=JAMAICA_ADDS32(n17,n1);
 n18=JAMAICA_ADDS32(n18,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l5; }
 
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

 goto l5;
l30:
 ct->m.cli-=4;
 return;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT void JBICALL jam_comp_sun_java2d_pisces_Renderer_8_addCrssing24(jamaica_thread *ct,jamaica_ref r0,jamaica_int32 n0,jamaica_int32 n1,jamaica_int32 n2) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r1=JAMAICA_NULL,r2=JAMAICA_NULL;
 jamaica_int32 n5=0,n3=0,n4=0,n6=0;
 jamaica_ref b0=JAMAICA_NULL;
 /* JAMAICA_C_STACK_OVERFLOW not needed for leaf methods */
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
 n3=n1;
 r1=r0;
 b0=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 if (n3>=JAMAICA_BLOCK_GET_DATA32(b0,4).i) { goto l4; }
 JAMAICA_BLOCK_GET_DATA32(b0,4).i = n3;
l4:
 n3=n1;
 r1=r0;
 b0=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 if (n3<=JAMAICA_BLOCK_GET_DATA32(b0,5).i) { goto l6; }
 JAMAICA_BLOCK_GET_DATA32(b0,5).i = n3;
l6:
 r1=r0;
 b0=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 r2=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 n3=JAMAICA_BLOCK_GET_DATA32(b0,2).i;
 n3=JAMAICA_SUBS32(n0,n3);
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n0=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 n4=((n0>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n3))>=((jamaica_uint32)(n4))) { goto LABEL_tAIOOBE; }
 n0=(n0&15);
 JAMAICA_GET_ARRAY32(r2,n3,n5);
 n6=JAMAICA_ADDS32(n5,1);
 JAMAICA_SET_ARRAY32(r2,n3,n6);
 n3=(n1<<1);
 n1=n3;
 r1=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 r2=r1;
 n0=n5;
 if (n2!=1) { goto l8; }
 n1=(n1|1);
 goto l9;
l8:
 r2=r1;
 n0=n5;
 n1=n3;
l9:
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n3=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 if (((jamaica_uint32)(n0))>=((jamaica_uint32)(((n3>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n4=(n3&15);
 JAMAICA_SET_ARRAY32(r2,n0,n1);
 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,1).r;
 JAMAICA_BLOCK_GET_DATA32(b0,7).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b0,7).i,1);
 ct->m.cli-=1;
 return;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT jamaica_int32 JBICALL jam_comp_sun_java2d_pisces_Renderer_8_hasMogRows26(jamaica_thread *ct,jamaica_ref r0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r1=JAMAICA_NULL;
 jamaica_int32 n0=0,n1=0,n2=0,n3=0;
 jamaica_ref b0=JAMAICA_NULL,b1=JAMAICA_NULL;
 /* JAMAICA_C_STACK_OVERFLOW not needed for leaf methods */
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
 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r;
 b1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,0).r,7).r;
 n0=JAMAICA_BLOCK_GET_DATA32(b1,1).i;
 n0=JAMAICA_ADDS32(n0,1);
 JAMAICA_BLOCK_GET_DATA32(b1,1).i = n0;
 if (n0>JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,1).r,3).i) { goto l4; }
 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r;
 b1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,0).r,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
 n0=JAMAICA_BLOCK_GET_DATA32(b0,6).i;
 JAMAICA_BLOCK_GET_DATA32(b1,3).i = JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b1,3).i,n0);
 n1=JAMAICA_SUBS32(JAMAICA_BLOCK_GET_DATA32(b1,1).i,JAMAICA_BLOCK_GET_DATA32(b0,2).i);
 r1=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 n2=JAMAICA_BLOCK_GET_DATA32(r1,3).i;
 if (((jamaica_uint32)(n1))>=((jamaica_uint32)(((n2>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n3=(n2&15);
 JAMAICA_GET_ARRAY32(r1,n1,n2);
 JAMAICA_BLOCK_GET_DATA32(b1,2).i = JAMAICA_SUBS32(n2,JAMAICA_MULS32(n1,n0));
 JAMAICA_BLOCK_GET_DATA32(b1,4).i = 0;
 ct->m.cli-=1;
 return 1;
l4:
 ct->m.cli-=1;
 return 0;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return 0;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return 0;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
}
JBIEXPORT jamaica_int32 JBICALL jam_comp_sun_java2d_pisces_Stroker_9_side6(jamaica_thread *ct,jamaica_ref r0,jamaica_int32 n0,jamaica_int32 n1,jamaica_int32 n2,jamaica_int32 n3,jamaica_int32 n4,jamaica_int32 n5) {
 jamaica_int32 tp;
 jamaica_int64 j0=JAMAICA_INT64_CONST_0,j1=JAMAICA_INT64_CONST_0,j2=JAMAICA_INT64_CONST_0,j3=JAMAICA_INT64_CONST_0,j4=JAMAICA_INT64_CONST_0,j5=JAMAICA_INT64_CONST_0;
 /* JAMAICA_C_STACK_OVERFLOW not needed for leaf methods */
 tp=ct->m.cli+0;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 j0=JAMAICA_INT32_TO_INT64(n0);
 j1=JAMAICA_INT32_TO_INT64(n1);
 j2=JAMAICA_INT32_TO_INT64(n2);
 j3=JAMAICA_INT32_TO_INT64(n3);
 j4=JAMAICA_INT32_TO_INT64(n4);
 j5=JAMAICA_INT32_TO_INT64(n5);
 if ((JAMAICA_GT_S64(JAMAICA_ADDS64(JAMAICA_ADDS64(JAMAICA_MULS64(JAMAICA_SUBS64(j3,j5),j0),JAMAICA_MULS64(JAMAICA_SUBS64(j4,j2),j1)),JAMAICA_SUBS64(JAMAICA_MULS64(j2,j5),JAMAICA_MULS64(j4,j3))),JAMAICA_INT64_CONST_0) ?+1:(JAMAICA_EQ_S64(JAMAICA_ADDS64(JAMAICA_ADDS64(JAMAICA_MULS64(JAMAICA_SUBS64(j3,j5),j0),JAMAICA_MULS64(JAMAICA_SUBS64(j4,j2),j1)),JAMAICA_SUBS64(JAMAICA_MULS64(j2,j5),JAMAICA_MULS64(j4,j3))),JAMAICA_INT64_CONST_0)?0:-1))<=0) { goto l4; }
 n0=1;
 goto l5;
l4:
 n0=0;
l5:
 return n0;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
}
JBIEXPORT jamaica_int32 JBICALL jam_comp_sun_java2d_pisces_Stroker_9_compudJoin7(jamaica_thread *ct,jamaica_ref r0,jamaica_int32 n1,jamaica_int32 n5,jamaica_int32 n32,jamaica_int32 n33,jamaica_int32 n34,jamaica_int32 n35,jamaica_int32 n43,jamaica_int32 n44,jamaica_ref r3) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r8=JAMAICA_NULL,r9=JAMAICA_NULL,r10=JAMAICA_NULL,r11=JAMAICA_NULL,r12=JAMAICA_NULL,r13=JAMAICA_NULL,r14=JAMAICA_NULL,r15=JAMAICA_NULL,r16=JAMAICA_NULL,r17=JAMAICA_NULL;
 jamaica_int32 n45=0,n13=0,n53=0,n25=0,n26=0,n27=0,n29=0,n30=0,n38=0,n39=0,n41=0,n42=0,n46=0,n47=0,n48=0,n49=0,n50=0,n51=0,n52=0;
 jamaica_int64 j6=JAMAICA_INT64_CONST_0,j7=JAMAICA_INT64_CONST_0,j9=JAMAICA_INT64_CONST_0,j10=JAMAICA_INT64_CONST_0,j11=JAMAICA_INT64_CONST_0,j12=JAMAICA_INT64_CONST_0,j13=JAMAICA_INT64_CONST_0,j14=JAMAICA_INT64_CONST_0,j15=JAMAICA_INT64_CONST_0;
 jamaica_ref b4=JAMAICA_NULL,b7=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+8;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->m.cli = tp;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

l2:
 n45=0;
 if (n43!=0) { goto l6; }
 j9=JAMAICA_INT32_TO_INT64(n1);
 j10=JAMAICA_INT32_TO_INT64(n5);
 j11=JAMAICA_INT32_TO_INT64(n32);
 j12=JAMAICA_INT32_TO_INT64(n33);
 j13=JAMAICA_INT32_TO_INT64(n34);
 j14=JAMAICA_INT32_TO_INT64(n35);
 if ((JAMAICA_GT_S64(JAMAICA_ADDS64(JAMAICA_ADDS64(JAMAICA_MULS64(JAMAICA_SUBS64(j12,j14),j9),JAMAICA_MULS64(JAMAICA_SUBS64(j13,j11),j10)),JAMAICA_SUBS64(JAMAICA_MULS64(j11,j14),JAMAICA_MULS64(j13,j12))),JAMAICA_INT64_CONST_0) ?+1:(JAMAICA_EQ_S64(JAMAICA_ADDS64(JAMAICA_ADDS64(JAMAICA_MULS64(JAMAICA_SUBS64(j12,j14),j9),JAMAICA_MULS64(JAMAICA_SUBS64(j13,j11),j10)),JAMAICA_SUBS64(JAMAICA_MULS64(j11,j14),JAMAICA_MULS64(j13,j12))),JAMAICA_INT64_CONST_0)?0:-1))<=0) { goto l5; }
 n43=1;
 goto l9;
l5:
 n43=0;
 goto l9;
l6:
 if (n43!=1) { goto l8; }
 n43=1;
 goto l9;
l8:
 n43=0;
l9:
 n13=0;
 r14=r0;
 n27=0;
 n26=0;
 n30=0;
 n29=0;
 n38=0;
 n39=0;
 r11=JAMAICA_NULL;
 n41=0;
 n42=0;
 r13=JAMAICA_NULL;
 b7=JAMAICA_BLOCK_GET_DATA32(r14,7).r;
 n25=JAMAICA_BLOCK_GET_DATA32(b7,7).i;
 n46=n1;
 r15=r0;
 b7=JAMAICA_BLOCK_GET_DATA32(r15,7).r;
 b7=JAMAICA_BLOCK_GET_DATA32(b7,1).r;
 r8=JAMAICA_BLOCK_GET_DATA32(b7,2).r;
 if (r8==JAMAICA_NULL) { goto l11; }
 n26=JAMAICA_BLOCK_GET_DATA32(r8,3).i;
 n27=((n26>>4) &  ((jamaica_int32)268435455));
 n26=(n26&15);
l11:
 n47=n5;
 r9=JAMAICA_BLOCK_GET_DATA32(b7,3).r;
 if (r9==JAMAICA_NULL) { goto l13; }
 n29=JAMAICA_BLOCK_GET_DATA32(r9,3).i;
 n30=((n29>>4) &  ((jamaica_int32)268435455));
 n29=(n29&15);
l13:
 n48=n32;
 n49=n33;
 n50=n34;
 n51=n35;
 j9=JAMAICA_INT32_TO_INT64(n48);
 j10=JAMAICA_INT32_TO_INT64(n49);
 j11=JAMAICA_INT32_TO_INT64(n50);
 j12=JAMAICA_INT32_TO_INT64(n51);
 j13=JAMAICA_SUBS64(j10,j12);
 j14=JAMAICA_SUBS64(j11,j9);
 j6=JAMAICA_MULS64(j9,j12);
 j7=JAMAICA_MULS64(j11,j10);
 j6=JAMAICA_SUBS64(j6,j7);
 n52=n43;
 r16=r0;
 b7=JAMAICA_BLOCK_GET_DATA32(r16,7).r;
 b7=JAMAICA_BLOCK_GET_DATA32(b7,1).r;
 r10=JAMAICA_BLOCK_GET_DATA32(b7,4).r;
 if (r10==JAMAICA_NULL) { goto l15; }
 n43=JAMAICA_BLOCK_GET_DATA32(r10,3).i;
 n38=((n43>>4) &  ((jamaica_int32)268435455));
 n39=(n43&15);
 r11=JAMAICA_BLOCK_GET_R(r10,1);
l15:
 r17=r0;
 b7=JAMAICA_BLOCK_GET_DATA32(r17,7).r;
 b7=JAMAICA_BLOCK_GET_DATA32(b7,1).r;
 r12=JAMAICA_BLOCK_GET_DATA32(b7,4).r;
 if (r12==JAMAICA_NULL) { goto l32; }
 n43=JAMAICA_BLOCK_GET_DATA32(r12,3).i;
 n41=((n43>>4) &  ((jamaica_int32)268435455));
 n42=(n43&15);
 r13=JAMAICA_BLOCK_GET_R(r12,1);
 if (r8==JAMAICA_NULL) { goto l32; }
 if (r9==JAMAICA_NULL) { goto l32; }
 if (r10==JAMAICA_NULL) { goto l32; }
 if (n26!=0) { goto l32; }
 if (n29!=0) { goto l32; }
 if (n39!=0) { goto l32; }
 if (n42!=0) { goto l32; }
l23:
 if (n13>=n25) { goto l41; }
 if (((jamaica_uint32)(n13))>=((jamaica_uint32)(n27))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r8,n13,n43);
 n43=JAMAICA_ADDS32(n46,n43);
 if (((jamaica_uint32)(n13))>=((jamaica_uint32)(n30))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r9,n13,n53);
 n53=JAMAICA_ADDS32(n47,n53);
 j7=JAMAICA_INT32_TO_INT64(n43);
 j15=JAMAICA_INT32_TO_INT64(n53);
 if ((JAMAICA_GT_S64(JAMAICA_ADDS64(JAMAICA_ADDS64(JAMAICA_MULS64(j13,j7),JAMAICA_MULS64(j14,j15)),j6),JAMAICA_INT64_CONST_0) ?+1:(JAMAICA_EQ_S64(JAMAICA_ADDS64(JAMAICA_ADDS64(JAMAICA_MULS64(j13,j7),JAMAICA_MULS64(j14,j15)),j6),JAMAICA_INT64_CONST_0)?0:-1))<=0) { goto l26; }
 n43=1;
 goto l27;
l26:
 n43=0;
l27:
 if (n43==n52) { goto l29; }
 if (((jamaica_uint32)(n13))>=((jamaica_uint32)(n38))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY8_D0(r10,n13,1);
 goto l30;
l29:
 if (((jamaica_uint32)(n13))>=((jamaica_uint32)(n41))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY8_D0(r12,n13,0);
l30:
 n13=JAMAICA_ADDS32(n13,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l23; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r11;}
#else
{jamaica_ref new_ref=r11;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r13;}
#else
{jamaica_ref new_ref=r13;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r9;}
#else
{jamaica_ref new_ref=r9;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r10;}
#else
{jamaica_ref new_ref=r10;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r12;}
#else
{jamaica_ref new_ref=r12;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 
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

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 goto l23;
l32:
 if (n13>=n25) { goto l41; }
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n13))>=((jamaica_uint32)(n27))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r8,n13,n43);
 n43=JAMAICA_ADDS32(n46,n43);
 if (r9==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n13))>=((jamaica_uint32)(n30))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r9,n13,n53);
 n53=JAMAICA_ADDS32(n47,n53);
 j7=JAMAICA_INT32_TO_INT64(n43);
 j15=JAMAICA_INT32_TO_INT64(n53);
 if ((JAMAICA_GT_S64(JAMAICA_ADDS64(JAMAICA_ADDS64(JAMAICA_MULS64(j13,j7),JAMAICA_MULS64(j14,j15)),j6),JAMAICA_INT64_CONST_0) ?+1:(JAMAICA_EQ_S64(JAMAICA_ADDS64(JAMAICA_ADDS64(JAMAICA_MULS64(j13,j7),JAMAICA_MULS64(j14,j15)),j6),JAMAICA_INT64_CONST_0)?0:-1))<=0) { goto l35; }
 n43=1;
 goto l36;
l35:
 n43=0;
l36:
 if (n43==n52) { goto l38; }
 if (r10==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n13))>=((jamaica_uint32)(n38))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY8(r10,n13,1);
 goto l39;
l38:
 if (r12==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n13))>=((jamaica_uint32)(n41))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY8(r12,n13,0);
l39:
 n13=JAMAICA_ADDS32(n13,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l32; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r11;}
#else
{jamaica_ref new_ref=r11;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r13;}
#else
{jamaica_ref new_ref=r13;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r9;}
#else
{jamaica_ref new_ref=r9;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=r10;}
#else
{jamaica_ref new_ref=r10;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[5]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=r12;}
#else
{jamaica_ref new_ref=r12;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[6]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[6];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[6]=JAMAICA_NULL;}
#else
{l[6]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[5];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[5]=JAMAICA_NULL;}
#else
{l[5]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 
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

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 goto l32;
l41:
 n13=(-1);
 n25=(-1);
 n43=0;
 r14=r0;
 n29=0;
 n27=0;
 r9=JAMAICA_NULL;
 n39=0;
 n38=0;
 r11=JAMAICA_NULL;
 b7=JAMAICA_BLOCK_GET_DATA32(r14,7).r;
 n26=JAMAICA_BLOCK_GET_DATA32(b7,7).i;
 r12=r0;
 b7=JAMAICA_BLOCK_GET_DATA32(r12,7).r;
 b4=JAMAICA_BLOCK_GET_DATA32(b7,1).r;
 r8=JAMAICA_BLOCK_GET_DATA32(b4,4).r;
 if (r8==JAMAICA_NULL) { goto l43; }
 n27=JAMAICA_BLOCK_GET_DATA32(r8,3).i;
 n29=((n27>>4) &  ((jamaica_int32)268435455));
 n27=(n27&15);
 r9=JAMAICA_BLOCK_GET_R(r8,1);
l43:
 n30=JAMAICA_BLOCK_GET_DATA32(b7,7).i;
 r13=r0;
 b7=JAMAICA_BLOCK_GET_DATA32(r13,7).r;
 b4=JAMAICA_BLOCK_GET_DATA32(b7,1).r;
 r10=JAMAICA_BLOCK_GET_DATA32(b4,4).r;
 if (r10==JAMAICA_NULL) { goto l45; }
 n38=JAMAICA_BLOCK_GET_DATA32(r10,3).i;
 n39=((n38>>4) &  ((jamaica_int32)268435455));
 n38=(n38&15);
 r11=JAMAICA_BLOCK_GET_R(r10,1);
l45:
 n41=JAMAICA_BLOCK_GET_DATA32(b7,7).i;
 if (r8==JAMAICA_NULL) { goto l60; }
 if (n30==0) { goto l60; }
 if (r10==JAMAICA_NULL) { goto l60; }
 if (n41==0) { goto l60; }
 if (n27!=0) { goto l60; }
 if (n38!=0) { goto l60; }
l51:
 if (n43>=n26) { goto l69; }
 n42=n43;
 if (((jamaica_uint32)(n42))>=((jamaica_uint32)(n29))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY8_D0(r8,n42,n46);
 if (n46==0) { goto l55; }
 n46=JAMAICA_MODS32(JAMAICA_SUBS32(JAMAICA_ADDS32(n42,n30),1),n30);
 if (((jamaica_uint32)(n46))>=((jamaica_uint32)(n29))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY8_D0(r8,n46,n46);
 if (n46!=0) { goto l55; }
 n13=n42;
l55:
 n42=n43;
 if (((jamaica_uint32)(n42))>=((jamaica_uint32)(n39))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY8_D0(r10,n42,n46);
 if (n46==0) { goto l58; }
 n46=JAMAICA_MODS32(JAMAICA_ADDS32(n42,1),n41);
 if (((jamaica_uint32)(n46))>=((jamaica_uint32)(n39))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY8_D0(r10,n46,n46);
 if (n46!=0) { goto l58; }
 n25=n42;
l58:
 n43=JAMAICA_ADDS32(n43,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l51; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r11;}
#else
{jamaica_ref new_ref=r11;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r9;}
#else
{jamaica_ref new_ref=r9;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r10;}
#else
{jamaica_ref new_ref=r10;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 
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

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 goto l51;
l60:
 if (n43>=n26) { goto l69; }
 n42=n43;
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n42))>=((jamaica_uint32)(n29))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY8(r8,n42,n46);
 if (n46==0) { goto l64; }
 if (n30==0) { goto LABEL_tAE; }
 n46=JAMAICA_MODS32(JAMAICA_SUBS32(JAMAICA_ADDS32(n42,n30),1),n30);
 if (((jamaica_uint32)(n46))>=((jamaica_uint32)(n29))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY8(r8,n46,n46);
 if (n46!=0) { goto l64; }
 n13=n42;
l64:
 n42=n43;
 if (r10==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n42))>=((jamaica_uint32)(n39))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY8(r10,n42,n46);
 if (n46==0) { goto l67; }
 if (n41==0) { goto LABEL_tAE; }
 n46=JAMAICA_MODS32(JAMAICA_ADDS32(n42,1),n41);
 if (((jamaica_uint32)(n46))>=((jamaica_uint32)(n39))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY8(r10,n46,n46);
 if (n46!=0) { goto l67; }
 n25=n42;
l67:
 n43=JAMAICA_ADDS32(n43,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l60; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r11;}
#else
{jamaica_ref new_ref=r11;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r9;}
#else
{jamaica_ref new_ref=r9;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r10;}
#else
{jamaica_ref new_ref=r10;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 
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

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 goto l60;
l69:
 n43=n25;
 if (n43>=n13) { goto l71; }
 n25=JAMAICA_ADDS32(n43,n26);
l71:
 n43=n13;
 if (n43==(-1)) { goto l107; }
 if (n25==(-1)) { goto l107; }
 b7=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,1).r;
 r14=JAMAICA_BLOCK_GET_DATA32(b7,2).r;
 if (r14==JAMAICA_NULL) { goto LABEL_tNPE; }
 n26=JAMAICA_BLOCK_GET_DATA32(r14,3).i;
 if (((jamaica_uint32)(n43))>=((jamaica_uint32)(((n26>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n27=(n26&15);
 JAMAICA_GET_ARRAY32(r14,n43,n26);
 n26=JAMAICA_ADDS32(n1,n26);
 j9=JAMAICA_INT32_TO_INT64(JAMAICA_SUBS32(n26,n32));
 r14=JAMAICA_BLOCK_GET_DATA32(b7,3).r;
 if (r14==JAMAICA_NULL) { goto LABEL_tNPE; }
 n32=JAMAICA_BLOCK_GET_DATA32(r14,3).i;
 if (((jamaica_uint32)(n43))>=((jamaica_uint32)(((n32>>4) &  ((jamaica_int32)268435455))))) { goto LABEL_tAIOOBE; }
 n27=(n32&15);
 JAMAICA_GET_ARRAY32(r14,n43,n43);
 n43=JAMAICA_ADDS32(n5,n43);
 j10=JAMAICA_INT32_TO_INT64(JAMAICA_SUBS32(n43,n33));
 j11=JAMAICA_INT32_TO_INT64(JAMAICA_SUBS32(n26,n34));
 j12=JAMAICA_INT32_TO_INT64(JAMAICA_SUBS32(n43,n35));
 if ((JAMAICA_GT_S64(JAMAICA_ADDS64(JAMAICA_MULS64(j9,j9),JAMAICA_MULS64(j10,j10)),JAMAICA_ADDS64(JAMAICA_MULS64(j11,j11),JAMAICA_MULS64(j12,j12))) ?+1:(JAMAICA_EQ_S64(JAMAICA_ADDS64(JAMAICA_MULS64(j9,j9),JAMAICA_MULS64(j10,j10)),JAMAICA_ADDS64(JAMAICA_MULS64(j11,j11),JAMAICA_MULS64(j12,j12)))?0:-1))<=0) { goto l75; }
 n43=1;
 goto l76;
l75:
 n43=0;
l76:
 n32=n43;
 if (n43==0) { goto l78; }
 n43=n25;
 goto l79;
l78:
 n43=n13;
l79:
 n33=n43;
 if (n32==0) { goto l81; }
 n43=(-1);
 goto l82;
l81:
 n43=1;
l82:
 n35=0;
 n26=0;
 n27=0;
 n29=0;
 n30=0;
 n38=0;
 b7=JAMAICA_BLOCK_GET_DATA32(r0,7).r;
 n34=JAMAICA_BLOCK_GET_DATA32(b7,7).i;
 n39=n1;
 b7=JAMAICA_BLOCK_GET_DATA32(b7,1).r;
 r14=JAMAICA_BLOCK_GET_DATA32(b7,2).r;
 if (r14==JAMAICA_NULL) { goto l84; }
 n1=JAMAICA_BLOCK_GET_DATA32(r14,3).i;
 n35=((n1>>4) &  ((jamaica_int32)268435455));
 n26=(n1&15);
l84:
 r8=JAMAICA_BLOCK_GET_DATA32(b7,3).r;
 if (r8==JAMAICA_NULL) { goto l86; }
 n1=JAMAICA_BLOCK_GET_DATA32(r8,3).i;
 n27=((n1>>4) &  ((jamaica_int32)268435455));
 n29=(n1&15);
l86:
 if (r3==JAMAICA_NULL) { goto l88; }
 n1=JAMAICA_BLOCK_GET_DATA32(r3,3).i;
 n30=((n1>>4) &  ((jamaica_int32)268435455));
 n38=(n1&15);
l88:
 n1=n32;
 n32=n25;
 n25=n43;
 if (n34==0) { goto l101; }
 if (r14==JAMAICA_NULL) { goto l101; }
 if (r8==JAMAICA_NULL) { goto l101; }
 if (r3==JAMAICA_NULL) { goto l101; }
 if (n26!=0) { goto l101; }
 if (n29!=0) { goto l101; }
 if (n38!=0) { goto l101; }
l95:
 n41=n33;
 n43=JAMAICA_MODS32(n41,n34);
 if (((jamaica_uint32)(n43))>=((jamaica_uint32)(n35))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r14,n43,n42);
 n42=JAMAICA_ADDS32(n39,n42);
 if (((jamaica_uint32)(n43))>=((jamaica_uint32)(n27))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32_D0(r8,n43,n43);
 n43=JAMAICA_ADDS32(n5,n43);
 n46=JAMAICA_ADDS32(n45,1);
 if (((jamaica_uint32)(n45))>=((jamaica_uint32)(n30))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32_D0(r3,n45,n42);
 n45=JAMAICA_ADDS32(n46,1);
 if (((jamaica_uint32)(n46))>=((jamaica_uint32)(n30))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32_D0(r3,n46,n43);
 n43=n41;
 if (n1==0) { goto l97; }
 n41=n13;
 goto l98;
l97:
 n43=n41;
 n41=n32;
l98:
 if (n43==n41) { goto l107; }
 n33=JAMAICA_ADDS32(n33,n25);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l95; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r14;}
#else
{jamaica_ref new_ref=r14;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
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

 goto l95;
l101:
 n41=n33;
 if (n34==0) { goto LABEL_tAE; }
 n43=JAMAICA_MODS32(n41,n34);
 if (r14==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n43))>=((jamaica_uint32)(n35))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r14,n43,n42);
 n42=JAMAICA_ADDS32(n39,n42);
 if (r8==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n43))>=((jamaica_uint32)(n27))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r8,n43,n43);
 n43=JAMAICA_ADDS32(n5,n43);
 n46=JAMAICA_ADDS32(n45,1);
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 if (((jamaica_uint32)(n45))>=((jamaica_uint32)(n30))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r3,n45,n42);
 n45=JAMAICA_ADDS32(n46,1);
 if (((jamaica_uint32)(n46))>=((jamaica_uint32)(n30))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r3,n46,n43);
 n43=n41;
 if (n1==0) { goto l103; }
 n41=n13;
 goto l104;
l103:
 n43=n41;
 n41=n32;
l104:
 if (n43==n41) { goto l107; }
 n33=JAMAICA_ADDS32(n33,n25);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l101; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r14;}
#else
{jamaica_ref new_ref=r14;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r8;}
#else
{jamaica_ref new_ref=r8;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[7]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[7];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[7]=JAMAICA_NULL;}
#else
{l[7]=JAMAICA_NULL;}
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

 goto l101;
l107:
 ct->m.cli-=8;
 return JAMAICA_DIVS32(n45,2);
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return 0;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return 0;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
LABEL_tAE:     jamaica_throwArithmExc(ct);          return 0;
}
JBIEXPORT void JBICALL jam_comp_sun_java2d_pisces_Stroker_9_drawRdJoin8(jamaica_thread *ct,jamaica_ref r0,jamaica_int32 n2,jamaica_int32 n3,jamaica_int32 n4,jamaica_int32 n5,jamaica_int32 n6,jamaica_int32 n7,jamaica_int32 n8,jamaica_int32 n9,jamaica_int32 n1,jamaica_int64 j0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r1=JAMAICA_NULL,r2=JAMAICA_NULL;
 jamaica_int32 n10=0,n11=0,n12=0,n13=0;
 jamaica_int64 j1=JAMAICA_INT64_CONST_0,j2=JAMAICA_INT64_CONST_0;
 jamaica_ref b0=JAMAICA_NULL,b2=JAMAICA_NULL,b3=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+2;
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
 if (n4!=0) { goto l4; }
 if (n5==0) { goto l6; }
l4:
 if (n6!=0) { goto l7; }
 if (n7!=0) { goto l7; }
l6:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->m.cli-=2;
 return;
l7:
 n10=n4;
 n11=n6;
 j1=JAMAICA_SUBS64(JAMAICA_INT32_TO_INT64(n10),JAMAICA_INT32_TO_INT64(n11));
 n12=n5;
 n13=n7;
 j2=JAMAICA_SUBS64(JAMAICA_INT32_TO_INT64(n12),JAMAICA_INT32_TO_INT64(n13));
 j1=JAMAICA_ADDS64(JAMAICA_MULS64(j1,j1),JAMAICA_MULS64(j2,j2));
 if ((JAMAICA_GT_S64(j1,j0) ?+1:(JAMAICA_EQ_S64(j1,j0)?0:-1))>=0) { goto l9; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->m.cli-=2;
 return;
l9:
 if (n1==0) { goto l11; }
 n4=(-(n10));
 n5=(-(n12));
 n6=(-(n11));
 n7=(-(n13));
l11:
 n4=JAMAICA_ADDS32(n2,n4);
 n5=JAMAICA_ADDS32(n3,n5);
 n6=JAMAICA_ADDS32(n2,n6);
 n7=JAMAICA_ADDS32(n3,n7);
 r1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,1).r,5).r;
 n4=jam_comp_sun_java2d_pisces_Stroker_9_compudJoin7(ct,r0,n2,n3,n4,n5,n6,n7,n8,n9,r1);
 n5=0;
 b0=JAMAICA_BLOCK_GET_DATA32(r0,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
l12:
 if (n5>=n4) { goto l18; }
 r1=JAMAICA_BLOCK_GET_DATA32(b0,5).r;
 n6=n5;
 n6=JAMAICA_MULS32(2,n6);
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 n7=JAMAICA_BLOCK_GET_DATA32(r1,3).i;
 n10=((n7>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n6))>=((jamaica_uint32)(n10))) { goto LABEL_tAIOOBE; }
 n7=(n7&15);
 JAMAICA_GET_ARRAY32(r1,n6,n11);
 n6=JAMAICA_ADDS32(n6,1);
 if (((jamaica_uint32)(n6))>=((jamaica_uint32)(n10))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r1,n6,n6);
 r1=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 n7=n11;
 n10=n6;
 if (n1==0) { goto l15; }
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 b2=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 b3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b2,0).r,3).r;
{ jamaica_ref m=jam_mtd_sun_java2d_pisces_Stroker_9_ensuracity4;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b3,0).i,2));
}
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b2,1).r,7).r;
 n6=JAMAICA_BLOCK_GET_DATA32(b3,0).i;
 JAMAICA_BLOCK_GET_DATA32(b3,0).i = JAMAICA_ADDS32(n6,1);
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n11=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 n12=((n11>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n6))>=((jamaica_uint32)(n12))) { goto LABEL_tAIOOBE; }
 n11=(n11&15);
 JAMAICA_SET_ARRAY32(r2,n6,n7);
 n6=JAMAICA_BLOCK_GET_DATA32(b3,0).i;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(b3,0).i = JAMAICA_ADDS32(n6,1);
 if (((jamaica_uint32)(n6))>=((jamaica_uint32)(n12))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r2,n6,n10);
 goto l16;
l15:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_java2d_pisces_Stroker_9_emitLineTo20;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,n11,n6);
}
l16:
 n5=JAMAICA_ADDS32(n5,1);
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l12; }
 jamaicaScheduler_syncPointFull(ct);
 goto l12;
l18:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->m.cli-=2;
 return;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT void JBICALL jam_comp_sun_java2d_pisces_Stroker_9_lineToImpl14(jamaica_thread *ct,jamaica_ref r0,jamaica_int32 n0,jamaica_int32 n1,jamaica_int32 n2) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r1=JAMAICA_NULL,r2=JAMAICA_NULL;
 jamaica_int32 n7=0,n8=0,n3=0,n4=0,n5=0,n6=0,n9=0,n10=0,n11=0,n12=0;
 jamaica_ref b0=JAMAICA_NULL,b1=JAMAICA_NULL,b2=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+2;
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
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 b0=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 b1=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b2=JAMAICA_BLOCK_GET_DATA32(b1,3).r;
 n3=n0;
 n4=n1;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,1).r;
{ jamaica_ref m=jam_mtd_sun_java2d_pisces_Stroker_9_compuffset3;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,JAMAICA_BLOCK_GET_DATA32(b2,6).i,JAMAICA_BLOCK_GET_DATA32(b2,7).i,n3,n4,JAMAICA_BLOCK_GET_DATA32(b0,6).r);
}
 r2=JAMAICA_BLOCK_GET_DATA32(b0,6).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 n5=JAMAICA_BLOCK_GET_DATA32(r2,3).i;
 n6=((n5>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(0))>=((jamaica_uint32)(n6))) { goto LABEL_tAIOOBE; }
 n5=(n5&15);
 JAMAICA_GET_ARRAY32(r2,0,n7);
 n8=n7;
 if (((jamaica_uint32)(1))>=((jamaica_uint32)(n6))) { goto LABEL_tAIOOBE; }
 JAMAICA_GET_ARRAY32(r2,1,n5);
 n6=n5;
 if (((jamaica_int32)JAMAICA_BLOCK_GET_DATA32(b2,1).b[0])!=0) { goto l4; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r;
 b1=JAMAICA_BLOCK_GET_DATA32(b0,3).r;
{ jamaica_ref m=jam_mtd_sun_java2d_pisces_Stroker_9_emitMoveTo19;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b1,6).i,n8),JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b1,7).i,n6));
}
 JAMAICA_BLOCK_GET_DATA32(b1,4).i = n0;
 JAMAICA_BLOCK_GET_DATA32(b1,5).i = n1;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,2).r;
 JAMAICA_BLOCK_GET_DATA32(b0,0).i = n8;
 JAMAICA_BLOCK_GET_DATA32(b0,1).i = n6;
 JAMAICA_BLOCK_GET_DATA32(b1,1).b[0] = (jamaica_int8) 1;
 goto l11;
l4:
 b0=JAMAICA_BLOCK_GET_DATA32(b1,2).r;
 n9=JAMAICA_BLOCK_GET_DATA32(b0,4).i;
 n10=JAMAICA_BLOCK_GET_DATA32(b0,5).i;
 n11=JAMAICA_BLOCK_GET_DATA32(b2,6).i;
 n12=JAMAICA_BLOCK_GET_DATA32(b2,7).i;
{ jamaica_ref m=jam_mtd_sun_java2d_pisces_Stroker_9_isCCW5;
ct->calledMethod=m;
 n3=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,n9,n10,n11,n12,n3,n4);
}
 n4=n3;
 if (n2==0) { goto l9; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r1=r0;
 n3=JAMAICA_BLOCK_GET_DATA32(r1,5).i;
 if (n3!=0) { goto l7; }
 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r;
 b1=JAMAICA_BLOCK_GET_DATA32(b0,2).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,3).r;
{ jamaica_ref m=jam_mtd_sun_java2d_pisces_Stroker_9_drawMiter10;
ct->calledMethod=m;
 {jamaica_address o=JAMAICA_BLOCK_GET_P(m,4);
  if (o) {  ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32))o)(ct,r0,JAMAICA_BLOCK_GET_DATA32(b1,4).i,JAMAICA_BLOCK_GET_DATA32(b1,5).i,JAMAICA_BLOCK_GET_DATA32(b0,6).i,JAMAICA_BLOCK_GET_DATA32(b0,7).i,n0,n1,JAMAICA_BLOCK_GET_DATA32(b1,2).i,JAMAICA_BLOCK_GET_DATA32(b1,3).i,n8,n6,n4);
  } else {
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32,jamaica_int32))REV_STUB_RIIIIIIIIIIIV)(ct,r0,JAMAICA_BLOCK_GET_DATA32(b1,4).i,JAMAICA_BLOCK_GET_DATA32(b1,5).i,JAMAICA_BLOCK_GET_DATA32(b0,6).i,JAMAICA_BLOCK_GET_DATA32(b0,7).i,n0,n1,JAMAICA_BLOCK_GET_DATA32(b1,2).i,JAMAICA_BLOCK_GET_DATA32(b1,3).i,n8,n6,n4);
  }
 }
}
 goto l10;
l7:
 if (n3!=1) { goto l10; }
 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r1,7).r,0).r;
 b1=JAMAICA_BLOCK_GET_DATA32(b0,3).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,2).r;
 jam_comp_sun_java2d_pisces_Stroker_9_drawRdJoin8(ct,r1,JAMAICA_BLOCK_GET_DATA32(b1,6).i,JAMAICA_BLOCK_GET_DATA32(b1,7).i,JAMAICA_BLOCK_GET_DATA32(b0,2).i,JAMAICA_BLOCK_GET_DATA32(b0,3).i,n8,n6,0,0,n4,((jamaica_int64) 0x3e8LL));
 goto l10;
l9:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 jam_comp_sun_java2d_pisces_Stroker_9_drawRdJoin8(ct,r1,JAMAICA_BLOCK_GET_DATA32(b2,6).i,JAMAICA_BLOCK_GET_DATA32(b2,7).i,JAMAICA_BLOCK_GET_DATA32(b0,2).i,JAMAICA_BLOCK_GET_DATA32(b0,3).i,n7,n5,0,0,n3,((jamaica_int64) 0x3b9aca00LL));
l10:
 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r,3).r;
 jam_comp_sun_java2d_pisces_Stroker_9_emitLineTo21(ct,r0,JAMAICA_BLOCK_GET_DATA32(b0,6).i,JAMAICA_BLOCK_GET_DATA32(b0,7).i,(!(n4)));
l11:
 r1=r0;
 b0=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,3).r;
 n3=JAMAICA_BLOCK_GET_DATA32(b0,6).i;
 n4=n8;
 n3=JAMAICA_ADDS32(n3,n4);
 n4=JAMAICA_BLOCK_GET_DATA32(b0,7).i;
 n5=n6;
 n4=JAMAICA_ADDS32(n4,n5);
 r2=r1;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 n5=n3;
 n7=n4;
 n9=0;
 if (n9==0) { goto l13; }
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r2,7).r;
 b1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,0).r,3).r;
{ jamaica_ref m=jam_mtd_sun_java2d_pisces_Stroker_9_ensuracity4;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b1,0).i,2));
}
 r1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,1).r,7).r;
 n3=JAMAICA_BLOCK_GET_DATA32(b1,0).i;
 JAMAICA_BLOCK_GET_DATA32(b1,0).i = JAMAICA_ADDS32(n3,1);
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 n4=JAMAICA_BLOCK_GET_DATA32(r1,3).i;
 n9=((n4>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n3))>=((jamaica_uint32)(n9))) { goto LABEL_tAIOOBE; }
 n4=(n4&15);
 JAMAICA_SET_ARRAY32(r1,n3,n5);
 n3=JAMAICA_BLOCK_GET_DATA32(b1,0).i;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(b1,0).i = JAMAICA_ADDS32(n3,1);
 if (((jamaica_uint32)(n3))>=((jamaica_uint32)(n9))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r1,n3,n7);
 goto l14;
l13:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_java2d_pisces_Stroker_9_emitLineTo20;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,n3,n4);
}
l14:
 r1=r0;
 n3=n0;
 n4=n8;
 n3=JAMAICA_ADDS32(n3,n4);
 n4=n1;
 n5=n6;
 n4=JAMAICA_ADDS32(n4,n5);
 r2=r1;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 n5=n3;
 n7=n4;
 n9=0;
 if (n9==0) { goto l16; }
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r2,7).r;
 b1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,0).r,3).r;
{ jamaica_ref m=jam_mtd_sun_java2d_pisces_Stroker_9_ensuracity4;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b1,0).i,2));
}
 r1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,1).r,7).r;
 n3=JAMAICA_BLOCK_GET_DATA32(b1,0).i;
 JAMAICA_BLOCK_GET_DATA32(b1,0).i = JAMAICA_ADDS32(n3,1);
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 n4=JAMAICA_BLOCK_GET_DATA32(r1,3).i;
 n9=((n4>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n3))>=((jamaica_uint32)(n9))) { goto LABEL_tAIOOBE; }
 n4=(n4&15);
 JAMAICA_SET_ARRAY32(r1,n3,n5);
 n3=JAMAICA_BLOCK_GET_DATA32(b1,0).i;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(b1,0).i = JAMAICA_ADDS32(n3,1);
 if (((jamaica_uint32)(n3))>=((jamaica_uint32)(n9))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r1,n3,n7);
 goto l17;
l16:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_java2d_pisces_Stroker_9_emitLineTo20;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,n3,n4);
}
l17:
 r1=r0;
 b0=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,0).r;
 b0=JAMAICA_BLOCK_GET_DATA32(b0,3).r;
 n3=JAMAICA_BLOCK_GET_DATA32(b0,6).i;
 n4=n8;
 n3=JAMAICA_SUBS32(n3,n4);
 n4=JAMAICA_BLOCK_GET_DATA32(b0,7).i;
 n5=n6;
 n4=JAMAICA_SUBS32(n4,n5);
 r2=r1;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 n5=n3;
 n7=n4;
 n9=1;
 if (n9==0) { goto l19; }
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 b0=JAMAICA_BLOCK_GET_DATA32(r2,7).r;
 b1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,0).r,3).r;
{ jamaica_ref m=jam_mtd_sun_java2d_pisces_Stroker_9_ensuracity4;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b1,0).i,2));
}
 r1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,1).r,7).r;
 n3=JAMAICA_BLOCK_GET_DATA32(b1,0).i;
 JAMAICA_BLOCK_GET_DATA32(b1,0).i = JAMAICA_ADDS32(n3,1);
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 n4=JAMAICA_BLOCK_GET_DATA32(r1,3).i;
 n9=((n4>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n3))>=((jamaica_uint32)(n9))) { goto LABEL_tAIOOBE; }
 n4=(n4&15);
 JAMAICA_SET_ARRAY32(r1,n3,n5);
 n3=JAMAICA_BLOCK_GET_DATA32(b1,0).i;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(b1,0).i = JAMAICA_ADDS32(n3,1);
 if (((jamaica_uint32)(n3))>=((jamaica_uint32)(n9))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r1,n3,n7);
 goto l20;
l19:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_java2d_pisces_Stroker_9_emitLineTo20;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,n3,n4);
}
l20:
 jam_comp_sun_java2d_pisces_Stroker_9_emitLineTo21(ct,r0,JAMAICA_SUBS32(n0,n8),JAMAICA_SUBS32(n1,n6),1);
 b0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,0).r;
 b1=JAMAICA_BLOCK_GET_DATA32(b0,2).r;
 JAMAICA_BLOCK_GET_DATA32(b1,2).i = n8;
 JAMAICA_BLOCK_GET_DATA32(b1,3).i = n6;
 b2=JAMAICA_BLOCK_GET_DATA32(b0,3).r;
 JAMAICA_BLOCK_GET_DATA32(b1,4).i = JAMAICA_BLOCK_GET_DATA32(b2,6).i;
 JAMAICA_BLOCK_GET_DATA32(b1,5).i = JAMAICA_BLOCK_GET_DATA32(b2,7).i;
 JAMAICA_BLOCK_GET_DATA32(b2,6).i = n0;
 JAMAICA_BLOCK_GET_DATA32(b2,7).i = n1;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(b0,5).i = 1;
 ct->m.cli-=2;
 return;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT void JBICALL jam_comp_sun_java2d_pisces_Stroker_9_emitLineTo21(jamaica_thread *ct,jamaica_ref r0,jamaica_int32 n0,jamaica_int32 n1,jamaica_int32 n2) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r1=JAMAICA_NULL;
 jamaica_int32 n3=0,n4=0;
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
 if (n2==0) { goto l4; }
 b0=JAMAICA_BLOCK_GET_DATA32(r0,7).r;
 b1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,0).r,3).r;
{ jamaica_ref m=jam_mtd_sun_java2d_pisces_Stroker_9_ensuracity4;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,JAMAICA_ADDS32(JAMAICA_BLOCK_GET_DATA32(b1,0).i,2));
}
 r1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(b0,1).r,7).r;
 n2=JAMAICA_BLOCK_GET_DATA32(b1,0).i;
 JAMAICA_BLOCK_GET_DATA32(b1,0).i = JAMAICA_ADDS32(n2,1);
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 n3=JAMAICA_BLOCK_GET_DATA32(r1,3).i;
 n4=((n3>>4) &  ((jamaica_int32)268435455));
 if (((jamaica_uint32)(n2))>=((jamaica_uint32)(n4))) { goto LABEL_tAIOOBE; }
 n3=(n3&15);
 JAMAICA_SET_ARRAY32(r1,n2,n0);
 n2=JAMAICA_BLOCK_GET_DATA32(b1,0).i;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 JAMAICA_BLOCK_GET_DATA32(b1,0).i = JAMAICA_ADDS32(n2,1);
 if (((jamaica_uint32)(n2))>=((jamaica_uint32)(n4))) { goto LABEL_tAIOOBE; }
 JAMAICA_SET_ARRAY32(r1,n2,n1);
 goto l5;
l4:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_java2d_pisces_Stroker_9_emitLineTo20;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int32,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,n0,n1);
}
l5:
 ct->m.cli-=1;
 return;
LABEL_tAIOOBE: jamaica_throwArrIdxOutOfBndsExc(ct); return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
#else
#error 'jamaica.h' not found!
#endif

#ifdef __cplusplus
}
#endif

