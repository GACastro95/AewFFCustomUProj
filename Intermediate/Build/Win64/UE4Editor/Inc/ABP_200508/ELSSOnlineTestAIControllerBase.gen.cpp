// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSOnlineTestAIControllerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSOnlineTestAIControllerBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSOnlineTestAIControllerBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSOnlineTestAIControllerBase();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(AELSSOnlineTestAIControllerBase::execStartOnlineAI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartOnlineAI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSOnlineTestAIControllerBase::execStopOnlineAI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopOnlineAI();
		P_NATIVE_END;
	}
	static FName NAME_AELSSOnlineTestAIControllerBase_EndedControlAI = FName(TEXT("EndedControlAI"));
	void AELSSOnlineTestAIControllerBase::EndedControlAI()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSOnlineTestAIControllerBase_EndedControlAI),NULL);
	}
	static FName NAME_AELSSOnlineTestAIControllerBase_PreparationControlAI = FName(TEXT("PreparationControlAI"));
	void AELSSOnlineTestAIControllerBase::PreparationControlAI()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSOnlineTestAIControllerBase_PreparationControlAI),NULL);
	}
	void AELSSOnlineTestAIControllerBase::StaticRegisterNativesAELSSOnlineTestAIControllerBase()
	{
		UClass* Class = AELSSOnlineTestAIControllerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartOnlineAI", &AELSSOnlineTestAIControllerBase::execStartOnlineAI },
			{ "StopOnlineAI", &AELSSOnlineTestAIControllerBase::execStopOnlineAI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSOnlineTestAIControllerBase_EndedControlAI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOnlineTestAIControllerBase_EndedControlAI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestAIControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOnlineTestAIControllerBase_EndedControlAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOnlineTestAIControllerBase, nullptr, "EndedControlAI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOnlineTestAIControllerBase_EndedControlAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestAIControllerBase_EndedControlAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOnlineTestAIControllerBase_EndedControlAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOnlineTestAIControllerBase_EndedControlAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOnlineTestAIControllerBase_PreparationControlAI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOnlineTestAIControllerBase_PreparationControlAI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestAIControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOnlineTestAIControllerBase_PreparationControlAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOnlineTestAIControllerBase, nullptr, "PreparationControlAI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOnlineTestAIControllerBase_PreparationControlAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestAIControllerBase_PreparationControlAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOnlineTestAIControllerBase_PreparationControlAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOnlineTestAIControllerBase_PreparationControlAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOnlineTestAIControllerBase_StartOnlineAI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOnlineTestAIControllerBase_StartOnlineAI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestAIControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOnlineTestAIControllerBase_StartOnlineAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOnlineTestAIControllerBase, nullptr, "StartOnlineAI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOnlineTestAIControllerBase_StartOnlineAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestAIControllerBase_StartOnlineAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOnlineTestAIControllerBase_StartOnlineAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOnlineTestAIControllerBase_StartOnlineAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOnlineTestAIControllerBase_StopOnlineAI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOnlineTestAIControllerBase_StopOnlineAI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestAIControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOnlineTestAIControllerBase_StopOnlineAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOnlineTestAIControllerBase, nullptr, "StopOnlineAI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOnlineTestAIControllerBase_StopOnlineAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestAIControllerBase_StopOnlineAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOnlineTestAIControllerBase_StopOnlineAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOnlineTestAIControllerBase_StopOnlineAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSOnlineTestAIControllerBase_NoRegister()
	{
		return AELSSOnlineTestAIControllerBase::StaticClass();
	}
	struct Z_Construct_UClass_AELSSOnlineTestAIControllerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSOnlineTestAIControllerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSOnlineTestAIControllerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSOnlineTestAIControllerBase_EndedControlAI, "EndedControlAI" }, // 2880234482
		{ &Z_Construct_UFunction_AELSSOnlineTestAIControllerBase_PreparationControlAI, "PreparationControlAI" }, // 533995874
		{ &Z_Construct_UFunction_AELSSOnlineTestAIControllerBase_StartOnlineAI, "StartOnlineAI" }, // 761555369
		{ &Z_Construct_UFunction_AELSSOnlineTestAIControllerBase_StopOnlineAI, "StopOnlineAI" }, // 1957222621
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOnlineTestAIControllerBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ELSSOnlineTestAIControllerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSOnlineTestAIControllerBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSOnlineTestAIControllerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSOnlineTestAIControllerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSOnlineTestAIControllerBase_Statics::ClassParams = {
		&AELSSOnlineTestAIControllerBase::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSOnlineTestAIControllerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOnlineTestAIControllerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSOnlineTestAIControllerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSOnlineTestAIControllerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSOnlineTestAIControllerBase, 1219573074);
	template<> ABP_200508_API UClass* StaticClass<AELSSOnlineTestAIControllerBase>()
	{
		return AELSSOnlineTestAIControllerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSOnlineTestAIControllerBase(Z_Construct_UClass_AELSSOnlineTestAIControllerBase, &AELSSOnlineTestAIControllerBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSOnlineTestAIControllerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSOnlineTestAIControllerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
