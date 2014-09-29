//
//  Zinnia: Online hand recognition system with machine learning
//
//  $Id: svm.h 9 2008-09-20 12:11:02Z taku-ku $;
//
//  Copyright(C) 2008 Taku Kudo <taku@chasen.org>
//
#ifndef zinnia_SVM_H_
#define zinnia_SVM_H_

namespace zinnia {
  struct FeatureNode;

  bool svm_train(size_t l,
                 size_t n,
                 const float *y,
                 const FeatureNode **x,
                 double C,
                 double *w);
}

#endif
