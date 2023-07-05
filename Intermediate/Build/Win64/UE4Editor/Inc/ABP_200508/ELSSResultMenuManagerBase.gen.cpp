// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSResultMenuManagerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSResultMenuManagerBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSResultMenuManagerBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSResultMenuManagerBase();
	ABP_200508_API UClass* Z_Construct_UClass_AELPauseMenuManagerBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(AELSSResultMenuManagerBase::execTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_inDeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Tick(Z_Param_inDeltaSeconds);
		P_NATIVE_END;
	}
	static FName NAME_AELSSResultMenuManagerBase_Decide = FName(TEXT("Decide"));
	void AELSSResultMenuManagerBase::Decide()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSResultMenuManagerBase_Decide),NULL);
	}
	void AELSSResultMenuManagerBase::StaticRegisterNativesAELSSResultMenuManagerBase()
	{
		UClass* Class = AELSSResultMenuManagerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Tick", &AELSSResultMenuManagerBase::execTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSResultMenuManagerBase_Decide_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSResultMenuManagerBase_Decide_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSResultMenuManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSResultMenuManagerBase_Decide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSResultMenuManagerBase, nullptr, "Decide", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSResultMenuManagerBase_Decide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSResultMenuManagerBase_Decide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSResultMenuManagerBase_Decide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSResultMenuManagerBase_Decide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSResultMenuManagerBase_Tick_Statics
	{
		struct ELSSResultMenuManagerBase_eventTick_Parms
		{
			float inDeltaSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSResultMenuManagerBase_Tick_Statics::NewProp_inDeltaSeconds = { "inDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSResultMenuManagerBase_eventTick_Parms, inDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSResultMenuManagerBase_Tick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSResultMenuManagerBase_Tick_Statics::NewProp_inDeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSResultMenuManagerBase_Tick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSResultMenuManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSResultMenuManagerBase_Tick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSResultMenuManagerBase, nullptr, "Tick", nullptr, nullptr, sizeof(ELSSResultMenuManagerBase_eventTick_Parms), Z_Construct_UFunction_AELSSResultMenuManagerBase_Tick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSResultMenuManagerBase_Tick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSResultMenuManagerBase_Tick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSResultMenuManagerBase_Tick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSResultMenuManagerBase_Tick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSResultMenuManagerBase_Tick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSResultMenuManagerBase_NoRegister()
	{
		return AELSSResultMenuManagerBase::StaticClass();
	}
	struct Z_Construct_UClass_AELSSResultMenuManagerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFocusGame_MetaData[];
#endif
		static void NewProp_IsFocusGame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFocusGame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSResultMenuManagerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELPauseMenuManagerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSResultMenuManagerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSResultMenuManagerBase_Decide, "Decide" }, // 312398956
		{ &Z_Construct_UFunction_AELSSResultMenuManagerBase_Tick, "Tick" }, // 900169450
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSResultMenuManagerBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSResultMenuManagerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSResultMenuManagerBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSResultMenuManagerBase_Statics::NewProp_IsFocusGame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSResultMenuManagerBase" },
		{ "ModuleRelativePath", "Public/ELSSResultMenuManagerBase.h" },
	};
#endif
	void Z_Construct_UClass_AELSSResultMenuManagerBase_Statics::NewProp_IsFocusGame_SetBit(void* Obj)
	{
		((AELSSResultMenuManagerBase*)Obj)->IsFocusGame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSResultMenuManagerBase_Statics::NewProp_IsFocusGame = { "IsFocusGame", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSResultMenuManagerBase), &Z_Construct_UClass_AELSSResultMenuManagerBase_Statics::NewProp_IsFocusGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSResultMenuManagerBase_Statics::NewProp_IsFocusGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSResultMenuManagerBase_Statics::NewProp_IsFocusGame_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSResultMenuManagerBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSResultMenuManagerBase_Statics::NewProp_IsFocusGame,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSResultMenuManagerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSResultMenuManagerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSResultMenuManagerBase_Statics::ClassParams = {
		&AELSSResultMenuManagerBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSResultMenuManagerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSResultMenuManagerBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSResultMenuManagerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSResultMenuManagerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSResultMenuManagerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSResultMenuManagerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSResultMenuManagerBase, 3358283585);
	template<> ABP_200508_API UClass* StaticClass<AELSSResultMenuManagerBase>()
	{
		return AELSSResultMenuManagerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSResultMenuManagerBase(Z_Construct_UClass_AELSSResultMenuManagerBase, &AELSSResultMenuManagerBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSResultMenuManagerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSResultMenuManagerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
