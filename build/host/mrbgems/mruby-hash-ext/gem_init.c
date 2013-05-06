/*
 * This file is loading the irep
 * Ruby GEM code.
 *
 * IMPORTANT:
 *   This file was generated!
 *   All manual changes will get lost.
 */
#include <stdlib.h>
#include "mruby.h"
#include "mruby/irep.h"
#include "mruby/dump.h"
#include "mruby/string.h"
#include "mruby/proc.h"
#include "mruby/variable.h"
#include "mruby/array.h"
#include "mruby/hash.h"
#include <stdint.h>
const uint8_t gem_mrblib_irep_mruby_hash_ext[] = {
0x52,0x49,0x54,0x45,0x30,0x30,0x30,0x31,0x6a,0x56,0x00,0x00,0x02,0x10,0x4d,0x41,
0x54,0x5a,0x30,0x30,0x30,0x30,0x49,0x52,0x45,0x50,0x00,0x00,0x01,0xf2,0x30,0x30,
0x30,0x30,0x00,0x05,0x00,0x00,0x00,0x00,0x00,0x2f,0x00,0x01,0x00,0x03,0x00,0x00,
0x00,0x05,0x00,0x80,0x00,0x05,0x01,0x00,0x00,0x05,0x00,0x80,0x00,0x43,0x00,0x80,
0x00,0xc5,0x00,0x00,0x00,0x4a,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x04,
0x48,0x61,0x73,0x68,0x00,0x00,0x00,0x00,0x31,0x00,0x01,0x00,0x02,0x00,0x00,0x00,
0x05,0x00,0x80,0x00,0x48,0x01,0x00,0x02,0xc0,0x00,0x80,0x00,0x46,0x00,0x00,0x00,
0x05,0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x06,0x6d,
0x65,0x72,0x67,0x65,0x21,0x00,0x00,0x00,0x00,0xb2,0x00,0x03,0x00,0x05,0x00,0x00,
0x00,0x14,0x02,0x00,0x00,0xa6,0x01,0x80,0x40,0x01,0x02,0x00,0x00,0x84,0x01,0x80,
0x00,0xa0,0x01,0xc0,0x00,0x99,0x00,0x40,0x01,0x97,0x01,0x80,0x00,0x06,0x02,0x00,
0x00,0x3d,0x01,0x80,0x80,0xa0,0x01,0x80,0x80,0x01,0x01,0xc0,0x02,0x19,0x01,0x80,
0x40,0x01,0x02,0x00,0x03,0x40,0x01,0x80,0xc0,0x21,0x00,0x40,0x01,0x97,0x01,0x80,
0x40,0x01,0x02,0x00,0x05,0x40,0x01,0x80,0xc0,0x21,0x00,0x00,0x00,0x06,0x00,0x00,
0x00,0x29,0x00,0x00,0x00,0x01,0x10,0x00,0x20,0x63,0x61,0x6e,0x27,0x74,0x20,0x63,
0x6f,0x6e,0x76,0x65,0x72,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x20,
0x69,0x6e,0x74,0x6f,0x20,0x48,0x61,0x73,0x68,0x00,0x00,0x00,0x04,0x00,0x0b,0x72,
0x65,0x73,0x70,0x6f,0x6e,0x64,0x5f,0x74,0x6f,0x3f,0x00,0x00,0x07,0x74,0x6f,0x5f,
0x68,0x61,0x73,0x68,0x00,0x00,0x05,0x72,0x61,0x69,0x73,0x65,0x00,0x00,0x08,0x65,
0x61,0x63,0x68,0x5f,0x6b,0x65,0x79,0x00,0x00,0x00,0x00,0x8d,0x00,0x03,0x00,0x08,
0x00,0x00,0x00,0x17,0x02,0x00,0x00,0x26,0x01,0x80,0x00,0x06,0x02,0x00,0x40,0x01,
0x01,0x80,0x00,0xa0,0x01,0xc0,0x05,0x19,0x01,0x80,0x80,0x15,0x02,0x00,0x40,0x01,
0x02,0x80,0x00,0x06,0x03,0x00,0x40,0x01,0x02,0x80,0x80,0xa0,0x03,0x00,0x40,0x15,
0x03,0x80,0x40,0x01,0x03,0x00,0x80,0xa0,0x01,0x80,0x41,0xa0,0x00,0x40,0x01,0x97,
0x01,0x80,0x40,0x15,0x02,0x00,0x40,0x01,0x01,0x80,0x80,0xa0,0x02,0x00,0x00,0x06,
0x02,0x80,0x40,0x01,0x03,0x00,0xc0,0x01,0x02,0x00,0xc1,0x20,0x01,0x80,0x00,0x29,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x08,0x68,0x61,0x73,0x5f,0x6b,0x65,
0x79,0x3f,0x00,0x00,0x04,0x63,0x61,0x6c,0x6c,0x00,0x00,0x02,0x5b,0x5d,0x00,0x00,
0x03,0x5b,0x5d,0x3d,0x00,0x00,0x00,0x00,0x43,0x00,0x03,0x00,0x07,0x00,0x00,0x00,
0x09,0x02,0x00,0x00,0x26,0x01,0x80,0x40,0x15,0x02,0x00,0x40,0x01,0x01,0x80,0x00,
0xa0,0x02,0x00,0x00,0x06,0x02,0x80,0x40,0x01,0x03,0x00,0xc0,0x01,0x02,0x00,0x41,
0x20,0x01,0x80,0x00,0x29,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x02,0x5b,
0x5d,0x00,0x00,0x03,0x5b,0x5d,0x3d,0x00,0x45,0x4e,0x44,0x00,0x00,0x00,0x00,0x08,
};
void mrb_mruby_hash_ext_gem_init(mrb_state *mrb);
void mrb_mruby_hash_ext_gem_final(mrb_state *mrb);

void GENERATED_TMP_mrb_mruby_hash_ext_gem_init(mrb_state *mrb) {
  int ai = mrb_gc_arena_save(mrb);
  mrb_load_irep(mrb, gem_mrblib_irep_mruby_hash_ext);
  if (mrb->exc) {
    mrb_p(mrb, mrb_obj_value(mrb->exc));
    exit(EXIT_FAILURE);
  }
  mrb_gc_arena_restore(mrb, ai);
}

void GENERATED_TMP_mrb_mruby_hash_ext_gem_final(mrb_state *mrb) {
}
