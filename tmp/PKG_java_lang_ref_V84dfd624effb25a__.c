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


JBIEXPORT void JBICALL jam_comp_java_lang_ref_Finalrence_0__00030003e0(jamaica_thread *ct,jamaica_ref r0,jamaica_ref r1,jamaica_ref r2) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r3=JAMAICA_NULL;
 jamaica_int32 n0=0;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+4;
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

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 jamaicaScheduler_syncPointFull(ct);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
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
 r3=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(r0,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(r0,3).r=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(r0,3).r=new_ref;}
#endif

 r1=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (r2!=JAMAICA_NULL) { goto l4; }
 n0=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_ref_ReferQueue_9,5).i;
 if (((n0>>20) |  ((n0>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_ref_ReferQueue_9,-1);
 }
 r0=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_java_lang_ref_ReferQueue_9_NULL0,7).r,4).r;
 goto l5;
l4:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 r1=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 r0=r2;
l5:
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(r1,4).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(r1,4).r=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(r1,4).r=new_ref;}
#endif

 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 Jam_java_lang_ref_Reference_activate(ct,r3);
 ct->m.cli-=4;
 return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT jamaica_int32 JBICALL jam_comp_java_lang_ref_Finalizer_1_hasBelized1(jamaica_thread *ct,jamaica_ref r0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_int32 n0=0;
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
 if (JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,2).r!=r0) { goto l4; }
 n0=1;
 goto l5;
l4:
 n0=0;
l5:
 ct->m.cli-=1;
 return n0;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
}
JBIEXPORT void JBICALL jam_comp_java_lang_ref_Finalizer_1_add2(jamaica_thread *volatile ct,jamaica_ref volatile r0) {
 jamaica_int32 volatile tp;
 jamaica_native_longjump u;
 jamaica_GCEnv *volatile gc = ct->m.gcenv;
 jamaica_ref *volatile l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref volatile r2=JAMAICA_NULL,r3=JAMAICA_NULL;
 jamaica_int32 volatile n0=0;
 jamaica_ref volatile b0=JAMAICA_NULL;
 /* JAMAICA_C_STACK_OVERFLOW not needed for leaf methods */
 tp=ct->m.cli+6;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 if (JAMAICA_NATIVE_ON_LONGJUMP(u)) {
   jamaica_clearRefsOnExc(ct,tp);
    {
  switch(n0) {
  case 1:  goto l5;
  case 2:  goto l6;
  default: jamaica_propagate_exception(ct);
  }
  }
 }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=JAMAICA_LONG_JUMP_BUF_TO_INDEX(ct,&u);
 {jamaica_ref m=jam_mtd_java_lang_ref_Finalizer_1_add2;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r2=JAMAICA_NULL;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 n0=0;
 r2=jam_class_java_lang_ref_Final4LOCK_5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (jam_class_java_lang_ref_Final4LOCK_5==JAMAICA_NULL) { goto LABEL_tNPE; }
 {jamaica_uint32 mc=JAMAICA_BLOCK_GET_UI(jam_class_java_lang_ref_Final4LOCK_5,2);
  jamaica_uint32 id=(mc>>8)&255;
  jamaica_uint32 nc=(mc>>17)&255;
  jamaica_uint32 cl=(mc>>25);
  if ((cl == 0) && ((id == 0) || ((id==ct->id) && (nc > 0) && (nc != 255)))) {
   JAMAICA_BLOCK_GET_UI(jam_class_java_lang_ref_Final4LOCK_5,2) = (mc|(ct->id<<8))+131072;

  } else {
 jamaicaInterpreter_enterMonitor(ct,jam_class_java_lang_ref_Final4LOCK_5);
  }
 }
 n0=1;
 b0=JAMAICA_BLOCK_GET_DATA32(jam_fld_java_lang_ref_Finalizer_1_unfinlized1,7).r;
 r3=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 if (r3==JAMAICA_NULL) { goto l4; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,2).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,2).r=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,2).r=new_ref;}
#endif

 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r3,7).r,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r3,7).r,3).r=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r3,7).r,3).r=new_ref;}
#endif

l4:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_java_lang_ref_Finalizer_1_unfinlized1,7).r,4).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_java_lang_ref_Finalizer_1_unfinlized1,7).r,4).r=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_java_lang_ref_Finalizer_1_unfinlized1,7).r,4).r=new_ref;}
#endif

 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 {jamaica_uint32 mc=JAMAICA_BLOCK_GET_UI(r2,2);
  jamaica_uint32 id=(mc>>8)&255;
  jamaica_uint32 nc=(mc>>17)&255;
  jamaica_uint32 cl=(mc>>25);
  if ((id == ct->id) && (cl == 0)) {
   if (nc == 1) { JAMAICA_BLOCK_GET_UI(r2,2) = mc&255;
   } else       { JAMAICA_BLOCK_GET_UI(r2,2) = mc-131072;
   }
  } else {
   jamaicaInterpreter_exitMonitor(ct,r2);
  }
 }
 n0=0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-6;
 return;
l5:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r3=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 goto l7;
l6:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r3=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

l7:
 n0=2;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 {jamaica_uint32 mc=JAMAICA_BLOCK_GET_UI(r2,2);
  jamaica_uint32 id=(mc>>8)&255;
  jamaica_uint32 nc=(mc>>17)&255;
  jamaica_uint32 cl=(mc>>25);
  if ((id == ct->id) && (cl == 0)) {
   if (nc == 1) { JAMAICA_BLOCK_GET_UI(r2,2) = mc&255;
   } else       { JAMAICA_BLOCK_GET_UI(r2,2) = mc-131072;
   }
  } else {
   jamaicaInterpreter_exitMonitor(ct,r2);
  }
 }
 n0=0;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 jamaicaExceptions_throw(ct,r3);
return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT void JBICALL jam_comp_java_lang_ref_Finalizer_1_remove3(jamaica_thread *volatile ct,jamaica_ref volatile r0) {
 jamaica_int32 volatile tp;
 jamaica_native_longjump u;
 jamaica_GCEnv *volatile gc = ct->m.gcenv;
 jamaica_ref *volatile l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref volatile r2=JAMAICA_NULL,r3=JAMAICA_NULL,r4=JAMAICA_NULL;
 jamaica_int32 volatile n0=0;
 jamaica_ref volatile b0=JAMAICA_NULL,b1=JAMAICA_NULL;
 /* JAMAICA_C_STACK_OVERFLOW not needed for leaf methods */
 tp=ct->m.cli+6;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 if (JAMAICA_NATIVE_ON_LONGJUMP(u)) {
   jamaica_clearRefsOnExc(ct,tp);
    {
  switch(n0) {
  case 1:  goto l11;
  case 2:  goto l12;
  default: jamaica_propagate_exception(ct);
  }
  }
 }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=JAMAICA_LONG_JUMP_BUF_TO_INDEX(ct,&u);
 {jamaica_ref m=jam_mtd_java_lang_ref_Finalizer_1_remove3;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r2=JAMAICA_NULL;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 n0=0;
 r2=jam_class_java_lang_ref_Final4LOCK_5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (jam_class_java_lang_ref_Final4LOCK_5==JAMAICA_NULL) { goto LABEL_tNPE; }
 {jamaica_uint32 mc=JAMAICA_BLOCK_GET_UI(jam_class_java_lang_ref_Final4LOCK_5,2);
  jamaica_uint32 id=(mc>>8)&255;
  jamaica_uint32 nc=(mc>>17)&255;
  jamaica_uint32 cl=(mc>>25);
  if ((cl == 0) && ((id == 0) || ((id==ct->id) && (nc > 0) && (nc != 255)))) {
   JAMAICA_BLOCK_GET_UI(jam_class_java_lang_ref_Final4LOCK_5,2) = (mc|(ct->id<<8))+131072;

  } else {
 jamaicaInterpreter_enterMonitor(ct,jam_class_java_lang_ref_Final4LOCK_5);
  }
 }
 n0=1;
 b0=JAMAICA_BLOCK_GET_DATA32(jam_fld_java_lang_ref_Finalizer_1_unfinlized1,7).r;
 r3=r0;
 if (JAMAICA_BLOCK_GET_DATA32(b0,4).r!=r3) { goto l6; }
 b1=JAMAICA_BLOCK_GET_DATA32(r3,7).r;
 if (JAMAICA_BLOCK_GET_DATA32(b1,2).r==JAMAICA_NULL) { goto l5; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_java_lang_ref_Finalizer_1_unfinlized1,7).r,4).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_java_lang_ref_Finalizer_1_unfinlized1,7).r,4).r=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,2).r;}
#else
{jamaica_ref new_ref=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r0,7).r,2).r;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_java_lang_ref_Finalizer_1_unfinlized1,7).r,4).r=new_ref;}
#endif

 goto l6;
l5:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(b0,4).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(b0,4).r=JAMAICA_BLOCK_GET_DATA32(b1,3).r;}
#else
{jamaica_ref new_ref=JAMAICA_BLOCK_GET_DATA32(b1,3).r;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(b0,4).r=new_ref;}
#endif

l6:
 r3=r0;
 b0=JAMAICA_BLOCK_GET_DATA32(r3,7).r;
 r4=JAMAICA_BLOCK_GET_DATA32(b0,2).r;
 if (r4==JAMAICA_NULL) { goto l8; }
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r4,7).r,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r4,7).r,3).r=JAMAICA_BLOCK_GET_DATA32(b0,3).r;}
#else
{jamaica_ref new_ref=JAMAICA_BLOCK_GET_DATA32(b0,3).r;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r4,7).r,3).r=new_ref;}
#endif

l8:
 r3=r0;
 b0=JAMAICA_BLOCK_GET_DATA32(r3,7).r;
 r4=JAMAICA_BLOCK_GET_DATA32(b0,3).r;
 if (r4==JAMAICA_NULL) { goto l10; }
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r4,7).r,2).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r4,7).r,2).r=JAMAICA_BLOCK_GET_DATA32(b0,2).r;}
#else
{jamaica_ref new_ref=JAMAICA_BLOCK_GET_DATA32(b0,2).r;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(r4,7).r,2).r=new_ref;}
#endif

l10:
 b0=JAMAICA_BLOCK_GET_DATA32(r0,7).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(b0,2).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(b0,2).r=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(b0,2).r=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(b0,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(b0,3).r=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(b0,3).r=new_ref;}
#endif

 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 {jamaica_uint32 mc=JAMAICA_BLOCK_GET_UI(r2,2);
  jamaica_uint32 id=(mc>>8)&255;
  jamaica_uint32 nc=(mc>>17)&255;
  jamaica_uint32 cl=(mc>>25);
  if ((id == ct->id) && (cl == 0)) {
   if (nc == 1) { JAMAICA_BLOCK_GET_UI(r2,2) = mc&255;
   } else       { JAMAICA_BLOCK_GET_UI(r2,2) = mc-131072;
   }
  } else {
   jamaicaInterpreter_exitMonitor(ct,r2);
  }
 }
 n0=0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-6;
 return;
l11:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r0=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 goto l13;
l12:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r0=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

l13:
 n0=2;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 {jamaica_uint32 mc=JAMAICA_BLOCK_GET_UI(r2,2);
  jamaica_uint32 id=(mc>>8)&255;
  jamaica_uint32 nc=(mc>>17)&255;
  jamaica_uint32 cl=(mc>>25);
  if ((id == ct->id) && (cl == 0)) {
   if (nc == 1) { JAMAICA_BLOCK_GET_UI(r2,2) = mc&255;
   } else       { JAMAICA_BLOCK_GET_UI(r2,2) = mc-131072;
   }
  } else {
   jamaicaInterpreter_exitMonitor(ct,r2);
  }
 }
 n0=0;
 if (r0==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 jamaicaExceptions_throw(ct,r0);
return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT void JBICALL jam_comp_java_lang_ref_Finalizer_1__00030003e4(jamaica_thread *ct,jamaica_ref r0,jamaica_ref r1) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r4=JAMAICA_NULL,r2=JAMAICA_NULL,r3=JAMAICA_NULL;
 jamaica_int32 n0=0;
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

l2:
 r2=r0;
 b0=JAMAICA_BLOCK_GET_DATA32(jam_fld_java_lang_ref_Finalizer_1_queue0,7).r;
 r3=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 r4=r2;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(r2,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(r2,3).r=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(r2,3).r=new_ref;}
#endif

 r1=r2;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r3!=JAMAICA_NULL) { goto l4; }
 n0=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_ref_ReferQueue_9,5).i;
 if (((n0>>20) |  ((n0>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_ref_ReferQueue_9,-1);
 }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_java_lang_ref_ReferQueue_9_NULL0,7).r,4).r;
 goto l5;
l4:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r1=r2;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

l5:
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(r1,4).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(r1,4).r=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(r1,4).r=new_ref;}
#endif

 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 Jam_java_lang_ref_Reference_activate(ct,r4);
 b0=JAMAICA_BLOCK_GET_DATA32(r0,7).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(b0,2).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(b0,2).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(b0,2).r=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(b0,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(b0,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(b0,3).r=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 jam_comp_java_lang_ref_Finalizer_1_add2(ct,r0);
 ct->m.cli-=3;
 return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT void JBICALL jam_comp_java_lang_ref_Finalizer_1_register5(jamaica_thread *ct,jamaica_ref r0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r1=JAMAICA_NULL,r2=JAMAICA_NULL;
 jamaica_ref b0=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+2;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->m.cli = tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 r1=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_ref_Finalizer_1);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (r1==JAMAICA_NULL) { goto LABEL_tOOME; }
 r2=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_java_lang_ref_Finalizer_1_queue0,7).r,4).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 jam_comp_java_lang_ref_Reference_7__00030003e5(ct,r1,r0,r2);
 b0=JAMAICA_BLOCK_GET_DATA32(r1,7).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(b0,2).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(b0,2).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(b0,2).r=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(b0,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(b0,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(b0,3).r=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 jam_comp_java_lang_ref_Finalizer_1_add2(ct,r1);
 ct->m.cli-=2;
 return;
LABEL_tOOME:   jamaica_throwOutOfMemErr(ct);        return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT void JBICALL jam_comp_java_lang_ref_Finalizer_1_runFilizer6(jamaica_thread *volatile ct,jamaica_ref volatile r0) {
 jamaica_int32 volatile tp;
 jamaica_native_longjump u;
 jamaica_GCEnv *volatile gc = ct->m.gcenv;
 jamaica_ref *volatile l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref volatile r2=JAMAICA_NULL,r3=JAMAICA_NULL,r4=JAMAICA_NULL;
 jamaica_int32 volatile n0=0,n1=0,n2=0;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+7;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 if (JAMAICA_NATIVE_ON_LONGJUMP(u)) {
   jamaica_clearRefsOnExc(ct,tp);
    {
  jamaica_ref ec=JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(ct->cT,3),1);
  switch(n0) {
  case 1:  goto l5;
  case 2:  goto l6;
  case 3:  goto l7;
  case 4: if (jamaicaClasses_compatibleClass(ct,ec,jam_class_java_lang_Throwable_178)) { goto l12; } /* fall through */
  default: jamaica_propagate_exception(ct);
  }
  }
 }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=JAMAICA_LONG_JUMP_BUF_TO_INDEX(ct,&u);
 {jamaica_ref m=jam_mtd_java_lang_ref_Finalizer_1_runFilizer6;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 r2=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 n0=0;
 r3=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r2=r3;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 {jamaica_uint32 mc=JAMAICA_BLOCK_GET_UI(r3,2);
  jamaica_uint32 id=(mc>>8)&255;
  jamaica_uint32 nc=(mc>>17)&255;
  jamaica_uint32 cl=(mc>>25);
  if ((cl == 0) && ((id == 0) || ((id==ct->id) && (nc > 0) && (nc != 255)))) {
   JAMAICA_BLOCK_GET_UI(r3,2) = (mc|(ct->id<<8))+131072;

  } else {
 jamaicaInterpreter_enterMonitor(ct,r3);
  }
 }
 n0=1;
 n1=jam_comp_java_lang_ref_Finalizer_1_hasBelized1(ct,r3);
 if (n1==0) { goto l4; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 {jamaica_uint32 mc=JAMAICA_BLOCK_GET_UI(r2,2);
  jamaica_uint32 id=(mc>>8)&255;
  jamaica_uint32 nc=(mc>>17)&255;
  jamaica_uint32 cl=(mc>>25);
  if ((id == ct->id) && (cl == 0)) {
   if (nc == 1) { JAMAICA_BLOCK_GET_UI(r2,2) = mc&255;
   } else       { JAMAICA_BLOCK_GET_UI(r2,2) = mc-131072;
   }
  } else {
   jamaicaInterpreter_exitMonitor(ct,r2);
  }
 }
 n0=0;
 
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

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-7;
 return;
l4:
 n0=2;
 jam_comp_java_lang_ref_Finalizer_1_remove3(ct,r3);
 {jamaica_uint32 mc=JAMAICA_BLOCK_GET_UI(r3,2);
  jamaica_uint32 id=(mc>>8)&255;
  jamaica_uint32 nc=(mc>>17)&255;
  jamaica_uint32 cl=(mc>>25);
  if ((id == ct->id) && (cl == 0)) {
   if (nc == 1) { JAMAICA_BLOCK_GET_UI(r3,2) = mc&255;
   } else       { JAMAICA_BLOCK_GET_UI(r3,2) = mc-131072;
   }
  } else {
   jamaicaInterpreter_exitMonitor(ct,r3);
  }
 }
 n0=0;
 n0=4;
 r4=JAMAICA_BLOCK_GET_R(r3,1);
 r4=JAMAICA_BLOCK_GET_DATA32(r4,3).r;
 n1=JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_lang_ref_Reference_7_get2,1).i;
 n1=((n1>>20) &  ((jamaica_int32)4095));
 n2=JAMAICA_BLOCK_GET_DATA32(r4,3).i;
 n2=(n2&15);
 JAMAICA_GET_REF_ARRAY(r4,n1,r4);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r4;
ct->calledMethod=m;
 r3=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r3);
}
 r2=r3;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 if (r3==JAMAICA_NULL) { goto l11; } else { goto l9; }
l5:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r3=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 goto l8;
l6:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r3=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 goto l8;
l7:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r3=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

l8:
 n0=3;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 {jamaica_uint32 mc=JAMAICA_BLOCK_GET_UI(r2,2);
  jamaica_uint32 id=(mc>>8)&255;
  jamaica_uint32 nc=(mc>>17)&255;
  jamaica_uint32 cl=(mc>>25);
  if ((id == ct->id) && (cl == 0)) {
   if (nc == 1) { JAMAICA_BLOCK_GET_UI(r2,2) = mc&255;
   } else       { JAMAICA_BLOCK_GET_UI(r2,2) = mc-131072;
   }
  } else {
   jamaicaInterpreter_exitMonitor(ct,r2);
  }
 }
 n0=0;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 jamaicaExceptions_throw(ct,r3);
l9:
 if (((r3!=JAMAICA_NULL) && ((JAMAICA_BLOCK_GET_R(r3,1) == jam_class_java_lang_Enum_53)?TRUE:(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r3,1),4) == JAMAICA_NULL)?FALSE:(jam_class_java_lang_Enum_53 == JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r3,1),4),2))))!=0) { goto l11; }
 Jam_java_lang_ref_Finalizer_invokeFinalizeMethod(ct,r3);
 r2=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

l11:
 n0=0;
 goto l13;
l12:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r3=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 n0=0;
 r2=r3;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

l13:
 jam_comp_java_lang_ref_Reference_7_clear3(ct,r0);
 
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

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-7;
 return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT void JBICALL jam_comp_java_lang_ref_Finalhread_4_run1(jamaica_thread *volatile ct,jamaica_ref volatile r0) {
 jamaica_int32 volatile tp;
 jamaica_native_longjump u;
 jamaica_ref volatile r2=JAMAICA_NULL,r3=JAMAICA_NULL;
 jamaica_int32 volatile n0=0,n1=0,n2=0;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+4;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 if (JAMAICA_NATIVE_ON_LONGJUMP(u)) {
   jamaica_clearRefsOnExc(ct,tp);
    while (1) {
  jamaica_ref ec=JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(ct->cT,3),1);
  switch(n0) {
  case 1: if (jamaicaClasses_compatibleClass(ct,ec,jam_class_java_lang_Interption_74)) { goto l6; } else { n0=0; break; }
  case 2: if (jamaicaClasses_compatibleClass(ct,ec,jam_class_java_lang_Interption_74)) { goto l10; } /* fall through */
  default: jamaica_propagate_exception(ct);
  }
  jamaicaScheduler_syncPoint(ct);
  }
 }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=JAMAICA_LONG_JUMP_BUF_TO_INDEX(ct,&u);
 {jamaica_ref m=jam_mtd_java_lang_ref_Finalhread_4_run1;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 n0=0;
 n1=JAMAICA_BLOCK_GET_DATA32(jam_class_com_aicas_jamaica_lang_Scheduler_35,5).i;
 if (((n1>>20) |  ((n1>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_com_aicas_jamaica_lang_Scheduler_35,-1);
 }
{ jamaica_ref m=jam_mtd_com_aicas_jamaica_lang_Scheduler_35_microority8;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,1);
}
l3:
 n1=JAMAICA_BLOCK_GET_DATA32(jam_class_sun_misc_VM_99,5).i;
 if (((n1>>20) |  ((n1>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_sun_misc_VM_99,-1);
 }
{ jamaica_ref m=jam_mtd_sun_misc_VM_99_isBooted1;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *))JAMAICA_BLOCK_GET_P(m,4))(ct);
}
 if (n1!=0) { goto l8; }
 n0=1;
 n1=JAMAICA_BLOCK_GET_DATA32(jam_class_sun_misc_VM_99,5).i;
{ jamaica_ref m=jam_mtd_sun_misc_VM_99_awaitooted2;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *))JAMAICA_BLOCK_GET_P(m,4))(ct);
}
 n0=0;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l3; }
 jamaicaScheduler_syncPointFull(ct);
 goto l3;
l6:
 r2=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 n0=0;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l3; }
 jamaicaScheduler_syncPointFull(ct);
 goto l3;
l8:
 n0=2;
 n1=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_ref_Finalizer_1,5).i;
 if (((n1>>20) |  ((n1>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_ref_Finalizer_1,-1);
 }
{ jamaica_ref m=jam_mtd_java_lang_ref_Finalizer_1_acces240009;
ct->calledMethod=m;
 r2=((jamaica_ref(JBICALL *)(jamaica_thread *))JAMAICA_BLOCK_GET_P(m,4))(ct);
}
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_lang_ref_ReferQueue_9_remove4,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n1,r3);
{ jamaica_ref m=r3;
ct->calledMethod=m;
 r2=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
 if ((r2!=JAMAICA_NULL) && (((r2!=JAMAICA_NULL) && ((JAMAICA_BLOCK_GET_R(r2,1) == jam_class_java_lang_ref_Finalizer_1)?TRUE:((JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r2,1),4) == JAMAICA_NULL) || (JAMAICA_BLOCK_GET_I(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r2,1),4),1)<=2))?FALSE:(jam_class_java_lang_ref_Finalizer_1 == JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r2,1),4),4))))==0)) { goto LABEL_tCCE; }
 n1=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_ref_Finalizer_1,5).i;
{ jamaica_ref m=jam_mtd_java_lang_ref_Finalizer_1_acces2410010;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
 n0=0;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l8; }
 jamaicaScheduler_syncPointFull(ct);
 goto l8;
l10:
 r2=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 n0=0;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l8; }
 jamaicaScheduler_syncPointFull(ct);
 goto l8;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
LABEL_tCCE:    jamaica_throwClassCastExc(ct);       return;
}
JBIEXPORT void JBICALL jam_comp_java_lang_ref_Reference_7_clear3(jamaica_thread *ct,jamaica_ref r0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
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
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(r0,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(r0,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(r0,3).r=JAMAICA_NULL;}
#endif

 ct->m.cli-=1;
 return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT void JBICALL jam_comp_java_lang_ref_Reference_7__00030003e5(jamaica_thread *ct,jamaica_ref r0,jamaica_ref r1,jamaica_ref r2) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r3=JAMAICA_NULL;
 jamaica_int32 n0=0;
 /* JAMAICA_C_STACK_OVERFLOW not needed for leaf methods */
 tp=ct->m.cli+3;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->m.cli = tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 
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

l2:
 r3=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(r3,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(r3,3).r=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(r3,3).r=new_ref;}
#endif

 r1=r3;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r2!=JAMAICA_NULL) { goto l4; }
 n0=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_ref_ReferQueue_9,5).i;
 if (((n0>>20) |  ((n0>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_ref_ReferQueue_9,-1);
 }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_java_lang_ref_ReferQueue_9_NULL0,7).r,4).r;
 goto l5;
l4:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r1=r3;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r3=r2;
l5:
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(r1,4).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(r1,4).r=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(r1,4).r=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 Jam_java_lang_ref_Reference_activate(ct,r0);
 ct->m.cli-=3;
 return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT void JBICALL jam_comp_java_lang_ref_Referndler_8_run1(jamaica_thread *volatile ct,jamaica_ref volatile r0) {
 jamaica_int32 volatile tp;
 jamaica_native_longjump u;
 jamaica_GCEnv *volatile gc = ct->m.gcenv;
 jamaica_ref *volatile l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref volatile r3=JAMAICA_NULL,r4=JAMAICA_NULL,r2=JAMAICA_NULL,r5=JAMAICA_NULL;
 jamaica_int32 volatile n0=0,n1=0,n2=0;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+8;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 if (JAMAICA_NATIVE_ON_LONGJUMP(u)) {
   jamaica_clearRefsOnExc(ct,tp);
    {
  switch(n0) {
  case 1:  goto l4;
  case 2:  goto l5;
  default: jamaica_propagate_exception(ct);
  }
  }
 }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=JAMAICA_LONG_JUMP_BUF_TO_INDEX(ct,&u);
 {jamaica_ref m=jam_mtd_java_lang_ref_Referndler_8_run1;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 r2=JAMAICA_NULL;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 n0=0;
 n1=JAMAICA_BLOCK_GET_DATA32(jam_class_com_aicas_jamaica_lang_Scheduler_35,5).i;
 if (((n1>>20) |  ((n1>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_com_aicas_jamaica_lang_Scheduler_35,-1);
 }
{ jamaica_ref m=jam_mtd_com_aicas_jamaica_lang_Scheduler_35_microority8;
ct->calledMethod=m;
 n1=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,1);
}
l3:
 n1=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_ref_Reference_7,5).i;
 if (((n1>>20) |  ((n1>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_ref_Reference_7,-1);
 }
{ jamaica_ref m=jam_mtd_java_lang_ref_Reference_7_acces240006;
ct->calledMethod=m;
 r3=((jamaica_ref(JBICALL *)(jamaica_thread *))JAMAICA_BLOCK_GET_P(m,4))(ct);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 r4=r3;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 n1=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_ref_ReferQueue_9,5).i;
 if (((n1>>20) |  ((n1>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_ref_ReferQueue_9,-1);
 }
 r5=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_java_lang_ref_ReferQueue_9_lock2,7).r,4).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 r2=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 if (r5==JAMAICA_NULL) { goto LABEL_tNPE; }
 {jamaica_uint32 mc=JAMAICA_BLOCK_GET_UI(r5,2);
  jamaica_uint32 id=(mc>>8)&255;
  jamaica_uint32 nc=(mc>>17)&255;
  jamaica_uint32 cl=(mc>>25);
  if ((cl == 0) && ((id == 0) || ((id==ct->id) && (nc > 0) && (nc != 255)))) {
   JAMAICA_BLOCK_GET_UI(r5,2) = (mc|(ct->id<<8))+131072;

  } else {
 jamaicaInterpreter_enterMonitor(ct,r5);
  }
 }
 n0=1;
 n1=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_ref_ReferQueue_9,5).i;
{ jamaica_ref m=jam_mtd_java_lang_Object_92_notifyAll4;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r5);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 {jamaica_uint32 mc=JAMAICA_BLOCK_GET_UI(r5,2);
  jamaica_uint32 id=(mc>>8)&255;
  jamaica_uint32 nc=(mc>>17)&255;
  jamaica_uint32 cl=(mc>>25);
  if ((id == ct->id) && (cl == 0)) {
   if (nc == 1) { JAMAICA_BLOCK_GET_UI(r5,2) = mc&255;
   } else       { JAMAICA_BLOCK_GET_UI(r5,2) = mc-131072;
   }
  } else {
   jamaicaInterpreter_exitMonitor(ct,r5);
  }
 }
 n0=0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 if (((r3!=JAMAICA_NULL) && ((JAMAICA_BLOCK_GET_R(r3,1) == jam_class_sun_misc_Cleaner_7)?TRUE:((JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r3,1),4) == JAMAICA_NULL) || (JAMAICA_BLOCK_GET_I(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r3,1),4),1)<=2))?FALSE:(jam_class_sun_misc_Cleaner_7 == JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r3,1),4),4))))==0) { goto l9; } else { goto l7; }
l4:
 
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

 r3=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 goto l6;
l5:
 
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

 r3=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

l6:
 n0=2;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 {jamaica_uint32 mc=JAMAICA_BLOCK_GET_UI(r2,2);
  jamaica_uint32 id=(mc>>8)&255;
  jamaica_uint32 nc=(mc>>17)&255;
  jamaica_uint32 cl=(mc>>25);
  if ((id == ct->id) && (cl == 0)) {
   if (nc == 1) { JAMAICA_BLOCK_GET_UI(r2,2) = mc&255;
   } else       { JAMAICA_BLOCK_GET_UI(r2,2) = mc-131072;
   }
  } else {
   jamaicaInterpreter_exitMonitor(ct,r2);
  }
 }
 n0=0;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 jamaicaExceptions_throw(ct,r3);
l7:
 if ((r4!=JAMAICA_NULL) && (((r4!=JAMAICA_NULL) && ((JAMAICA_BLOCK_GET_R(r4,1) == jam_class_sun_misc_Cleaner_7)?TRUE:((JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r4,1),4) == JAMAICA_NULL) || (JAMAICA_BLOCK_GET_I(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r4,1),4),1)<=2))?FALSE:(jam_class_sun_misc_Cleaner_7 == JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r4,1),4),4))))==0)) { goto LABEL_tCCE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 r3=r4;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 r4=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r3,1),3).r;
 n1=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_sun_misc_Cleaner_7_clean4,1).i>>20) &  ((jamaica_int32)4095));
 n2=(JAMAICA_BLOCK_GET_DATA32(r4,3).i&15);
 JAMAICA_GET_REF_ARRAY(r4,n1,r4);
{ jamaica_ref m=r4;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r3);
}
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l3; }
 jamaicaScheduler_syncPointFull(ct);
 goto l3;
l9:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l11; }
 jamaicaScheduler_syncPointFull(ct);
l11:
 if (r3==JAMAICA_NULL) { goto l3; }
 r3=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_InterError_73);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (r3==JAMAICA_NULL) { goto LABEL_tOOME; }
{ jamaica_ref m=jam_mtd_java_lang_InterError_73__00030003e1;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,jam_str_java_lang_ref_Referndler_89);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 jamaicaExceptions_throw(ct,r3);
return;
LABEL_tOOME:   jamaica_throwOutOfMemErr(ct);        return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
LABEL_tCCE:    jamaica_throwClassCastExc(ct);       return;
}
JBIEXPORT jamaica_ref JBICALL jam_comp_java_lang_ref_ReferQueue_9_reallyPoll1(jamaica_thread *ct,jamaica_ref r0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r1=JAMAICA_NULL,r2=JAMAICA_NULL,r3=JAMAICA_NULL,r4=JAMAICA_NULL,r5=JAMAICA_NULL;
 jamaica_int32 n0=0;
 jamaica_int64 j0=JAMAICA_INT64_CONST_0;
 jamaica_ref b0=JAMAICA_NULL,b1=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+5;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->m.cli = tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 n0=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_ref_Refer24CAS_11,5).i;
 if (((n0>>20) |  ((n0>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_ref_Refer24CAS_11,-1);
 }
 r1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_java_lang_ref_Refer24CAS_11_unsafe0,7).r,4).r;
 r1=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 r3=r0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 b0=JAMAICA_BLOCK_GET_DATA32(jam_fld_java_lang_ref_Refer24CAS_11_unsafe0,7).r;
 b1=JAMAICA_BLOCK_GET_DATA32(jam_fld_java_lang_ref_ReferQueue_9_NULL0,7).r;
l3:
 r4=r2;
 if (r4==JAMAICA_NULL) { goto l11; }
 if (r1!=JAMAICA_NULL) { goto l11; }
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 r5=JAMAICA_BLOCK_GET_DATA32(r4,5).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

 if (r5!=r4) { goto l7; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

 r5=JAMAICA_NULL;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=r5;}
#else
{jamaica_ref new_ref=r5;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[4]=new_ref;}
#endif

l7:
 n0=JAMAICA_BLOCK_GET_DATA32(jam_class_java_lang_ref_Refer24CAS_11,5).i;
 if (((n0>>20) |  ((n0>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_java_lang_ref_Refer24CAS_11,-1);
 }
 r4=JAMAICA_BLOCK_GET_DATA32(b0,4).r;
 j0=JAMAICA_BLOCK_GET_DATA64(jam_fld_java_lang_ref_Refer24CAS_11_headOffset1,4).l;
 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[4];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[4]=JAMAICA_NULL;}
#else
{l[4]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_sun_misc_Unsafe_98_compabject70;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_int64,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r4,r3,j0,r2,r5);
}
 if (n0==0) { goto l9; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 r1=JAMAICA_BLOCK_GET_DATA32(b1,4).r;
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(r2,4).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(r2,4).r=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(r2,4).r=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(r2,5).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(r2,5).r=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}JAMAICA_BLOCK_GET_DATA32(r2,5).r=new_ref;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 r1=r2;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

l9:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 r2=JAMAICA_BLOCK_GET_DATA32(r0,3).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l3; }
 jamaicaScheduler_syncPointFull(ct);
 goto l3;
l11:
 
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

 if (((r1!=JAMAICA_NULL) && ((JAMAICA_BLOCK_GET_R(r1,1) == jam_class_java_lang_ref_Finalrence_0)?TRUE:((JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r1,1),4) == JAMAICA_NULL) || (JAMAICA_BLOCK_GET_I(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r1,1),4),1)<=1))?FALSE:(jam_class_java_lang_ref_Finalrence_0 == JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(JAMAICA_BLOCK_GET_R(r1,1),4),3))))==0) { goto l13; }
 n0=JAMAICA_BLOCK_GET_DATA32(jam_class_sun_misc_VM_99,5).i;
 if (((n0>>20) |  ((n0>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_sun_misc_VM_99,-1);
 }
{ jamaica_ref m=jam_mtd_sun_misc_VM_99_addFiCount4;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,(-1));
}
l13:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->m.cli-=5;
 return r1;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return JAMAICA_NULL;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return JAMAICA_NULL;
}
JBIEXPORT jamaica_ref JBICALL jam_comp_java_lang_ref_ReferQueue_9_poll2(jamaica_thread *ct,jamaica_ref r0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
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
 r0=jam_comp_java_lang_ref_ReferQueue_9_reallyPoll1(ct,r0);
 ct->m.cli-=1;
 return r0;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return JAMAICA_NULL;
}
JBIEXPORT jamaica_ref JBICALL jam_comp_java_lang_ref_ReferQueue_9_remove3(jamaica_thread *volatile ct,jamaica_ref volatile r0,jamaica_int64 volatile j0) {
 jamaica_int32 volatile tp;
 jamaica_native_longjump u;
 jamaica_GCEnv *volatile gc = ct->m.gcenv;
 jamaica_ref *volatile l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref volatile r3=JAMAICA_NULL,r1=JAMAICA_NULL,r5=JAMAICA_NULL,r4=JAMAICA_NULL;
 jamaica_int32 volatile n1=0,n0=0;
 jamaica_ref volatile b1=JAMAICA_NULL;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+8;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 if (JAMAICA_NATIVE_ON_LONGJUMP(u)) {
   jamaica_clearRefsOnExc(ct,tp);
    {
  switch(n1) {
  case 1:  goto l18;
  case 2:  goto l19;
  case 3:  goto l20;
  case 4:  goto l21;
  default: jamaica_propagate_exception(ct);
  }
  }
 }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=JAMAICA_LONG_JUMP_BUF_TO_INDEX(ct,&u);
 {jamaica_ref m=jam_mtd_java_lang_ref_ReferQueue_9_remove3;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 r1=JAMAICA_NULL;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 n1=0;
 if ((JAMAICA_GT_S64(j0,JAMAICA_INT64_CONST_0) ?+1:(JAMAICA_EQ_S64(j0,JAMAICA_INT64_CONST_0)?0:-1))>=0) { goto l4; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 r3=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Illegption_62);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (r3==JAMAICA_NULL) { goto LABEL_tOOME; }
{ jamaica_ref m=jam_mtd_java_lang_Illegption_62__00030003e1;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,jam_str_java_lang_ref_ReferQueue_914);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 jamaicaExceptions_throw(ct,r3);
l4:
 b1=JAMAICA_BLOCK_GET_DATA32(jam_fld_java_lang_ref_ReferQueue_9_lock2,7).r;
 r3=JAMAICA_BLOCK_GET_DATA32(b1,4).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 r1=r3;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 {jamaica_uint32 mc=JAMAICA_BLOCK_GET_UI(r3,2);
  jamaica_uint32 id=(mc>>8)&255;
  jamaica_uint32 nc=(mc>>17)&255;
  jamaica_uint32 cl=(mc>>25);
  if ((cl == 0) && ((id == 0) || ((id==ct->id) && (nc > 0) && (nc != 255)))) {
   JAMAICA_BLOCK_GET_UI(r3,2) = (mc|(ct->id<<8))+131072;

  } else {
 jamaicaInterpreter_enterMonitor(ct,r3);
  }
 }
 n1=1;
 r4=r0;
 r4=jam_comp_java_lang_ref_ReferQueue_9_reallyPoll1(ct,r4);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 if (r4==JAMAICA_NULL) { goto l6; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 {jamaica_uint32 mc=JAMAICA_BLOCK_GET_UI(r3,2);
  jamaica_uint32 id=(mc>>8)&255;
  jamaica_uint32 nc=(mc>>17)&255;
  jamaica_uint32 cl=(mc>>25);
  if ((id == ct->id) && (cl == 0)) {
   if (nc == 1) { JAMAICA_BLOCK_GET_UI(r3,2) = mc&255;
   } else       { JAMAICA_BLOCK_GET_UI(r3,2) = mc-131072;
   }
  } else {
   jamaicaInterpreter_exitMonitor(ct,r3);
  }
 }
 n1=0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-8;
 return r4;
l6:
 
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

 b1=JAMAICA_BLOCK_GET_DATA32(jam_fld_java_lang_ref_ReferQueue_9_lock2,7).r;
 r4=r1;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 n0=(JAMAICA_GT_S64(j0,JAMAICA_INT64_CONST_0) ?+1:(JAMAICA_EQ_S64(j0,JAMAICA_INT64_CONST_0)?0:-1));
 if (r4==JAMAICA_NULL) { goto l12; }
l7:
 n1=2;
 r3=JAMAICA_BLOCK_GET_DATA32(b1,4).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_java_lang_Object_92_wait9;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int64))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,j0);
}
 r5=jam_comp_java_lang_ref_ReferQueue_9_reallyPoll1(ct,r0);
 r3=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (r5==JAMAICA_NULL) { goto l9; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 {jamaica_uint32 mc=JAMAICA_BLOCK_GET_UI(r4,2);
  jamaica_uint32 id=(mc>>8)&255;
  jamaica_uint32 nc=(mc>>17)&255;
  jamaica_uint32 cl=(mc>>25);
  if ((id == ct->id) && (cl == 0)) {
   if (nc == 1) { JAMAICA_BLOCK_GET_UI(r4,2) = mc&255;
   } else       { JAMAICA_BLOCK_GET_UI(r4,2) = mc-131072;
   }
  } else {
   jamaicaInterpreter_exitMonitor(ct,r4);
  }
 }
 n1=0;
 
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

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-8;
 return r3;
l9:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 n1=3;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l11; }
 jamaicaScheduler_syncPointFull(ct);
l11:
 if (n0==0) { goto l7; } else { goto l17; }
l12:
 n1=2;
 r3=JAMAICA_BLOCK_GET_DATA32(b1,4).r;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_java_lang_Object_92_wait9;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int64))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,j0);
}
 r5=jam_comp_java_lang_ref_ReferQueue_9_reallyPoll1(ct,r0);
 r3=r5;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (r5==JAMAICA_NULL) { goto l14; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 if (r4==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

 {jamaica_uint32 mc=JAMAICA_BLOCK_GET_UI(r4,2);
  jamaica_uint32 id=(mc>>8)&255;
  jamaica_uint32 nc=(mc>>17)&255;
  jamaica_uint32 cl=(mc>>25);
  if ((id == ct->id) && (cl == 0)) {
   if (nc == 1) { JAMAICA_BLOCK_GET_UI(r4,2) = mc&255;
   } else       { JAMAICA_BLOCK_GET_UI(r4,2) = mc-131072;
   }
  } else {
   jamaicaInterpreter_exitMonitor(ct,r4);
  }
 }
 n1=0;
 
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

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-8;
 return r3;
l14:
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 n1=3;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l16; }
 jamaicaScheduler_syncPointFull(ct);
l16:
 if (n0==0) { goto l12; }
l17:
 
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

 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 {jamaica_uint32 mc=JAMAICA_BLOCK_GET_UI(r1,2);
  jamaica_uint32 id=(mc>>8)&255;
  jamaica_uint32 nc=(mc>>17)&255;
  jamaica_uint32 cl=(mc>>25);
  if ((id == ct->id) && (cl == 0)) {
   if (nc == 1) { JAMAICA_BLOCK_GET_UI(r1,2) = mc&255;
   } else       { JAMAICA_BLOCK_GET_UI(r1,2) = mc-131072;
   }
  } else {
   jamaicaInterpreter_exitMonitor(ct,r1);
  }
 }
 n1=0;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-8;
 return JAMAICA_NULL;
l18:
 
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
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 r3=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 goto l22;
l19:
 
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
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 r3=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 goto l22;
l20:
 
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
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 r3=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 goto l22;
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
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 r3=JAMAICA_BLOCK_GET_R(ct->cT,3);

#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r;if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#else
{JAMAICA_BLOCK_GET_DATA32(ct->cT,3).r=JAMAICA_NULL;}
#endif
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

l22:
 n1=4;
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 {jamaica_uint32 mc=JAMAICA_BLOCK_GET_UI(r1,2);
  jamaica_uint32 id=(mc>>8)&255;
  jamaica_uint32 nc=(mc>>17)&255;
  jamaica_uint32 cl=(mc>>25);
  if ((id == ct->id) && (cl == 0)) {
   if (nc == 1) { JAMAICA_BLOCK_GET_UI(r1,2) = mc&255;
   } else       { JAMAICA_BLOCK_GET_UI(r1,2) = mc-131072;
   }
  } else {
   jamaicaInterpreter_exitMonitor(ct,r1);
  }
 }
 n1=0;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 jamaicaExceptions_throw(ct,r3);
return JAMAICA_NULL;
LABEL_tOOME:   jamaica_throwOutOfMemErr(ct);        return JAMAICA_NULL;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return JAMAICA_NULL;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return JAMAICA_NULL;
}
JBIEXPORT jamaica_ref JBICALL jam_comp_java_lang_ref_ReferQueue_9_remove4(jamaica_thread *ct,jamaica_ref r0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r1=JAMAICA_NULL;
 jamaica_int32 n0=0,n1=0;
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
 r1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r0,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_lang_ref_ReferQueue_9_remove3,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r1,3).i&15);
 JAMAICA_GET_REF_ARRAY(r1,n0,r1);
{ jamaica_ref m=r1;
ct->calledMethod=m;
 r0=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int64))JAMAICA_BLOCK_GET_P(m,4))(ct,r0,JAMAICA_INT64_CONST_0);
}
 ct->m.cli-=1;
 return r0;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return JAMAICA_NULL;
}
JBIEXPORT jamaica_int32 JBICALL jam_comp_java_lang_ref_Refer24CAS_11_head0(jamaica_thread *ct,jamaica_ref r0,jamaica_ref r1,jamaica_ref r2) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r3=JAMAICA_NULL;
 jamaica_int32 n0=0;
 jamaica_int64 j0=JAMAICA_INT64_CONST_0;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
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
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_java_lang_ref_Refer24CAS_11_unsafe0,7).r,4).r;
 j0=JAMAICA_BLOCK_GET_DATA64(jam_fld_java_lang_ref_Refer24CAS_11_headOffset1,4).l;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_misc_Unsafe_98_compabject70;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_int64,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,r0,j0,r1,r2);
}
 ct->m.cli-=3;
 return n0;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return 0;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
}
JBIEXPORT jamaica_int32 JBICALL jam_comp_java_lang_ref_Refer24CAS_11_acces242001(jamaica_thread *ct,jamaica_ref r0,jamaica_ref r1,jamaica_ref r2) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r3=JAMAICA_NULL;
 jamaica_int32 n0=0;
 jamaica_int64 j0=JAMAICA_INT64_CONST_0;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
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
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_java_lang_ref_Refer24CAS_11_unsafe0,7).r,4).r;
 j0=JAMAICA_BLOCK_GET_DATA64(jam_fld_java_lang_ref_Refer24CAS_11_headOffset1,4).l;
 if (r3==JAMAICA_NULL) { goto LABEL_tNPE; }
{ jamaica_ref m=jam_mtd_sun_misc_Unsafe_98_compabject70;
ct->calledMethod=m;
 n0=((jamaica_int32(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref,jamaica_int64,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,r0,j0,r1,r2);
}
 ct->m.cli-=3;
 return n0;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return 0;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
}
JBIEXPORT jamaica_ref JBICALL jam_comp_java_lang_ref_Refer24CAS_11_acces243002(jamaica_thread *ct) {
 jamaica_int32 tp;
 /* JAMAICA_C_STACK_OVERFLOW not needed for leaf methods */
 tp=ct->m.cli+0;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 return JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_java_lang_ref_Refer24CAS_11_unsafe0,7).r,4).r;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return JAMAICA_NULL;
}
#else
#error 'jamaica.h' not found!
#endif

#ifdef __cplusplus
}
#endif

