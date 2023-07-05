// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/YCreate_DebugMenuBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYCreate_DebugMenuBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UYCreate_DebugMenuBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UYCreate_DebugMenuBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(UYCreate_DebugMenuBase::execSetLogString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__LogString);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLogString(Z_Param__LogString);
		P_NATIVE_END;
	}
	void UYCreate_DebugMenuBase::StaticRegisterNativesUYCreate_DebugMenuBase()
	{
		UClass* Class = UYCreate_DebugMenuBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetLogString", &UYCreate_DebugMenuBase::execSetLogString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYCreate_DebugMenuBase_SetLogString_Statics
	{
		struct YCreate_DebugMenuBase_eventSetLogString_Parms
		{
			FString _LogString;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__LogString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__LogString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCreate_DebugMenuBase_SetLogString_Statics::NewProp__LogString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYCreate_DebugMenuBase_SetLogString_Statics::NewProp__LogString = { "_LogString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YCreate_DebugMenuBase_eventSetLogString_Parms, _LogString), METADATA_PARAMS(Z_Construct_UFunction_UYCreate_DebugMenuBase_SetLogString_Statics::NewProp__LogString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCreate_DebugMenuBase_SetLogString_Statics::NewProp__LogString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYCreate_DebugMenuBase_SetLogString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYCreate_DebugMenuBase_SetLogString_Statics::NewProp__LogString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCreate_DebugMenuBase_SetLogString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCreate_DebugMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYCreate_DebugMenuBase_SetLogString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYCreate_DebugMenuBase, nullptr, "SetLogString", nullptr, nullptr, sizeof(YCreate_DebugMenuBase_eventSetLogString_Parms), Z_Construct_UFunction_UYCreate_DebugMenuBase_SetLogString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCreate_DebugMenuBase_SetLogString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYCreate_DebugMenuBase_SetLogString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCreate_DebugMenuBase_SetLogString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYCreate_DebugMenuBase_SetLogString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYCreate_DebugMenuBase_SetLogString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYCreate_DebugMenuBase_NoRegister()
	{
		return UYCreate_DebugMenuBase::StaticClass();
	}
	struct Z_Construct_UClass_UYCreate_DebugMenuBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYCreate_DebugMenuBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYCreate_DebugMenuBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYCreate_DebugMenuBase_SetLogString, "SetLogString" }, // 676445806
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYCreate_DebugMenuBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YCreate_DebugMenuBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YCreate_DebugMenuBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYCreate_DebugMenuBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYCreate_DebugMenuBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYCreate_DebugMenuBase_Statics::ClassParams = {
		&UYCreate_DebugMenuBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UYCreate_DebugMenuBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYCreate_DebugMenuBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYCreate_DebugMenuBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYCreate_DebugMenuBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYCreate_DebugMenuBase, 3069327387);
	template<> ABP_200508_API UClass* StaticClass<UYCreate_DebugMenuBase>()
	{
		return UYCreate_DebugMenuBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYCreate_DebugMenuBase(Z_Construct_UClass_UYCreate_DebugMenuBase, &UYCreate_DebugMenuBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UYCreate_DebugMenuBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYCreate_DebugMenuBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
