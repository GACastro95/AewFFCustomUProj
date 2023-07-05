// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/DodgeRootMotionUpdater.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDodgeRootMotionUpdater() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_ADodgeRootMotionUpdater_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_ADodgeRootMotionUpdater();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ADodgeRootMotionUpdater::execSetup)
	{
		P_GET_OBJECT(ACharacter,Z_Param_myChara);
		P_GET_OBJECT(ACharacter,Z_Param_targetChara);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Setup(Z_Param_myChara,Z_Param_targetChara);
		P_NATIVE_END;
	}
	void ADodgeRootMotionUpdater::StaticRegisterNativesADodgeRootMotionUpdater()
	{
		UClass* Class = ADodgeRootMotionUpdater::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Setup", &ADodgeRootMotionUpdater::execSetup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADodgeRootMotionUpdater_Setup_Statics
	{
		struct DodgeRootMotionUpdater_eventSetup_Parms
		{
			ACharacter* myChara;
			ACharacter* targetChara;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_myChara;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetChara;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADodgeRootMotionUpdater_Setup_Statics::NewProp_myChara = { "myChara", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DodgeRootMotionUpdater_eventSetup_Parms, myChara), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADodgeRootMotionUpdater_Setup_Statics::NewProp_targetChara = { "targetChara", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DodgeRootMotionUpdater_eventSetup_Parms, targetChara), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADodgeRootMotionUpdater_Setup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADodgeRootMotionUpdater_Setup_Statics::NewProp_myChara,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADodgeRootMotionUpdater_Setup_Statics::NewProp_targetChara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADodgeRootMotionUpdater_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DodgeRootMotionUpdater.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADodgeRootMotionUpdater_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADodgeRootMotionUpdater, nullptr, "Setup", nullptr, nullptr, sizeof(DodgeRootMotionUpdater_eventSetup_Parms), Z_Construct_UFunction_ADodgeRootMotionUpdater_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADodgeRootMotionUpdater_Setup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADodgeRootMotionUpdater_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADodgeRootMotionUpdater_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADodgeRootMotionUpdater_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADodgeRootMotionUpdater_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADodgeRootMotionUpdater_NoRegister()
	{
		return ADodgeRootMotionUpdater::StaticClass();
	}
	struct Z_Construct_UClass_ADodgeRootMotionUpdater_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADodgeRootMotionUpdater_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADodgeRootMotionUpdater_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADodgeRootMotionUpdater_Setup, "Setup" }, // 2658098896
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADodgeRootMotionUpdater_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DodgeRootMotionUpdater.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DodgeRootMotionUpdater.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADodgeRootMotionUpdater_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADodgeRootMotionUpdater>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADodgeRootMotionUpdater_Statics::ClassParams = {
		&ADodgeRootMotionUpdater::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADodgeRootMotionUpdater_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeRootMotionUpdater_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADodgeRootMotionUpdater()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADodgeRootMotionUpdater_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADodgeRootMotionUpdater, 845499668);
	template<> ELITE_API UClass* StaticClass<ADodgeRootMotionUpdater>()
	{
		return ADodgeRootMotionUpdater::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADodgeRootMotionUpdater(Z_Construct_UClass_ADodgeRootMotionUpdater, &ADodgeRootMotionUpdater::StaticClass, TEXT("/Script/ELITE"), TEXT("ADodgeRootMotionUpdater"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADodgeRootMotionUpdater);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
