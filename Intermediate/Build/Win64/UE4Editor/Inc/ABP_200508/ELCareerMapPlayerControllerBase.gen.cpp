// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerMapPlayerControllerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerMapPlayerControllerBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerMapPlayerControllerBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerMapPlayerControllerBase();
	ABP_200508_API UClass* Z_Construct_UClass_AELMenuPlayerControllerBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_OnTransderOperateInput__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELCareerMapPlayerControllerBase::execBroadcastApplyPawn)
	{
		P_GET_OBJECT(APawn,Z_Param_ApplyPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastApplyPawn(Z_Param_ApplyPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerMapPlayerControllerBase::execTransferOperatePawn)
	{
		P_GET_OBJECT(APawn,Z_Param_ApplyPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TransferOperatePawn(Z_Param_ApplyPawn);
		P_NATIVE_END;
	}
	void AELCareerMapPlayerControllerBase::StaticRegisterNativesAELCareerMapPlayerControllerBase()
	{
		UClass* Class = AELCareerMapPlayerControllerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastApplyPawn", &AELCareerMapPlayerControllerBase::execBroadcastApplyPawn },
			{ "TransferOperatePawn", &AELCareerMapPlayerControllerBase::execTransferOperatePawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELCareerMapPlayerControllerBase_BroadcastApplyPawn_Statics
	{
		struct ELCareerMapPlayerControllerBase_eventBroadcastApplyPawn_Parms
		{
			APawn* ApplyPawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ApplyPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerMapPlayerControllerBase_BroadcastApplyPawn_Statics::NewProp_ApplyPawn = { "ApplyPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerMapPlayerControllerBase_eventBroadcastApplyPawn_Parms, ApplyPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerMapPlayerControllerBase_BroadcastApplyPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerMapPlayerControllerBase_BroadcastApplyPawn_Statics::NewProp_ApplyPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerMapPlayerControllerBase_BroadcastApplyPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerMapPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerMapPlayerControllerBase_BroadcastApplyPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerMapPlayerControllerBase, nullptr, "BroadcastApplyPawn", nullptr, nullptr, sizeof(ELCareerMapPlayerControllerBase_eventBroadcastApplyPawn_Parms), Z_Construct_UFunction_AELCareerMapPlayerControllerBase_BroadcastApplyPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerMapPlayerControllerBase_BroadcastApplyPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerMapPlayerControllerBase_BroadcastApplyPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerMapPlayerControllerBase_BroadcastApplyPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerMapPlayerControllerBase_BroadcastApplyPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerMapPlayerControllerBase_BroadcastApplyPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerMapPlayerControllerBase_TransferOperatePawn_Statics
	{
		struct ELCareerMapPlayerControllerBase_eventTransferOperatePawn_Parms
		{
			APawn* ApplyPawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ApplyPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerMapPlayerControllerBase_TransferOperatePawn_Statics::NewProp_ApplyPawn = { "ApplyPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerMapPlayerControllerBase_eventTransferOperatePawn_Parms, ApplyPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerMapPlayerControllerBase_TransferOperatePawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerMapPlayerControllerBase_TransferOperatePawn_Statics::NewProp_ApplyPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerMapPlayerControllerBase_TransferOperatePawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerMapPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerMapPlayerControllerBase_TransferOperatePawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerMapPlayerControllerBase, nullptr, "TransferOperatePawn", nullptr, nullptr, sizeof(ELCareerMapPlayerControllerBase_eventTransferOperatePawn_Parms), Z_Construct_UFunction_AELCareerMapPlayerControllerBase_TransferOperatePawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerMapPlayerControllerBase_TransferOperatePawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerMapPlayerControllerBase_TransferOperatePawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerMapPlayerControllerBase_TransferOperatePawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerMapPlayerControllerBase_TransferOperatePawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerMapPlayerControllerBase_TransferOperatePawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELCareerMapPlayerControllerBase_NoRegister()
	{
		return AELCareerMapPlayerControllerBase::StaticClass();
	}
	struct Z_Construct_UClass_AELCareerMapPlayerControllerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTransderOperateInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTransderOperateInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_InputComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_InputComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELCareerMapPlayerControllerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELMenuPlayerControllerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELCareerMapPlayerControllerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELCareerMapPlayerControllerBase_BroadcastApplyPawn, "BroadcastApplyPawn" }, // 1561346885
		{ &Z_Construct_UFunction_AELCareerMapPlayerControllerBase_TransferOperatePawn, "TransferOperatePawn" }, // 4081723443
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerMapPlayerControllerBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ELCareerMapPlayerControllerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerMapPlayerControllerBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerMapPlayerControllerBase_Statics::NewProp_OnTransderOperateInput_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerMapPlayerControllerBase" },
		{ "ModuleRelativePath", "Public/ELCareerMapPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AELCareerMapPlayerControllerBase_Statics::NewProp_OnTransderOperateInput = { "OnTransderOperateInput", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerMapPlayerControllerBase, OnTransderOperateInput), Z_Construct_UDelegateFunction_ABP_200508_OnTransderOperateInput__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AELCareerMapPlayerControllerBase_Statics::NewProp_OnTransderOperateInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerMapPlayerControllerBase_Statics::NewProp_OnTransderOperateInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerMapPlayerControllerBase_Statics::NewProp_m_InputComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerMapPlayerControllerBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELCareerMapPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELCareerMapPlayerControllerBase_Statics::NewProp_m_InputComponent = { "m_InputComponent", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerMapPlayerControllerBase, m_InputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELCareerMapPlayerControllerBase_Statics::NewProp_m_InputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerMapPlayerControllerBase_Statics::NewProp_m_InputComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELCareerMapPlayerControllerBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerMapPlayerControllerBase_Statics::NewProp_OnTransderOperateInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerMapPlayerControllerBase_Statics::NewProp_m_InputComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELCareerMapPlayerControllerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELCareerMapPlayerControllerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELCareerMapPlayerControllerBase_Statics::ClassParams = {
		&AELCareerMapPlayerControllerBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELCareerMapPlayerControllerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerMapPlayerControllerBase_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELCareerMapPlayerControllerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerMapPlayerControllerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELCareerMapPlayerControllerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELCareerMapPlayerControllerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELCareerMapPlayerControllerBase, 223972865);
	template<> ABP_200508_API UClass* StaticClass<AELCareerMapPlayerControllerBase>()
	{
		return AELCareerMapPlayerControllerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELCareerMapPlayerControllerBase(Z_Construct_UClass_AELCareerMapPlayerControllerBase, &AELCareerMapPlayerControllerBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELCareerMapPlayerControllerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELCareerMapPlayerControllerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
