// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerEventScreenEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerEventScreenEffect() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerEventScreenEffect_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerEventScreenEffect();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static FName NAME_UELCareerEventScreenEffect_StartInAnimation = FName(TEXT("StartInAnimation"));
	void UELCareerEventScreenEffect::StartInAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCareerEventScreenEffect_StartInAnimation),NULL);
	}
	static FName NAME_UELCareerEventScreenEffect_StartOutAnimation = FName(TEXT("StartOutAnimation"));
	void UELCareerEventScreenEffect::StartOutAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCareerEventScreenEffect_StartOutAnimation),NULL);
	}
	void UELCareerEventScreenEffect::StaticRegisterNativesUELCareerEventScreenEffect()
	{
	}
	struct Z_Construct_UFunction_UELCareerEventScreenEffect_StartInAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerEventScreenEffect_StartInAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerEventScreenEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerEventScreenEffect_StartInAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerEventScreenEffect, nullptr, "StartInAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerEventScreenEffect_StartInAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerEventScreenEffect_StartInAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerEventScreenEffect_StartInAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerEventScreenEffect_StartInAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerEventScreenEffect_StartOutAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerEventScreenEffect_StartOutAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerEventScreenEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerEventScreenEffect_StartOutAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerEventScreenEffect, nullptr, "StartOutAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerEventScreenEffect_StartOutAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerEventScreenEffect_StartOutAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerEventScreenEffect_StartOutAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerEventScreenEffect_StartOutAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCareerEventScreenEffect_NoRegister()
	{
		return UELCareerEventScreenEffect::StaticClass();
	}
	struct Z_Construct_UClass_UELCareerEventScreenEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCareerEventScreenEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELCareerWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCareerEventScreenEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCareerEventScreenEffect_StartInAnimation, "StartInAnimation" }, // 3047105623
		{ &Z_Construct_UFunction_UELCareerEventScreenEffect_StartOutAnimation, "StartOutAnimation" }, // 95964283
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerEventScreenEffect_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerEventScreenEffect.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerEventScreenEffect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCareerEventScreenEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCareerEventScreenEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCareerEventScreenEffect_Statics::ClassParams = {
		&UELCareerEventScreenEffect::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELCareerEventScreenEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerEventScreenEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCareerEventScreenEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCareerEventScreenEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCareerEventScreenEffect, 1118495261);
	template<> ABP_200508_API UClass* StaticClass<UELCareerEventScreenEffect>()
	{
		return UELCareerEventScreenEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCareerEventScreenEffect(Z_Construct_UClass_UELCareerEventScreenEffect, &UELCareerEventScreenEffect::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELCareerEventScreenEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCareerEventScreenEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
