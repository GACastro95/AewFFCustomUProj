// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerCutSceneUtilityBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerCutSceneUtilityBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerCutSceneUtilityBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerCutSceneUtilityBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static FName NAME_AELCareerCutSceneUtilityBase_RequestSkip = FName(TEXT("RequestSkip"));
	void AELCareerCutSceneUtilityBase::RequestSkip(float fFadeTime)
	{
		ELCareerCutSceneUtilityBase_eventRequestSkip_Parms Parms;
		Parms.fFadeTime=fFadeTime;
		ProcessEvent(FindFunctionChecked(NAME_AELCareerCutSceneUtilityBase_RequestSkip),&Parms);
	}
	void AELCareerCutSceneUtilityBase::StaticRegisterNativesAELCareerCutSceneUtilityBase()
	{
	}
	struct Z_Construct_UFunction_AELCareerCutSceneUtilityBase_RequestSkip_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fFadeTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELCareerCutSceneUtilityBase_RequestSkip_Statics::NewProp_fFadeTime = { "fFadeTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerCutSceneUtilityBase_eventRequestSkip_Parms, fFadeTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerCutSceneUtilityBase_RequestSkip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerCutSceneUtilityBase_RequestSkip_Statics::NewProp_fFadeTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerCutSceneUtilityBase_RequestSkip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerCutSceneUtilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerCutSceneUtilityBase_RequestSkip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerCutSceneUtilityBase, nullptr, "RequestSkip", nullptr, nullptr, sizeof(ELCareerCutSceneUtilityBase_eventRequestSkip_Parms), Z_Construct_UFunction_AELCareerCutSceneUtilityBase_RequestSkip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerCutSceneUtilityBase_RequestSkip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerCutSceneUtilityBase_RequestSkip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerCutSceneUtilityBase_RequestSkip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerCutSceneUtilityBase_RequestSkip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerCutSceneUtilityBase_RequestSkip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELCareerCutSceneUtilityBase_NoRegister()
	{
		return AELCareerCutSceneUtilityBase::StaticClass();
	}
	struct Z_Construct_UClass_AELCareerCutSceneUtilityBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELCareerCutSceneUtilityBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELCareerCutSceneUtilityBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELCareerCutSceneUtilityBase_RequestSkip, "RequestSkip" }, // 3433611368
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerCutSceneUtilityBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerCutSceneUtilityBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerCutSceneUtilityBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELCareerCutSceneUtilityBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELCareerCutSceneUtilityBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELCareerCutSceneUtilityBase_Statics::ClassParams = {
		&AELCareerCutSceneUtilityBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELCareerCutSceneUtilityBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerCutSceneUtilityBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELCareerCutSceneUtilityBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELCareerCutSceneUtilityBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELCareerCutSceneUtilityBase, 3254502236);
	template<> ABP_200508_API UClass* StaticClass<AELCareerCutSceneUtilityBase>()
	{
		return AELCareerCutSceneUtilityBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELCareerCutSceneUtilityBase(Z_Construct_UClass_AELCareerCutSceneUtilityBase, &AELCareerCutSceneUtilityBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELCareerCutSceneUtilityBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELCareerCutSceneUtilityBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
