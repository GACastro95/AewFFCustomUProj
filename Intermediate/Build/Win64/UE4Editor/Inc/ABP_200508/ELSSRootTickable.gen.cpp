// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSRootTickable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSRootTickable() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSRootTickable_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSRootTickable();
	ELITE_CORE_API UClass* Z_Construct_UClass_UGameSingleton();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(UELSSRootTickable::execOnInitialize_Native)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInitialize_Native();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSRootTickable::execOnPostTick_Native)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPostTick_Native(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSRootTickable::execOnPreTick_Native)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPreTick_Native(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSRootTickable::execOnTick_Native)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTick_Native(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	void UELSSRootTickable::StaticRegisterNativesUELSSRootTickable()
	{
		UClass* Class = UELSSRootTickable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInitialize_Native", &UELSSRootTickable::execOnInitialize_Native },
			{ "OnPostTick_Native", &UELSSRootTickable::execOnPostTick_Native },
			{ "OnPreTick_Native", &UELSSRootTickable::execOnPreTick_Native },
			{ "OnTick_Native", &UELSSRootTickable::execOnTick_Native },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSRootTickable_OnInitialize_Native_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSRootTickable_OnInitialize_Native_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSRootTickable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSRootTickable_OnInitialize_Native_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSRootTickable, nullptr, "OnInitialize_Native", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSRootTickable_OnInitialize_Native_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSRootTickable_OnInitialize_Native_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSRootTickable_OnInitialize_Native()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSRootTickable_OnInitialize_Native_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSRootTickable_OnPostTick_Native_Statics
	{
		struct ELSSRootTickable_eventOnPostTick_Native_Parms
		{
			float DeltaSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSRootTickable_OnPostTick_Native_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSRootTickable_eventOnPostTick_Native_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSRootTickable_OnPostTick_Native_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSRootTickable_OnPostTick_Native_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSRootTickable_OnPostTick_Native_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSRootTickable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSRootTickable_OnPostTick_Native_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSRootTickable, nullptr, "OnPostTick_Native", nullptr, nullptr, sizeof(ELSSRootTickable_eventOnPostTick_Native_Parms), Z_Construct_UFunction_UELSSRootTickable_OnPostTick_Native_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSRootTickable_OnPostTick_Native_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSRootTickable_OnPostTick_Native_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSRootTickable_OnPostTick_Native_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSRootTickable_OnPostTick_Native()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSRootTickable_OnPostTick_Native_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSRootTickable_OnPreTick_Native_Statics
	{
		struct ELSSRootTickable_eventOnPreTick_Native_Parms
		{
			float DeltaSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSRootTickable_OnPreTick_Native_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSRootTickable_eventOnPreTick_Native_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSRootTickable_OnPreTick_Native_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSRootTickable_OnPreTick_Native_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSRootTickable_OnPreTick_Native_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSRootTickable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSRootTickable_OnPreTick_Native_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSRootTickable, nullptr, "OnPreTick_Native", nullptr, nullptr, sizeof(ELSSRootTickable_eventOnPreTick_Native_Parms), Z_Construct_UFunction_UELSSRootTickable_OnPreTick_Native_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSRootTickable_OnPreTick_Native_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSRootTickable_OnPreTick_Native_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSRootTickable_OnPreTick_Native_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSRootTickable_OnPreTick_Native()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSRootTickable_OnPreTick_Native_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSRootTickable_OnTick_Native_Statics
	{
		struct ELSSRootTickable_eventOnTick_Native_Parms
		{
			float DeltaSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSRootTickable_OnTick_Native_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSRootTickable_eventOnTick_Native_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSRootTickable_OnTick_Native_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSRootTickable_OnTick_Native_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSRootTickable_OnTick_Native_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSRootTickable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSRootTickable_OnTick_Native_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSRootTickable, nullptr, "OnTick_Native", nullptr, nullptr, sizeof(ELSSRootTickable_eventOnTick_Native_Parms), Z_Construct_UFunction_UELSSRootTickable_OnTick_Native_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSRootTickable_OnTick_Native_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSRootTickable_OnTick_Native_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSRootTickable_OnTick_Native_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSRootTickable_OnTick_Native()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSRootTickable_OnTick_Native_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSRootTickable_NoRegister()
	{
		return UELSSRootTickable::StaticClass();
	}
	struct Z_Construct_UClass_UELSSRootTickable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSRootTickable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameSingleton,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSRootTickable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSRootTickable_OnInitialize_Native, "OnInitialize_Native" }, // 2580997658
		{ &Z_Construct_UFunction_UELSSRootTickable_OnPostTick_Native, "OnPostTick_Native" }, // 60212011
		{ &Z_Construct_UFunction_UELSSRootTickable_OnPreTick_Native, "OnPreTick_Native" }, // 3651003245
		{ &Z_Construct_UFunction_UELSSRootTickable_OnTick_Native, "OnTick_Native" }, // 1954343816
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSRootTickable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSRootTickable.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSRootTickable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSRootTickable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSRootTickable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSRootTickable_Statics::ClassParams = {
		&UELSSRootTickable::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELSSRootTickable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSRootTickable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSRootTickable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSRootTickable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSRootTickable, 1327706445);
	template<> ABP_200508_API UClass* StaticClass<UELSSRootTickable>()
	{
		return UELSSRootTickable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSRootTickable(Z_Construct_UClass_UELSSRootTickable, &UELSSRootTickable::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSRootTickable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSRootTickable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
