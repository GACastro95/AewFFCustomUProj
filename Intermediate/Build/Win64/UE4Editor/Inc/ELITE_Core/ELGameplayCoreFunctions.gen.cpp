// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/ELGameplayCoreFunctions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELGameplayCoreFunctions() {}
// Cross Module References
	ELITE_CORE_API UClass* Z_Construct_UClass_UELGameplayCoreFunctions_NoRegister();
	ELITE_CORE_API UClass* Z_Construct_UClass_UELGameplayCoreFunctions();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EBasicFunctionResult();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELGameplayCoreFunctions::execGetAverageFPS)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UELGameplayCoreFunctions::GetAverageFPS();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGameplayCoreFunctions::execGetAverageMS)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UELGameplayCoreFunctions::GetAverageMS();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGameplayCoreFunctions::execGetGameModeAs)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_GET_ENUM_REF(EBasicFunctionResult,Z_Param_Out_resultType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGameModeBase**)Z_Param__Result=UELGameplayCoreFunctions::GetGameModeAs(Z_Param_WorldContextObject,Z_Param_Class,(EBasicFunctionResult&)(Z_Param_Out_resultType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGameplayCoreFunctions::execGetGameStateAs)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_GET_ENUM_REF(EBasicFunctionResult,Z_Param_Out_resultType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGameStateBase**)Z_Param__Result=UELGameplayCoreFunctions::GetGameStateAs(Z_Param_WorldContextObject,Z_Param_Class,(EBasicFunctionResult&)(Z_Param_Out_resultType));
		P_NATIVE_END;
	}
	void UELGameplayCoreFunctions::StaticRegisterNativesUELGameplayCoreFunctions()
	{
		UClass* Class = UELGameplayCoreFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAverageFPS", &UELGameplayCoreFunctions::execGetAverageFPS },
			{ "GetAverageMS", &UELGameplayCoreFunctions::execGetAverageMS },
			{ "GetGameModeAs", &UELGameplayCoreFunctions::execGetGameModeAs },
			{ "GetGameStateAs", &UELGameplayCoreFunctions::execGetGameStateAs },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELGameplayCoreFunctions_GetAverageFPS_Statics
	{
		struct ELGameplayCoreFunctions_eventGetAverageFPS_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELGameplayCoreFunctions_GetAverageFPS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayCoreFunctions_eventGetAverageFPS_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameplayCoreFunctions_GetAverageFPS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayCoreFunctions_GetAverageFPS_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameplayCoreFunctions_GetAverageFPS_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameplayCoreFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameplayCoreFunctions_GetAverageFPS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameplayCoreFunctions, nullptr, "GetAverageFPS", nullptr, nullptr, sizeof(ELGameplayCoreFunctions_eventGetAverageFPS_Parms), Z_Construct_UFunction_UELGameplayCoreFunctions_GetAverageFPS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayCoreFunctions_GetAverageFPS_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameplayCoreFunctions_GetAverageFPS_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayCoreFunctions_GetAverageFPS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameplayCoreFunctions_GetAverageFPS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameplayCoreFunctions_GetAverageFPS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGameplayCoreFunctions_GetAverageMS_Statics
	{
		struct ELGameplayCoreFunctions_eventGetAverageMS_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELGameplayCoreFunctions_GetAverageMS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayCoreFunctions_eventGetAverageMS_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameplayCoreFunctions_GetAverageMS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayCoreFunctions_GetAverageMS_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameplayCoreFunctions_GetAverageMS_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameplayCoreFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameplayCoreFunctions_GetAverageMS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameplayCoreFunctions, nullptr, "GetAverageMS", nullptr, nullptr, sizeof(ELGameplayCoreFunctions_eventGetAverageMS_Parms), Z_Construct_UFunction_UELGameplayCoreFunctions_GetAverageMS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayCoreFunctions_GetAverageMS_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameplayCoreFunctions_GetAverageMS_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayCoreFunctions_GetAverageMS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameplayCoreFunctions_GetAverageMS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameplayCoreFunctions_GetAverageMS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameModeAs_Statics
	{
		struct ELGameplayCoreFunctions_eventGetGameModeAs_Parms
		{
			const UObject* WorldContextObject;
			const TSubclassOf<AGameModeBase>  Class;
			EBasicFunctionResult resultType;
			AGameModeBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_resultType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_resultType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameModeAs_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameModeAs_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayCoreFunctions_eventGetGameModeAs_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameModeAs_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameModeAs_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameModeAs_Statics::NewProp_Class_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameModeAs_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayCoreFunctions_eventGetGameModeAs_Parms, Class), Z_Construct_UClass_AGameModeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameModeAs_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameModeAs_Statics::NewProp_Class_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameModeAs_Statics::NewProp_resultType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameModeAs_Statics::NewProp_resultType = { "resultType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayCoreFunctions_eventGetGameModeAs_Parms, resultType), Z_Construct_UEnum_ELITE_Core_EBasicFunctionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameModeAs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayCoreFunctions_eventGetGameModeAs_Parms, ReturnValue), Z_Construct_UClass_AGameModeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameModeAs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameModeAs_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameModeAs_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameModeAs_Statics::NewProp_resultType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameModeAs_Statics::NewProp_resultType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameModeAs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameModeAs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameplayCoreFunctions.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameModeAs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameplayCoreFunctions, nullptr, "GetGameModeAs", nullptr, nullptr, sizeof(ELGameplayCoreFunctions_eventGetGameModeAs_Parms), Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameModeAs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameModeAs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameModeAs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameModeAs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameModeAs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameModeAs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameStateAs_Statics
	{
		struct ELGameplayCoreFunctions_eventGetGameStateAs_Parms
		{
			const UObject* WorldContextObject;
			const TSubclassOf<AGameStateBase>  Class;
			EBasicFunctionResult resultType;
			AGameStateBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_resultType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_resultType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameStateAs_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameStateAs_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayCoreFunctions_eventGetGameStateAs_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameStateAs_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameStateAs_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameStateAs_Statics::NewProp_Class_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameStateAs_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayCoreFunctions_eventGetGameStateAs_Parms, Class), Z_Construct_UClass_AGameStateBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameStateAs_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameStateAs_Statics::NewProp_Class_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameStateAs_Statics::NewProp_resultType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameStateAs_Statics::NewProp_resultType = { "resultType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayCoreFunctions_eventGetGameStateAs_Parms, resultType), Z_Construct_UEnum_ELITE_Core_EBasicFunctionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameStateAs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameplayCoreFunctions_eventGetGameStateAs_Parms, ReturnValue), Z_Construct_UClass_AGameStateBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameStateAs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameStateAs_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameStateAs_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameStateAs_Statics::NewProp_resultType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameStateAs_Statics::NewProp_resultType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameStateAs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameStateAs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameplayCoreFunctions.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameStateAs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameplayCoreFunctions, nullptr, "GetGameStateAs", nullptr, nullptr, sizeof(ELGameplayCoreFunctions_eventGetGameStateAs_Parms), Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameStateAs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameStateAs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameStateAs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameStateAs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameStateAs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameStateAs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELGameplayCoreFunctions_NoRegister()
	{
		return UELGameplayCoreFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UELGameplayCoreFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELGameplayCoreFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Core,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELGameplayCoreFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELGameplayCoreFunctions_GetAverageFPS, "GetAverageFPS" }, // 1848329809
		{ &Z_Construct_UFunction_UELGameplayCoreFunctions_GetAverageMS, "GetAverageMS" }, // 751018409
		{ &Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameModeAs, "GetGameModeAs" }, // 2574458874
		{ &Z_Construct_UFunction_UELGameplayCoreFunctions_GetGameStateAs, "GetGameStateAs" }, // 452115240
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGameplayCoreFunctions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELGameplayCoreFunctions.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELGameplayCoreFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELGameplayCoreFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELGameplayCoreFunctions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELGameplayCoreFunctions_Statics::ClassParams = {
		&UELGameplayCoreFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELGameplayCoreFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELGameplayCoreFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELGameplayCoreFunctions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELGameplayCoreFunctions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELGameplayCoreFunctions, 1560039978);
	template<> ELITE_CORE_API UClass* StaticClass<UELGameplayCoreFunctions>()
	{
		return UELGameplayCoreFunctions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELGameplayCoreFunctions(Z_Construct_UClass_UELGameplayCoreFunctions, &UELGameplayCoreFunctions::StaticClass, TEXT("/Script/ELITE_Core"), TEXT("UELGameplayCoreFunctions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELGameplayCoreFunctions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
