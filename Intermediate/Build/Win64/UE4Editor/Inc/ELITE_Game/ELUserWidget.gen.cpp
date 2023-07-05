// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELUserWidget() {}
// Cross Module References
	ELITE_GAME_API UClass* Z_Construct_UClass_UELUserWidget_NoRegister();
	ELITE_GAME_API UClass* Z_Construct_UClass_UELUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUMGSequencePlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELUserWidget::execSkipLastFrameAnimation)
	{
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUMGSequencePlayer**)Z_Param__Result=P_THIS->SkipLastFrameAnimation(Z_Param_InAnimation);
		P_NATIVE_END;
	}
	void UELUserWidget::StaticRegisterNativesUELUserWidget()
	{
		UClass* Class = UELUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SkipLastFrameAnimation", &UELUserWidget::execSkipLastFrameAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELUserWidget_SkipLastFrameAnimation_Statics
	{
		struct ELUserWidget_eventSkipLastFrameAnimation_Parms
		{
			UWidgetAnimation* InAnimation;
			UUMGSequencePlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InAnimation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELUserWidget_SkipLastFrameAnimation_Statics::NewProp_InAnimation = { "InAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserWidget_eventSkipLastFrameAnimation_Parms, InAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELUserWidget_SkipLastFrameAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUserWidget_eventSkipLastFrameAnimation_Parms, ReturnValue), Z_Construct_UClass_UUMGSequencePlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUserWidget_SkipLastFrameAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserWidget_SkipLastFrameAnimation_Statics::NewProp_InAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUserWidget_SkipLastFrameAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUserWidget_SkipLastFrameAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUserWidget_SkipLastFrameAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUserWidget, nullptr, "SkipLastFrameAnimation", nullptr, nullptr, sizeof(ELUserWidget_eventSkipLastFrameAnimation_Parms), Z_Construct_UFunction_UELUserWidget_SkipLastFrameAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserWidget_SkipLastFrameAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUserWidget_SkipLastFrameAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUserWidget_SkipLastFrameAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUserWidget_SkipLastFrameAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUserWidget_SkipLastFrameAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELUserWidget_NoRegister()
	{
		return UELUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UELUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELUserWidget_SkipLastFrameAnimation, "SkipLastFrameAnimation" }, // 4250206082
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELUserWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELUserWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELUserWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELUserWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELUserWidget_Statics::ClassParams = {
		&UELUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELUserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELUserWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELUserWidget, 1800769159);
	template<> ELITE_GAME_API UClass* StaticClass<UELUserWidget>()
	{
		return UELUserWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELUserWidget(Z_Construct_UClass_UELUserWidget, &UELUserWidget::StaticClass, TEXT("/Script/ELITE_Game"), TEXT("UELUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
