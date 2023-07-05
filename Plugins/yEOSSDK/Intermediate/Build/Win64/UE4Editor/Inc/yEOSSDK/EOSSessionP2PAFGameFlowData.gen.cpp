// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSessionP2PAFGameFlowData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSessionP2PAFGameFlowData() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PAFGameFlowData_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PAFGameFlowData();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLockebleCommon();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PAFGameFlowStep();
// End Cross Module References
	DEFINE_FUNCTION(UEOSSessionP2PAFGameFlowData::execChangeGameFlow)
	{
		P_GET_ENUM(EEOSSessionP2PAFGameFlowStep,Z_Param__enStep);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ChangeGameFlow(EEOSSessionP2PAFGameFlowStep(Z_Param__enStep));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PAFGameFlowData::execGetGameFlowStep)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSSessionP2PAFGameFlowStep*)Z_Param__Result=P_THIS->GetGameFlowStep();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PAFGameFlowData::execGetPossibleChangeGameFlowStep)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSSessionP2PAFGameFlowStep*)Z_Param__Result=P_THIS->GetPossibleChangeGameFlowStep();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PAFGameFlowData::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PAFGameFlowData::execSetPossibleChangeGameFlowStep)
	{
		P_GET_ENUM(EEOSSessionP2PAFGameFlowStep,Z_Param__enStep);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPossibleChangeGameFlowStep(EEOSSessionP2PAFGameFlowStep(Z_Param__enStep));
		P_NATIVE_END;
	}
	void UEOSSessionP2PAFGameFlowData::StaticRegisterNativesUEOSSessionP2PAFGameFlowData()
	{
		UClass* Class = UEOSSessionP2PAFGameFlowData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeGameFlow", &UEOSSessionP2PAFGameFlowData::execChangeGameFlow },
			{ "GetGameFlowStep", &UEOSSessionP2PAFGameFlowData::execGetGameFlowStep },
			{ "GetPossibleChangeGameFlowStep", &UEOSSessionP2PAFGameFlowData::execGetPossibleChangeGameFlowStep },
			{ "Reset", &UEOSSessionP2PAFGameFlowData::execReset },
			{ "SetPossibleChangeGameFlowStep", &UEOSSessionP2PAFGameFlowData::execSetPossibleChangeGameFlowStep },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_ChangeGameFlow_Statics
	{
		struct EOSSessionP2PAFGameFlowData_eventChangeGameFlow_Parms
		{
			EEOSSessionP2PAFGameFlowStep _enStep;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enStep_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enStep;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_ChangeGameFlow_Statics::NewProp__enStep_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_ChangeGameFlow_Statics::NewProp__enStep = { "_enStep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFGameFlowData_eventChangeGameFlow_Parms, _enStep), Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PAFGameFlowStep, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_ChangeGameFlow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PAFGameFlowData_eventChangeGameFlow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_ChangeGameFlow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PAFGameFlowData_eventChangeGameFlow_Parms), &Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_ChangeGameFlow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_ChangeGameFlow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_ChangeGameFlow_Statics::NewProp__enStep_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_ChangeGameFlow_Statics::NewProp__enStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_ChangeGameFlow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_ChangeGameFlow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFGameFlowData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_ChangeGameFlow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFGameFlowData, nullptr, "ChangeGameFlow", nullptr, nullptr, sizeof(EOSSessionP2PAFGameFlowData_eventChangeGameFlow_Parms), Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_ChangeGameFlow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_ChangeGameFlow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_ChangeGameFlow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_ChangeGameFlow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_ChangeGameFlow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_ChangeGameFlow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_GetGameFlowStep_Statics
	{
		struct EOSSessionP2PAFGameFlowData_eventGetGameFlowStep_Parms
		{
			EEOSSessionP2PAFGameFlowStep ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_GetGameFlowStep_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_GetGameFlowStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFGameFlowData_eventGetGameFlowStep_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PAFGameFlowStep, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_GetGameFlowStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_GetGameFlowStep_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_GetGameFlowStep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_GetGameFlowStep_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFGameFlowData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_GetGameFlowStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFGameFlowData, nullptr, "GetGameFlowStep", nullptr, nullptr, sizeof(EOSSessionP2PAFGameFlowData_eventGetGameFlowStep_Parms), Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_GetGameFlowStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_GetGameFlowStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_GetGameFlowStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_GetGameFlowStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_GetGameFlowStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_GetGameFlowStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_GetPossibleChangeGameFlowStep_Statics
	{
		struct EOSSessionP2PAFGameFlowData_eventGetPossibleChangeGameFlowStep_Parms
		{
			EEOSSessionP2PAFGameFlowStep ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_GetPossibleChangeGameFlowStep_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_GetPossibleChangeGameFlowStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFGameFlowData_eventGetPossibleChangeGameFlowStep_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PAFGameFlowStep, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_GetPossibleChangeGameFlowStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_GetPossibleChangeGameFlowStep_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_GetPossibleChangeGameFlowStep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_GetPossibleChangeGameFlowStep_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFGameFlowData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_GetPossibleChangeGameFlowStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFGameFlowData, nullptr, "GetPossibleChangeGameFlowStep", nullptr, nullptr, sizeof(EOSSessionP2PAFGameFlowData_eventGetPossibleChangeGameFlowStep_Parms), Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_GetPossibleChangeGameFlowStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_GetPossibleChangeGameFlowStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_GetPossibleChangeGameFlowStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_GetPossibleChangeGameFlowStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_GetPossibleChangeGameFlowStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_GetPossibleChangeGameFlowStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFGameFlowData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFGameFlowData, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_SetPossibleChangeGameFlowStep_Statics
	{
		struct EOSSessionP2PAFGameFlowData_eventSetPossibleChangeGameFlowStep_Parms
		{
			EEOSSessionP2PAFGameFlowStep _enStep;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enStep_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enStep;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_SetPossibleChangeGameFlowStep_Statics::NewProp__enStep_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_SetPossibleChangeGameFlowStep_Statics::NewProp__enStep = { "_enStep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFGameFlowData_eventSetPossibleChangeGameFlowStep_Parms, _enStep), Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PAFGameFlowStep, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_SetPossibleChangeGameFlowStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_SetPossibleChangeGameFlowStep_Statics::NewProp__enStep_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_SetPossibleChangeGameFlowStep_Statics::NewProp__enStep,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_SetPossibleChangeGameFlowStep_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFGameFlowData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_SetPossibleChangeGameFlowStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFGameFlowData, nullptr, "SetPossibleChangeGameFlowStep", nullptr, nullptr, sizeof(EOSSessionP2PAFGameFlowData_eventSetPossibleChangeGameFlowStep_Parms), Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_SetPossibleChangeGameFlowStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_SetPossibleChangeGameFlowStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_SetPossibleChangeGameFlowStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_SetPossibleChangeGameFlowStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_SetPossibleChangeGameFlowStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_SetPossibleChangeGameFlowStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSSessionP2PAFGameFlowData_NoRegister()
	{
		return UEOSSessionP2PAFGameFlowData::StaticClass();
	}
	struct Z_Construct_UClass_UEOSSessionP2PAFGameFlowData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSSessionP2PAFGameFlowData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSLockebleCommon,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSSessionP2PAFGameFlowData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_ChangeGameFlow, "ChangeGameFlow" }, // 1041209435
		{ &Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_GetGameFlowStep, "GetGameFlowStep" }, // 2772369793
		{ &Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_GetPossibleChangeGameFlowStep, "GetPossibleChangeGameFlowStep" }, // 1193895510
		{ &Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_Reset, "Reset" }, // 3280662198
		{ &Z_Construct_UFunction_UEOSSessionP2PAFGameFlowData_SetPossibleChangeGameFlowStep, "SetPossibleChangeGameFlowStep" }, // 2018208702
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2PAFGameFlowData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSSessionP2PAFGameFlowData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFGameFlowData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSSessionP2PAFGameFlowData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSSessionP2PAFGameFlowData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSSessionP2PAFGameFlowData_Statics::ClassParams = {
		&UEOSSessionP2PAFGameFlowData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2PAFGameFlowData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2PAFGameFlowData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSSessionP2PAFGameFlowData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSSessionP2PAFGameFlowData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSSessionP2PAFGameFlowData, 722304455);
	template<> YEOSSDK_API UClass* StaticClass<UEOSSessionP2PAFGameFlowData>()
	{
		return UEOSSessionP2PAFGameFlowData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSSessionP2PAFGameFlowData(Z_Construct_UClass_UEOSSessionP2PAFGameFlowData, &UEOSSessionP2PAFGameFlowData::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSSessionP2PAFGameFlowData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSSessionP2PAFGameFlowData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
