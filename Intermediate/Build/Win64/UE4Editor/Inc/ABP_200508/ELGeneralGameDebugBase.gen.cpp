// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELGeneralGameDebugBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELGeneralGameDebugBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELGeneralGameDebugBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELGeneralGameDebugBase();
	ELITE_CORE_API UClass* Z_Construct_UClass_UEasyInstancedHelper();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELGeneralGameDebugBase::execGetWorldForBP)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorld**)Z_Param__Result=P_THIS->GetWorldForBP(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UELGeneralGameDebugBase::StaticRegisterNativesUELGeneralGameDebugBase()
	{
		UClass* Class = UELGeneralGameDebugBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetWorldForBP", &UELGeneralGameDebugBase::execGetWorldForBP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELGeneralGameDebugBase_GetWorldForBP_Statics
	{
		struct ELGeneralGameDebugBase_eventGetWorldForBP_Parms
		{
			const UObject* WorldContextObject;
			UWorld* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGeneralGameDebugBase_GetWorldForBP_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGeneralGameDebugBase_GetWorldForBP_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGeneralGameDebugBase_eventGetWorldForBP_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELGeneralGameDebugBase_GetWorldForBP_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGeneralGameDebugBase_GetWorldForBP_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGeneralGameDebugBase_GetWorldForBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGeneralGameDebugBase_eventGetWorldForBP_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGeneralGameDebugBase_GetWorldForBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGeneralGameDebugBase_GetWorldForBP_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGeneralGameDebugBase_GetWorldForBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGeneralGameDebugBase_GetWorldForBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGeneralGameDebugBase.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGeneralGameDebugBase_GetWorldForBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGeneralGameDebugBase, nullptr, "GetWorldForBP", nullptr, nullptr, sizeof(ELGeneralGameDebugBase_eventGetWorldForBP_Parms), Z_Construct_UFunction_UELGeneralGameDebugBase_GetWorldForBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGeneralGameDebugBase_GetWorldForBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGeneralGameDebugBase_GetWorldForBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGeneralGameDebugBase_GetWorldForBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGeneralGameDebugBase_GetWorldForBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGeneralGameDebugBase_GetWorldForBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELGeneralGameDebugBase_NoRegister()
	{
		return UELGeneralGameDebugBase::StaticClass();
	}
	struct Z_Construct_UClass_UELGeneralGameDebugBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELGeneralGameDebugBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEasyInstancedHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELGeneralGameDebugBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELGeneralGameDebugBase_GetWorldForBP, "GetWorldForBP" }, // 416776111
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGeneralGameDebugBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELGeneralGameDebugBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELGeneralGameDebugBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELGeneralGameDebugBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELGeneralGameDebugBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELGeneralGameDebugBase_Statics::ClassParams = {
		&UELGeneralGameDebugBase::StaticClass,
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
		0x001000A2u,
		METADATA_PARAMS(Z_Construct_UClass_UELGeneralGameDebugBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELGeneralGameDebugBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELGeneralGameDebugBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELGeneralGameDebugBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELGeneralGameDebugBase, 1289572242);
	template<> ABP_200508_API UClass* StaticClass<UELGeneralGameDebugBase>()
	{
		return UELGeneralGameDebugBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELGeneralGameDebugBase(Z_Construct_UClass_UELGeneralGameDebugBase, &UELGeneralGameDebugBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELGeneralGameDebugBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELGeneralGameDebugBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
