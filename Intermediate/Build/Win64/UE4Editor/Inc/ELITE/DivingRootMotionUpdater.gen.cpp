// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/DivingRootMotionUpdater.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDivingRootMotionUpdater() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_ADivingRootMotionUpdater_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_ADivingRootMotionUpdater();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ADivingRootMotionUpdater::execSetEnableSweep)
	{
		P_GET_UBOOL(Z_Param_Enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableSweep(Z_Param_Enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADivingRootMotionUpdater::execSetup)
	{
		P_GET_OBJECT(ACharacter,Z_Param_Chara);
		P_GET_UBOOL(Z_Param_ignoreEndResetMovementMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Setup(Z_Param_Chara,Z_Param_ignoreEndResetMovementMode);
		P_NATIVE_END;
	}
	void ADivingRootMotionUpdater::StaticRegisterNativesADivingRootMotionUpdater()
	{
		UClass* Class = ADivingRootMotionUpdater::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetEnableSweep", &ADivingRootMotionUpdater::execSetEnableSweep },
			{ "Setup", &ADivingRootMotionUpdater::execSetup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADivingRootMotionUpdater_SetEnableSweep_Statics
	{
		struct DivingRootMotionUpdater_eventSetEnableSweep_Parms
		{
			bool Enable;
		};
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADivingRootMotionUpdater_SetEnableSweep_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((DivingRootMotionUpdater_eventSetEnableSweep_Parms*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADivingRootMotionUpdater_SetEnableSweep_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DivingRootMotionUpdater_eventSetEnableSweep_Parms), &Z_Construct_UFunction_ADivingRootMotionUpdater_SetEnableSweep_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADivingRootMotionUpdater_SetEnableSweep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADivingRootMotionUpdater_SetEnableSweep_Statics::NewProp_Enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADivingRootMotionUpdater_SetEnableSweep_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DivingRootMotionUpdater.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADivingRootMotionUpdater_SetEnableSweep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADivingRootMotionUpdater, nullptr, "SetEnableSweep", nullptr, nullptr, sizeof(DivingRootMotionUpdater_eventSetEnableSweep_Parms), Z_Construct_UFunction_ADivingRootMotionUpdater_SetEnableSweep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADivingRootMotionUpdater_SetEnableSweep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADivingRootMotionUpdater_SetEnableSweep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADivingRootMotionUpdater_SetEnableSweep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADivingRootMotionUpdater_SetEnableSweep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADivingRootMotionUpdater_SetEnableSweep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADivingRootMotionUpdater_Setup_Statics
	{
		struct DivingRootMotionUpdater_eventSetup_Parms
		{
			ACharacter* Chara;
			bool ignoreEndResetMovementMode;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Chara;
		static void NewProp_ignoreEndResetMovementMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ignoreEndResetMovementMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADivingRootMotionUpdater_Setup_Statics::NewProp_Chara = { "Chara", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DivingRootMotionUpdater_eventSetup_Parms, Chara), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADivingRootMotionUpdater_Setup_Statics::NewProp_ignoreEndResetMovementMode_SetBit(void* Obj)
	{
		((DivingRootMotionUpdater_eventSetup_Parms*)Obj)->ignoreEndResetMovementMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADivingRootMotionUpdater_Setup_Statics::NewProp_ignoreEndResetMovementMode = { "ignoreEndResetMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DivingRootMotionUpdater_eventSetup_Parms), &Z_Construct_UFunction_ADivingRootMotionUpdater_Setup_Statics::NewProp_ignoreEndResetMovementMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADivingRootMotionUpdater_Setup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADivingRootMotionUpdater_Setup_Statics::NewProp_Chara,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADivingRootMotionUpdater_Setup_Statics::NewProp_ignoreEndResetMovementMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADivingRootMotionUpdater_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DivingRootMotionUpdater.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADivingRootMotionUpdater_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADivingRootMotionUpdater, nullptr, "Setup", nullptr, nullptr, sizeof(DivingRootMotionUpdater_eventSetup_Parms), Z_Construct_UFunction_ADivingRootMotionUpdater_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADivingRootMotionUpdater_Setup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADivingRootMotionUpdater_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADivingRootMotionUpdater_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADivingRootMotionUpdater_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADivingRootMotionUpdater_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADivingRootMotionUpdater_NoRegister()
	{
		return ADivingRootMotionUpdater::StaticClass();
	}
	struct Z_Construct_UClass_ADivingRootMotionUpdater_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADivingRootMotionUpdater_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADivingRootMotionUpdater_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADivingRootMotionUpdater_SetEnableSweep, "SetEnableSweep" }, // 100182519
		{ &Z_Construct_UFunction_ADivingRootMotionUpdater_Setup, "Setup" }, // 612492745
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADivingRootMotionUpdater_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DivingRootMotionUpdater.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DivingRootMotionUpdater.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADivingRootMotionUpdater_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADivingRootMotionUpdater>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADivingRootMotionUpdater_Statics::ClassParams = {
		&ADivingRootMotionUpdater::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADivingRootMotionUpdater_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADivingRootMotionUpdater_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADivingRootMotionUpdater()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADivingRootMotionUpdater_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADivingRootMotionUpdater, 1727684271);
	template<> ELITE_API UClass* StaticClass<ADivingRootMotionUpdater>()
	{
		return ADivingRootMotionUpdater::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADivingRootMotionUpdater(Z_Construct_UClass_ADivingRootMotionUpdater, &ADivingRootMotionUpdater::StaticClass, TEXT("/Script/ELITE"), TEXT("ADivingRootMotionUpdater"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADivingRootMotionUpdater);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
