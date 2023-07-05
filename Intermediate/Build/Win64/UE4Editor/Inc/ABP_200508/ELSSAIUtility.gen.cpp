// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSAIUtility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSAIUtility() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSAIUtility_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSAIUtility();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSAIUtility::execGetProbabilityIndexByWeighting)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(float,Z_Param_Out_probDatas);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELSSAIUtility::GetProbabilityIndexByWeighting(Z_Param_WorldContextObject,Z_Param_Out_probDatas);
		P_NATIVE_END;
	}
	void UELSSAIUtility::StaticRegisterNativesUELSSAIUtility()
	{
		UClass* Class = UELSSAIUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetProbabilityIndexByWeighting", &UELSSAIUtility::execGetProbabilityIndexByWeighting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSAIUtility_GetProbabilityIndexByWeighting_Statics
	{
		struct ELSSAIUtility_eventGetProbabilityIndexByWeighting_Parms
		{
			const UObject* WorldContextObject;
			TArray<float> probDatas;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_probDatas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_probDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_probDatas;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAIUtility_GetProbabilityIndexByWeighting_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAIUtility_GetProbabilityIndexByWeighting_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAIUtility_eventGetProbabilityIndexByWeighting_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSAIUtility_GetProbabilityIndexByWeighting_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAIUtility_GetProbabilityIndexByWeighting_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSAIUtility_GetProbabilityIndexByWeighting_Statics::NewProp_probDatas_Inner = { "probDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAIUtility_GetProbabilityIndexByWeighting_Statics::NewProp_probDatas_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELSSAIUtility_GetProbabilityIndexByWeighting_Statics::NewProp_probDatas = { "probDatas", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAIUtility_eventGetProbabilityIndexByWeighting_Parms, probDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELSSAIUtility_GetProbabilityIndexByWeighting_Statics::NewProp_probDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAIUtility_GetProbabilityIndexByWeighting_Statics::NewProp_probDatas_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSAIUtility_GetProbabilityIndexByWeighting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAIUtility_eventGetProbabilityIndexByWeighting_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSAIUtility_GetProbabilityIndexByWeighting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAIUtility_GetProbabilityIndexByWeighting_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAIUtility_GetProbabilityIndexByWeighting_Statics::NewProp_probDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAIUtility_GetProbabilityIndexByWeighting_Statics::NewProp_probDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAIUtility_GetProbabilityIndexByWeighting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAIUtility_GetProbabilityIndexByWeighting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSAIUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSAIUtility_GetProbabilityIndexByWeighting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSAIUtility, nullptr, "GetProbabilityIndexByWeighting", nullptr, nullptr, sizeof(ELSSAIUtility_eventGetProbabilityIndexByWeighting_Parms), Z_Construct_UFunction_UELSSAIUtility_GetProbabilityIndexByWeighting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAIUtility_GetProbabilityIndexByWeighting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSAIUtility_GetProbabilityIndexByWeighting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAIUtility_GetProbabilityIndexByWeighting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSAIUtility_GetProbabilityIndexByWeighting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSAIUtility_GetProbabilityIndexByWeighting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSAIUtility_NoRegister()
	{
		return UELSSAIUtility::StaticClass();
	}
	struct Z_Construct_UClass_UELSSAIUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSAIUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSAIUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSAIUtility_GetProbabilityIndexByWeighting, "GetProbabilityIndexByWeighting" }, // 793934510
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAIUtility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSAIUtility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSAIUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSAIUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSAIUtility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSAIUtility_Statics::ClassParams = {
		&UELSSAIUtility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELSSAIUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAIUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSAIUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSAIUtility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSAIUtility, 1137896541);
	template<> ABP_200508_API UClass* StaticClass<UELSSAIUtility>()
	{
		return UELSSAIUtility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSAIUtility(Z_Construct_UClass_UELSSAIUtility, &UELSSAIUtility::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSAIUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSAIUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
