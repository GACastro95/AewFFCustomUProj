// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EUW_UtilityFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEUW_UtilityFunction() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UEUW_UtilityFunction_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UEUW_UtilityFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEUW_UtilityFunction::execInitializeComponent)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_OBJECT(UActorComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEUW_UtilityFunction::InitializeComponent(Z_Param_Actor,Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEUW_UtilityFunction::execSortMontageKeyArray)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutKeys);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEUW_UtilityFunction::SortMontageKeyArray(Z_Param_Out_OutKeys);
		P_NATIVE_END;
	}
	void UEUW_UtilityFunction::StaticRegisterNativesUEUW_UtilityFunction()
	{
		UClass* Class = UEUW_UtilityFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeComponent", &UEUW_UtilityFunction::execInitializeComponent },
			{ "SortMontageKeyArray", &UEUW_UtilityFunction::execSortMontageKeyArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEUW_UtilityFunction_InitializeComponent_Statics
	{
		struct EUW_UtilityFunction_eventInitializeComponent_Parms
		{
			AActor* Actor;
			UActorComponent* Component;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEUW_UtilityFunction_InitializeComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EUW_UtilityFunction_eventInitializeComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEUW_UtilityFunction_InitializeComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEUW_UtilityFunction_InitializeComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EUW_UtilityFunction_eventInitializeComponent_Parms, Component), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEUW_UtilityFunction_InitializeComponent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEUW_UtilityFunction_InitializeComponent_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEUW_UtilityFunction_InitializeComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEUW_UtilityFunction_InitializeComponent_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEUW_UtilityFunction_InitializeComponent_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEUW_UtilityFunction_InitializeComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EUW_UtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEUW_UtilityFunction_InitializeComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEUW_UtilityFunction, nullptr, "InitializeComponent", nullptr, nullptr, sizeof(EUW_UtilityFunction_eventInitializeComponent_Parms), Z_Construct_UFunction_UEUW_UtilityFunction_InitializeComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEUW_UtilityFunction_InitializeComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEUW_UtilityFunction_InitializeComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEUW_UtilityFunction_InitializeComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEUW_UtilityFunction_InitializeComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEUW_UtilityFunction_InitializeComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEUW_UtilityFunction_SortMontageKeyArray_Statics
	{
		struct EUW_UtilityFunction_eventSortMontageKeyArray_Parms
		{
			TArray<FString> OutKeys;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutKeys_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutKeys;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEUW_UtilityFunction_SortMontageKeyArray_Statics::NewProp_OutKeys_Inner = { "OutKeys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEUW_UtilityFunction_SortMontageKeyArray_Statics::NewProp_OutKeys = { "OutKeys", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EUW_UtilityFunction_eventSortMontageKeyArray_Parms, OutKeys), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEUW_UtilityFunction_SortMontageKeyArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEUW_UtilityFunction_SortMontageKeyArray_Statics::NewProp_OutKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEUW_UtilityFunction_SortMontageKeyArray_Statics::NewProp_OutKeys,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEUW_UtilityFunction_SortMontageKeyArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EUW_UtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEUW_UtilityFunction_SortMontageKeyArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEUW_UtilityFunction, nullptr, "SortMontageKeyArray", nullptr, nullptr, sizeof(EUW_UtilityFunction_eventSortMontageKeyArray_Parms), Z_Construct_UFunction_UEUW_UtilityFunction_SortMontageKeyArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEUW_UtilityFunction_SortMontageKeyArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEUW_UtilityFunction_SortMontageKeyArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEUW_UtilityFunction_SortMontageKeyArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEUW_UtilityFunction_SortMontageKeyArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEUW_UtilityFunction_SortMontageKeyArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEUW_UtilityFunction_NoRegister()
	{
		return UEUW_UtilityFunction::StaticClass();
	}
	struct Z_Construct_UClass_UEUW_UtilityFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEUW_UtilityFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEUW_UtilityFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEUW_UtilityFunction_InitializeComponent, "InitializeComponent" }, // 878819466
		{ &Z_Construct_UFunction_UEUW_UtilityFunction_SortMontageKeyArray, "SortMontageKeyArray" }, // 1961570117
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEUW_UtilityFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EUW_UtilityFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EUW_UtilityFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEUW_UtilityFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEUW_UtilityFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEUW_UtilityFunction_Statics::ClassParams = {
		&UEUW_UtilityFunction::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEUW_UtilityFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEUW_UtilityFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEUW_UtilityFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEUW_UtilityFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEUW_UtilityFunction, 3681784749);
	template<> ABP_200508_API UClass* StaticClass<UEUW_UtilityFunction>()
	{
		return UEUW_UtilityFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEUW_UtilityFunction(Z_Construct_UClass_UEUW_UtilityFunction, &UEUW_UtilityFunction::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UEUW_UtilityFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEUW_UtilityFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
