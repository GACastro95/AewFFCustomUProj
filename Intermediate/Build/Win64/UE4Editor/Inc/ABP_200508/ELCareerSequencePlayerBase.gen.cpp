// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerSequencePlayerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerSequencePlayerBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerSequencePlayerBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerSequencePlayerBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static FName NAME_AELCareerSequencePlayerBase_PlaySequenceBP = FName(TEXT("PlaySequenceBP"));
	void AELCareerSequencePlayerBase::PlaySequenceBP(int32 No)
	{
		ELCareerSequencePlayerBase_eventPlaySequenceBP_Parms Parms;
		Parms.No=No;
		ProcessEvent(FindFunctionChecked(NAME_AELCareerSequencePlayerBase_PlaySequenceBP),&Parms);
	}
	void AELCareerSequencePlayerBase::StaticRegisterNativesAELCareerSequencePlayerBase()
	{
	}
	struct Z_Construct_UFunction_AELCareerSequencePlayerBase_PlaySequenceBP_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_No;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerSequencePlayerBase_PlaySequenceBP_Statics::NewProp_No = { "No", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSequencePlayerBase_eventPlaySequenceBP_Parms, No), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSequencePlayerBase_PlaySequenceBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSequencePlayerBase_PlaySequenceBP_Statics::NewProp_No,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSequencePlayerBase_PlaySequenceBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSequencePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSequencePlayerBase_PlaySequenceBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSequencePlayerBase, nullptr, "PlaySequenceBP", nullptr, nullptr, sizeof(ELCareerSequencePlayerBase_eventPlaySequenceBP_Parms), Z_Construct_UFunction_AELCareerSequencePlayerBase_PlaySequenceBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSequencePlayerBase_PlaySequenceBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSequencePlayerBase_PlaySequenceBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSequencePlayerBase_PlaySequenceBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSequencePlayerBase_PlaySequenceBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSequencePlayerBase_PlaySequenceBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELCareerSequencePlayerBase_NoRegister()
	{
		return AELCareerSequencePlayerBase::StaticClass();
	}
	struct Z_Construct_UClass_AELCareerSequencePlayerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELCareerSequencePlayerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELCareerSequencePlayerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELCareerSequencePlayerBase_PlaySequenceBP, "PlaySequenceBP" }, // 2615355322
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerSequencePlayerBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerSequencePlayerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerSequencePlayerBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELCareerSequencePlayerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELCareerSequencePlayerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELCareerSequencePlayerBase_Statics::ClassParams = {
		&AELCareerSequencePlayerBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AELCareerSequencePlayerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerSequencePlayerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELCareerSequencePlayerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELCareerSequencePlayerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELCareerSequencePlayerBase, 2012264883);
	template<> ABP_200508_API UClass* StaticClass<AELCareerSequencePlayerBase>()
	{
		return AELCareerSequencePlayerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELCareerSequencePlayerBase(Z_Construct_UClass_AELCareerSequencePlayerBase, &AELCareerSequencePlayerBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELCareerSequencePlayerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELCareerSequencePlayerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
