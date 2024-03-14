; ModuleID = 'qsort.c'
source_filename = "qsort.c"
target datalayout = "e-m:o-i64:64-i128:128-n32:64-S128"
target triple = "arm64-apple-macosx14.0.0"

module asm "li $sp,0x3000"
module asm "\09j main"
module asm "\09"

; Function Attrs: noinline nounwind optnone ssp uwtable(sync)
define void @print(i32 noundef %0) #0 {
  %2 = alloca i32, align 4
  store i32 %0, ptr %2, align 4
  %3 = load i32, ptr %2, align 4
  store volatile i32 %3, ptr inttoptr (i64 32768 to ptr), align 4
  ret void
}

; Function Attrs: noinline nounwind optnone ssp uwtable(sync)
define void @QkSort(ptr noundef %0, i32 noundef %1, i32 noundef %2) #0 {
  %4 = alloca ptr, align 8
  %5 = alloca i32, align 4
  %6 = alloca i32, align 4
  %7 = alloca i32, align 4
  %8 = alloca i32, align 4
  %9 = alloca i32, align 4
  %10 = alloca i32, align 4
  store ptr %0, ptr %4, align 8
  store i32 %1, ptr %5, align 4
  store i32 %2, ptr %6, align 4
  %11 = load i32, ptr %5, align 4
  %12 = load i32, ptr %6, align 4
  %13 = icmp sgt i32 %11, %12
  br i1 %13, label %14, label %15

14:                                               ; preds = %3
  br label %111

15:                                               ; preds = %3
  %16 = load ptr, ptr %4, align 8
  %17 = load i32, ptr %5, align 4
  %18 = sext i32 %17 to i64
  %19 = getelementptr inbounds i32, ptr %16, i64 %18
  %20 = load i32, ptr %19, align 4
  store i32 %20, ptr %7, align 4
  %21 = load i32, ptr %5, align 4
  store i32 %21, ptr %8, align 4
  %22 = load i32, ptr %6, align 4
  store i32 %22, ptr %9, align 4
  br label %23

23:                                               ; preds = %87, %15
  %24 = load i32, ptr %8, align 4
  %25 = load i32, ptr %9, align 4
  %26 = icmp ne i32 %24, %25
  br i1 %26, label %27, label %88

27:                                               ; preds = %23
  br label %28

28:                                               ; preds = %42, %27
  %29 = load ptr, ptr %4, align 8
  %30 = load i32, ptr %9, align 4
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i32, ptr %29, i64 %31
  %33 = load i32, ptr %32, align 4
  %34 = load i32, ptr %7, align 4
  %35 = icmp sge i32 %33, %34
  br i1 %35, label %36, label %40

36:                                               ; preds = %28
  %37 = load i32, ptr %9, align 4
  %38 = load i32, ptr %8, align 4
  %39 = icmp sgt i32 %37, %38
  br label %40

40:                                               ; preds = %36, %28
  %41 = phi i1 [ false, %28 ], [ %39, %36 ]
  br i1 %41, label %42, label %45

42:                                               ; preds = %40
  %43 = load i32, ptr %9, align 4
  %44 = add nsw i32 %43, -1
  store i32 %44, ptr %9, align 4
  br label %28, !llvm.loop !5

45:                                               ; preds = %40
  br label %46

46:                                               ; preds = %60, %45
  %47 = load ptr, ptr %4, align 8
  %48 = load i32, ptr %8, align 4
  %49 = sext i32 %48 to i64
  %50 = getelementptr inbounds i32, ptr %47, i64 %49
  %51 = load i32, ptr %50, align 4
  %52 = load i32, ptr %7, align 4
  %53 = icmp sle i32 %51, %52
  br i1 %53, label %54, label %58

54:                                               ; preds = %46
  %55 = load i32, ptr %9, align 4
  %56 = load i32, ptr %8, align 4
  %57 = icmp sgt i32 %55, %56
  br label %58

58:                                               ; preds = %54, %46
  %59 = phi i1 [ false, %46 ], [ %57, %54 ]
  br i1 %59, label %60, label %63

60:                                               ; preds = %58
  %61 = load i32, ptr %8, align 4
  %62 = add nsw i32 %61, 1
  store i32 %62, ptr %8, align 4
  br label %46, !llvm.loop !7

63:                                               ; preds = %58
  %64 = load i32, ptr %9, align 4
  %65 = load i32, ptr %8, align 4
  %66 = icmp sgt i32 %64, %65
  br i1 %66, label %67, label %87

67:                                               ; preds = %63
  %68 = load ptr, ptr %4, align 8
  %69 = load i32, ptr %8, align 4
  %70 = sext i32 %69 to i64
  %71 = getelementptr inbounds i32, ptr %68, i64 %70
  %72 = load i32, ptr %71, align 4
  store i32 %72, ptr %10, align 4
  %73 = load ptr, ptr %4, align 8
  %74 = load i32, ptr %9, align 4
  %75 = sext i32 %74 to i64
  %76 = getelementptr inbounds i32, ptr %73, i64 %75
  %77 = load i32, ptr %76, align 4
  %78 = load ptr, ptr %4, align 8
  %79 = load i32, ptr %8, align 4
  %80 = sext i32 %79 to i64
  %81 = getelementptr inbounds i32, ptr %78, i64 %80
  store i32 %77, ptr %81, align 4
  %82 = load i32, ptr %10, align 4
  %83 = load ptr, ptr %4, align 8
  %84 = load i32, ptr %9, align 4
  %85 = sext i32 %84 to i64
  %86 = getelementptr inbounds i32, ptr %83, i64 %85
  store i32 %82, ptr %86, align 4
  br label %87

87:                                               ; preds = %67, %63
  br label %23, !llvm.loop !8

88:                                               ; preds = %23
  %89 = load ptr, ptr %4, align 8
  %90 = load i32, ptr %8, align 4
  %91 = sext i32 %90 to i64
  %92 = getelementptr inbounds i32, ptr %89, i64 %91
  %93 = load i32, ptr %92, align 4
  %94 = load ptr, ptr %4, align 8
  %95 = load i32, ptr %5, align 4
  %96 = sext i32 %95 to i64
  %97 = getelementptr inbounds i32, ptr %94, i64 %96
  store i32 %93, ptr %97, align 4
  %98 = load i32, ptr %7, align 4
  %99 = load ptr, ptr %4, align 8
  %100 = load i32, ptr %8, align 4
  %101 = sext i32 %100 to i64
  %102 = getelementptr inbounds i32, ptr %99, i64 %101
  store i32 %98, ptr %102, align 4
  %103 = load ptr, ptr %4, align 8
  %104 = load i32, ptr %5, align 4
  %105 = load i32, ptr %8, align 4
  %106 = sub nsw i32 %105, 1
  call void @QkSort(ptr noundef %103, i32 noundef %104, i32 noundef %106)
  %107 = load ptr, ptr %4, align 8
  %108 = load i32, ptr %8, align 4
  %109 = add nsw i32 %108, 1
  %110 = load i32, ptr %6, align 4
  call void @QkSort(ptr noundef %107, i32 noundef %109, i32 noundef %110)
  br label %111

111:                                              ; preds = %88, %14
  ret void
}

; Function Attrs: noinline nounwind optnone ssp uwtable(sync)
define i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca [7 x i32], align 4
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  %5 = alloca i32, align 4
  store i32 0, ptr %1, align 4
  %6 = getelementptr inbounds [7 x i32], ptr %2, i64 0, i64 0
  store i32 2, ptr %6, align 4
  %7 = getelementptr inbounds [7 x i32], ptr %2, i64 0, i64 1
  store i32 3, ptr %7, align 4
  %8 = getelementptr inbounds [7 x i32], ptr %2, i64 0, i64 2
  store i32 4, ptr %8, align 4
  %9 = getelementptr inbounds [7 x i32], ptr %2, i64 0, i64 3
  store i32 1, ptr %9, align 4
  %10 = getelementptr inbounds [7 x i32], ptr %2, i64 0, i64 4
  store i32 0, ptr %10, align 4
  %11 = getelementptr inbounds [7 x i32], ptr %2, i64 0, i64 5
  store i32 7, ptr %11, align 4
  %12 = getelementptr inbounds [7 x i32], ptr %2, i64 0, i64 6
  store i32 5, ptr %12, align 4
  store i32 7, ptr %3, align 4
  store i32 0, ptr %4, align 4
  br label %13

13:                                               ; preds = %23, %0
  %14 = load i32, ptr %4, align 4
  %15 = load i32, ptr %3, align 4
  %16 = sub nsw i32 %15, 1
  %17 = icmp sle i32 %14, %16
  br i1 %17, label %18, label %26

18:                                               ; preds = %13
  %19 = load i32, ptr %4, align 4
  %20 = sext i32 %19 to i64
  %21 = getelementptr inbounds [7 x i32], ptr %2, i64 0, i64 %20
  %22 = load i32, ptr %21, align 4
  call void @print(i32 noundef %22)
  br label %23

23:                                               ; preds = %18
  %24 = load i32, ptr %4, align 4
  %25 = add nsw i32 %24, 1
  store i32 %25, ptr %4, align 4
  br label %13, !llvm.loop !9

26:                                               ; preds = %13
  call void @print(i32 noundef -1)
  %27 = getelementptr inbounds [7 x i32], ptr %2, i64 0, i64 0
  %28 = load i32, ptr %3, align 4
  %29 = sub nsw i32 %28, 1
  call void @QkSort(ptr noundef %27, i32 noundef 0, i32 noundef %29)
  store i32 0, ptr %5, align 4
  br label %30

30:                                               ; preds = %40, %26
  %31 = load i32, ptr %5, align 4
  %32 = load i32, ptr %3, align 4
  %33 = sub nsw i32 %32, 1
  %34 = icmp sle i32 %31, %33
  br i1 %34, label %35, label %43

35:                                               ; preds = %30
  %36 = load i32, ptr %5, align 4
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds [7 x i32], ptr %2, i64 0, i64 %37
  %39 = load i32, ptr %38, align 4
  call void @print(i32 noundef %39)
  br label %40

40:                                               ; preds = %35
  %41 = load i32, ptr %5, align 4
  %42 = add nsw i32 %41, 1
  store i32 %42, ptr %5, align 4
  br label %30, !llvm.loop !10

43:                                               ; preds = %30
  br label %44

44:                                               ; preds = %44, %43
  br label %44
}

attributes #0 = { noinline nounwind optnone ssp uwtable(sync) "frame-pointer"="non-leaf" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="apple-m1" "target-features"="+aes,+crc,+dotprod,+fp-armv8,+fp16fml,+fullfp16,+lse,+neon,+ras,+rcpc,+rdm,+sha2,+sha3,+v8.1a,+v8.2a,+v8.3a,+v8.4a,+v8.5a,+v8a,+zcm,+zcz" }

!llvm.module.flags = !{!0, !1, !2, !3}
!llvm.ident = !{!4}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{i32 8, !"PIC Level", i32 2}
!2 = !{i32 7, !"uwtable", i32 1}
!3 = !{i32 7, !"frame-pointer", i32 1}
!4 = !{!"Homebrew clang version 17.0.6"}
!5 = distinct !{!5, !6}
!6 = !{!"llvm.loop.mustprogress"}
!7 = distinct !{!7, !6}
!8 = distinct !{!8, !6}
!9 = distinct !{!9, !6}
!10 = distinct !{!10, !6}
