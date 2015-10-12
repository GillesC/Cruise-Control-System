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


JBIEXPORT void JBICALL jam_comp_control_Contrystem_0__00030003e0(jamaica_thread *ct,jamaica_ref r0) {
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
 JAMAICA_BLOCK_GET_DATA64(r0,4).d = ((jamaica_double) 100.0);
 ct->m.cli-=1;
 return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT void JBICALL jam_comp_control_Contrystem_0_activate1(jamaica_thread *ct,jamaica_ref r0) {
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
JBIEXPORT void JBICALL jam_comp_control_Contrystem_0_deactivate2(jamaica_thread *ct,jamaica_ref r0) {
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
JBIEXPORT void JBICALL jam_comp_control_Contrystem_0_accelerate3(jamaica_thread *ct,jamaica_ref r0) {
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
JBIEXPORT void JBICALL jam_comp_control_Contrystem_0_decelerate4(jamaica_thread *ct,jamaica_ref r0) {
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
JBIEXPORT void JBICALL jam_comp_control_Contrystem_0_resume5(jamaica_thread *ct,jamaica_ref r0) {
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
JBIEXPORT void JBICALL jam_comp_control_Contrystem_0_changSpeed6(jamaica_thread *ct,jamaica_ref r0,jamaica_double d0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r2=JAMAICA_NULL,r1=JAMAICA_NULL,r3=JAMAICA_NULL;
 jamaica_int32 n0=0,n1=0;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+8;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->s[tp-5]=ct->f;ct->f=tp-5;
 ct->s[tp-4]=0;
 {jamaica_ref m=jam_mtd_control_Contrystem_0_changSpeed6;ct->s[tp-3]=(jamaica_int32)m;ct->m.cl[tp-3]=m;}
 ct->s[tp-1]=0;
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 {jamaica_uint32 mc=JAMAICA_BLOCK_GET_UI(r0,2);
  jamaica_uint32 id=(mc>>8)&255;
  jamaica_uint32 nc=(mc>>17)&255;
  jamaica_uint32 cl=(mc>>25);
  if ((cl == 0) && ((id == 0) || ((id==ct->id) && (nc > 0) && (nc != 255)))) {
   JAMAICA_BLOCK_GET_UI(r0,2) = (mc|(ct->id<<8))+131072;

  } else {
 jamaicaInterpreter_enterMonitor(ct,r0);
  }
 }
 ct->s[tp-1]=(jamaica_int32)r0; 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=ct->m.cl[tp-1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}ct->m.cl[tp-1]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}ct->m.cl[tp-1]=new_ref;}
#endif

 r1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_DATA32(jam_fld_java_lang_System_146_out5,7).r,4).r;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 r2=jamaicaInterpreter_allocJavaObject(ct,jam_class_java_lang_Strinilder_140);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 if (r2==JAMAICA_NULL) { goto LABEL_tOOME; }
{ jamaica_ref m=jam_mtd_java_lang_Strinilder_140__00030003e2;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,jam_str_control_Contrystem_041);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_java_lang_Strinilder_140_append16;
ct->calledMethod=m;
 r2=((jamaica_ref(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_double))JAMAICA_BLOCK_GET_P(m,4))(ct,r2,d0);
}
 if (r2==JAMAICA_NULL) { goto LABEL_tNPE; }
 r2=jam_comp_java_lang_Abstrilder_1_toString28(ct,r2);
 if (r1==JAMAICA_NULL) { goto LABEL_tNPE; }
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r1,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_io_Printtream_94_println19,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n0,r3);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r3;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r1,r2);
}
 JAMAICA_BLOCK_GET_DATA64(r0,4).d = JAMAICA_NATIVE_MATH_FLOAT_DOUBLE_MUL(JAMAICA_BLOCK_GET_DATA64(r0,4).d,d0);
 ct->s[tp-1]=0; 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=ct->m.cl[tp-1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}ct->m.cl[tp-1]=JAMAICA_NULL;}
#else
{ct->m.cl[tp-1]=JAMAICA_NULL;}
#endif

 {jamaica_uint32 mc=JAMAICA_BLOCK_GET_UI(r0,2);
  jamaica_uint32 id=(mc>>8)&255;
  jamaica_uint32 nc=(mc>>17)&255;
  jamaica_uint32 cl=(mc>>25);
  if ((id == ct->id) && (cl == 0)) {
   if (nc == 1) { JAMAICA_BLOCK_GET_UI(r0,2) = mc&255;
   } else       { JAMAICA_BLOCK_GET_UI(r0,2) = mc-131072;
   }
  } else {
   jamaicaInterpreter_exitMonitor(ct,r0);
  }
 }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-5];
 ct->m.cl[tp-3]=JAMAICA_NULL;
 ct->m.cli=tp-8;
 return;
LABEL_tOOME:   jamaica_throwOutOfMemErr(ct);        return;
LABEL_tNPE:    jamaica_throwNullPtrExc(ct);         return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
JBIEXPORT jamaica_double JBICALL jam_comp_control_Contrystem_0_getSpeed7(jamaica_thread *ct,jamaica_ref r0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 /* JAMAICA_C_STACK_OVERFLOW not needed for leaf methods */
 tp=ct->m.cli+6;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->s[tp-5]=ct->f;ct->f=tp-5;
 ct->s[tp-4]=0;
 {jamaica_ref m=jam_mtd_control_Contrystem_0_getSpeed7;ct->s[tp-3]=(jamaica_int32)m;ct->m.cl[tp-3]=m;}
 ct->s[tp-1]=0;
 ct->m.cli=tp;
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 {jamaica_uint32 mc=JAMAICA_BLOCK_GET_UI(r0,2);
  jamaica_uint32 id=(mc>>8)&255;
  jamaica_uint32 nc=(mc>>17)&255;
  jamaica_uint32 cl=(mc>>25);
  if ((cl == 0) && ((id == 0) || ((id==ct->id) && (nc > 0) && (nc != 255)))) {
   JAMAICA_BLOCK_GET_UI(r0,2) = (mc|(ct->id<<8))+131072;

  } else {
 jamaicaInterpreter_enterMonitor(ct,r0);
  }
 }
 ct->s[tp-1]=(jamaica_int32)r0; 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=ct->m.cl[tp-1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}ct->m.cl[tp-1]=r0;}
#else
{jamaica_ref new_ref=r0;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}ct->m.cl[tp-1]=new_ref;}
#endif

 ct->s[tp-1]=0; 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=ct->m.cl[tp-1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}ct->m.cl[tp-1]=JAMAICA_NULL;}
#else
{ct->m.cl[tp-1]=JAMAICA_NULL;}
#endif

 {jamaica_uint32 mc=JAMAICA_BLOCK_GET_UI(r0,2);
  jamaica_uint32 id=(mc>>8)&255;
  jamaica_uint32 nc=(mc>>17)&255;
  jamaica_uint32 cl=(mc>>25);
  if ((id == ct->id) && (cl == 0)) {
   if (nc == 1) { JAMAICA_BLOCK_GET_UI(r0,2) = mc&255;
   } else       { JAMAICA_BLOCK_GET_UI(r0,2) = mc-131072;
   }
  } else {
   jamaicaInterpreter_exitMonitor(ct,r0);
  }
 }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=JAMAICA_NULL;}
#else
{l[0]=JAMAICA_NULL;}
#endif

 ct->f=ct->s[tp-5];
 ct->m.cl[tp-3]=JAMAICA_NULL;
 ct->m.cli=tp-6;
 return JAMAICA_BLOCK_GET_DATA64(r0,4).d;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return 0;
}
JBIEXPORT void JBICALL jam_comp_control_Main_1_main0(jamaica_thread *ct,jamaica_ref r0) {
 jamaica_int32 tp;
 jamaica_GCEnv *gc = ct->m.gcenv;
 jamaica_ref *l=&(ct->m.cl[ct->m.cli]);
 jamaica_ref r1=JAMAICA_NULL,r2=JAMAICA_NULL,r4=JAMAICA_NULL,r3=JAMAICA_NULL;
 jamaica_int32 n0=0,n1=0;
 JAMAICA_C_STACK_OVERFLOW(ct, goto LABEL_tSOE;);
 tp=ct->m.cli+8;
 if(tp > ct->javaStackSize) { goto LABEL_tSOE; }
 ct->s[tp-4]=ct->f;ct->f=tp-4;
 ct->s[tp-3]=0;
 {jamaica_ref m=jam_mtd_control_Main_1_main0;ct->s[tp-2]=(jamaica_int32)m;ct->m.cl[tp-2]=m;}
 ct->m.cli=tp;
 if (ct->state==JAMAICA_THREAD_STATE_RUNNING) { goto l2; }
 jamaicaScheduler_syncPointFull(ct);
l2:
 if (ct->plainAlloc) {
  r1 = jamaicaGC_PlainAllocHeadBlock(ct,2);
  if (r1 != JAMAICA_NULL) {
   JAMAICA_BLOCK_GET_R(r1,1)=jam_class_control_Contrystem_0;
  }
 } else {
 r1=jamaicaInterpreter_allocJavaObject(ct,jam_class_control_Contrystem_0);
 }
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[0];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[0]=r1;}
#else
{jamaica_ref new_ref=r1;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[0]=new_ref;}
#endif

 if (r1==JAMAICA_NULL) { goto LABEL_tOOME; }
 JAMAICA_BLOCK_GET_DATA64(r1,4).d = ((jamaica_double) 100.0);
 n0=JAMAICA_BLOCK_GET_DATA32(jam_class_inputHandler_Inputhread_0,5).i;
 if (((n0>>20) |  ((n0>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_inputHandler_Inputhread_0,-1);
 }
 r2=jamaicaInterpreter_allocJavaObject(ct,jam_class_inputHandler_Inputhread_0);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r2==JAMAICA_NULL) { goto LABEL_tOOME; }
 jam_comp_inputHandler_Inputhread_0__00030003e1(ct,r2,r1);
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_java_lang_Thread_157_start31,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n0,r3);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r3;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
 n0=JAMAICA_BLOCK_GET_DATA32(jam_class_periodicTasks_Perioriter_1,5).i;
 if (((n0>>20) |  ((n0>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_periodicTasks_Perioriter_1,-1);
 }
 r2=jamaicaInterpreter_allocJavaObject(ct,jam_class_periodicTasks_Perioriter_1);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r2==JAMAICA_NULL) { goto LABEL_tOOME; }
 r3=jamaicaInterpreter_allocJavaObject(ct,jam_class_javax_realtime_Perioeters_41);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 if (r3==JAMAICA_NULL) { goto LABEL_tOOME; }
 r4=jamaicaInterpreter_allocJavaObject(ct,jam_class_javax_realtime_RelateTime_62);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 if (r4==JAMAICA_NULL) { goto LABEL_tOOME; }
{ jamaica_ref m=jam_mtd_javax_realtime_RelateTime_62__00030003e1;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int64,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r4,((jamaica_int64) 0x1f4LL),0);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_javax_realtime_Perioeters_41__00030003e0;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,r4);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=JAMAICA_NULL;}
#else
{l[2]=JAMAICA_NULL;}
#endif

 jam_comp_periodicTasks_Perioriter_1__00030003e0(ct,r2,r3,r1);
 r3=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_realtime_Realthread_60_start31,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r3,3).i&15);
 JAMAICA_GET_REF_ARRAY(r3,n0,r3);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r3;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
 n0=JAMAICA_BLOCK_GET_DATA32(jam_class_periodicTasks_Periohread_0,5).i;
 if (((n0>>20) |  ((n0>=0)?0:(jamaica_int32)(-4096)))!=6) {
  jamaicaInterpreter_initialize_class_helper(ct,jam_class_periodicTasks_Periohread_0,-1);
 }
 r2=jamaicaInterpreter_allocJavaObject(ct,jam_class_periodicTasks_Periohread_0);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=r2;}
#else
{jamaica_ref new_ref=r2;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[1]=new_ref;}
#endif

 if (r2==JAMAICA_NULL) { goto LABEL_tOOME; }
 r3=jamaicaInterpreter_allocJavaObject(ct,jam_class_javax_realtime_Perioeters_41);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[2];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[2]=r3;}
#else
{jamaica_ref new_ref=r3;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[2]=new_ref;}
#endif

 if (r3==JAMAICA_NULL) { goto LABEL_tOOME; }
 r4=jamaicaInterpreter_allocJavaObject(ct,jam_class_javax_realtime_RelateTime_62);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=r4;}
#else
{jamaica_ref new_ref=r4;if(new_ref!=JAMAICA_NULL)if(JAMAICA_BLOCK_GET_R(new_ref,0)==gc->white){ JAMAICA_BLOCK_GET_R(new_ref,0)=gc->greyList;gc->greyList=new_ref;}l[3]=new_ref;}
#endif

 if (r4==JAMAICA_NULL) { goto LABEL_tOOME; }
{ jamaica_ref m=jam_mtd_javax_realtime_RelateTime_62__00030003e1;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_int64,jamaica_int32))JAMAICA_BLOCK_GET_P(m,4))(ct,r4,((jamaica_int64) 0x3e8LL),0);
}
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[3];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[3]=JAMAICA_NULL;}
#else
{l[3]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=jam_mtd_javax_realtime_Perioeters_41__00030003e0;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r3,r4);
}
 
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

 jam_comp_periodicTasks_Periohread_0__00030003e0(ct,r2,r3,r1);
 r1=JAMAICA_BLOCK_GET_DATA32(JAMAICA_BLOCK_GET_R(r2,1),3).r;
 n0=((JAMAICA_BLOCK_GET_DATA32(jam_mtd_javax_realtime_Realthread_60_start31,1).i>>20) &  ((jamaica_int32)4095));
 n1=(JAMAICA_BLOCK_GET_DATA32(r1,3).i&15);
 JAMAICA_GET_REF_ARRAY(r1,n0,r1);
 
#ifdef JAMAICA_PARALLEL
{jamaica_ref old_ref=l[1];if(old_ref!=JAMAICA_NULL){jamaica_cpu *cpu=ct->cpu;jamaica_ref white=cpu->gc.white;if(JAMAICA_BLOCK_GET_R(old_ref,0)==white){jamaica_ref gL, result; gL=cpu->gc.greyList;JAMAICA_NATIVE_THREAD_COMPARE_AND_SWAP_REF(&(JAMAICA_BLOCK_GET_R(old_ref,0)),white,gL,result);if(result==white){cpu->gc.greyList=old_ref;}}}l[1]=JAMAICA_NULL;}
#else
{l[1]=JAMAICA_NULL;}
#endif

{ jamaica_ref m=r1;
ct->calledMethod=m;
 ((void(JBICALL *)(jamaica_thread *,jamaica_ref))JAMAICA_BLOCK_GET_P(m,4))(ct,r2);
}
 ct->f=ct->s[tp-4];
 ct->m.cl[tp-2]=JAMAICA_NULL;
 ct->m.cli=tp-8;
 return;
LABEL_tOOME:   jamaica_throwOutOfMemErr(ct);        return;
LABEL_tSOE:    jamaica_throwStackOvrflwErr(ct);     return;
}
#else
#error 'jamaica.h' not found!
#endif

#ifdef __cplusplus
}
#endif

