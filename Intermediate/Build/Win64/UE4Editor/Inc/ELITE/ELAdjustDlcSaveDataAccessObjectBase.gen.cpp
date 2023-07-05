// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELAdjustDlcSaveDataAccessObjectBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELAdjustDlcSaveDataAccessObjectBase() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ESaveDataType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FUnavailableDlcData();
	ELITE_API UFunction* Z_Construct_UDelegateFunction_ELITE_AdjustedDlcSaveDataDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELAdjustDlcSaveDataAccessObjectBase::execCheckAdjustDlcSaveData)
	{
		P_GET_ENUM(ESaveDataType,Z_Param_SaveDataType);
		P_GET_OBJECT(UObject,Z_Param_Outer);
		P_GET_STRUCT(FUnavailableDlcData,Z_Param__unavailableDlcData);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELAdjustDlcSaveDataAccessObjectBase**)Z_Param__Result=UELAdjustDlcSaveDataAccessObjectBase::CheckAdjustDlcSaveData(ESaveDataType(Z_Param_SaveDataType),Z_Param_Outer,Z_Param__unavailableDlcData,FAdjustedDlcSaveDataDelegate(Z_Param_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAdjustDlcSaveDataAccessObjectBase::execCreateAdjustDlcSaveDataAccessObject)
	{
		P_GET_ENUM(ESaveDataType,Z_Param_SaveDataType);
		P_GET_OBJECT(UObject,Z_Param_Outer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELAdjustDlcSaveDataAccessObjectBase**)Z_Param__Result=UELAdjustDlcSaveDataAccessObjectBase::CreateAdjustDlcSaveDataAccessObject(ESaveDataType(Z_Param_SaveDataType),Z_Param_Outer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAdjustDlcSaveDataAccessObjectBase::execEndCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndCheck();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAdjustDlcSaveDataAccessObjectBase::execOnStartCheck)
	{
		P_GET_STRUCT(FUnavailableDlcData,Z_Param__unavailableDlcData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartCheck_Implementation(Z_Param__unavailableDlcData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAdjustDlcSaveDataAccessObjectBase::execStartCheck)
	{
		P_GET_STRUCT(FUnavailableDlcData,Z_Param__unavailableDlcData);
		P_GET_PROPERTY(FDelegateProperty,Z_Param__delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartCheck(Z_Param__unavailableDlcData,FAdjustedDlcSaveDataDelegate(Z_Param__delegate));
		P_NATIVE_END;
	}
	static FName NAME_UELAdjustDlcSaveDataAccessObjectBase_OnStartCheck = FName(TEXT("OnStartCheck"));
	void UELAdjustDlcSaveDataAccessObjectBase::OnStartCheck(FUnavailableDlcData _unavailableDlcData)
	{
		ELAdjustDlcSaveDataAccessObjectBase_eventOnStartCheck_Parms Parms;
		Parms._unavailableDlcData=_unavailableDlcData;
		ProcessEvent(FindFunctionChecked(NAME_UELAdjustDlcSaveDataAccessObjectBase_OnStartCheck),&Parms);
	}
	void UELAdjustDlcSaveDataAccessObjectBase::StaticRegisterNativesUELAdjustDlcSaveDataAccessObjectBase()
	{
		UClass* Class = UELAdjustDlcSaveDataAccessObjectBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckAdjustDlcSaveData", &UELAdjustDlcSaveDataAccessObjectBase::execCheckAdjustDlcSaveData },
			{ "CreateAdjustDlcSaveDataAccessObject", &UELAdjustDlcSaveDataAccessObjectBase::execCreateAdjustDlcSaveDataAccessObject },
			{ "EndCheck", &UELAdjustDlcSaveDataAccessObjectBase::execEndCheck },
			{ "OnStartCheck", &UELAdjustDlcSaveDataAccessObjectBase::execOnStartCheck },
			{ "StartCheck", &UELAdjustDlcSaveDataAccessObjectBase::execStartCheck },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CheckAdjustDlcSaveData_Statics
	{
		struct ELAdjustDlcSaveDataAccessObjectBase_eventCheckAdjustDlcSaveData_Parms
		{
			ESaveDataType SaveDataType;
			UObject* Outer;
			FUnavailableDlcData _unavailableDlcData;
			FScriptDelegate Delegate;
			UELAdjustDlcSaveDataAccessObjectBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SaveDataType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveDataType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SaveDataType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Outer;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__unavailableDlcData;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CheckAdjustDlcSaveData_Statics::NewProp_SaveDataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CheckAdjustDlcSaveData_Statics::NewProp_SaveDataType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CheckAdjustDlcSaveData_Statics::NewProp_SaveDataType = { "SaveDataType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAdjustDlcSaveDataAccessObjectBase_eventCheckAdjustDlcSaveData_Parms, SaveDataType), Z_Construct_UEnum_ELITE_Game_ESaveDataType, METADATA_PARAMS(Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CheckAdjustDlcSaveData_Statics::NewProp_SaveDataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CheckAdjustDlcSaveData_Statics::NewProp_SaveDataType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CheckAdjustDlcSaveData_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAdjustDlcSaveDataAccessObjectBase_eventCheckAdjustDlcSaveData_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CheckAdjustDlcSaveData_Statics::NewProp__unavailableDlcData = { "_unavailableDlcData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAdjustDlcSaveDataAccessObjectBase_eventCheckAdjustDlcSaveData_Parms, _unavailableDlcData), Z_Construct_UScriptStruct_FUnavailableDlcData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CheckAdjustDlcSaveData_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAdjustDlcSaveDataAccessObjectBase_eventCheckAdjustDlcSaveData_Parms, Delegate), Z_Construct_UDelegateFunction_ELITE_AdjustedDlcSaveDataDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CheckAdjustDlcSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAdjustDlcSaveDataAccessObjectBase_eventCheckAdjustDlcSaveData_Parms, ReturnValue), Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CheckAdjustDlcSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CheckAdjustDlcSaveData_Statics::NewProp_SaveDataType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CheckAdjustDlcSaveData_Statics::NewProp_SaveDataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CheckAdjustDlcSaveData_Statics::NewProp_Outer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CheckAdjustDlcSaveData_Statics::NewProp__unavailableDlcData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CheckAdjustDlcSaveData_Statics::NewProp_Delegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CheckAdjustDlcSaveData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CheckAdjustDlcSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAdjustDlcSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CheckAdjustDlcSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase, nullptr, "CheckAdjustDlcSaveData", nullptr, nullptr, sizeof(ELAdjustDlcSaveDataAccessObjectBase_eventCheckAdjustDlcSaveData_Parms), Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CheckAdjustDlcSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CheckAdjustDlcSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CheckAdjustDlcSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CheckAdjustDlcSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CheckAdjustDlcSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CheckAdjustDlcSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CreateAdjustDlcSaveDataAccessObject_Statics
	{
		struct ELAdjustDlcSaveDataAccessObjectBase_eventCreateAdjustDlcSaveDataAccessObject_Parms
		{
			ESaveDataType SaveDataType;
			UObject* Outer;
			UELAdjustDlcSaveDataAccessObjectBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SaveDataType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveDataType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SaveDataType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Outer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CreateAdjustDlcSaveDataAccessObject_Statics::NewProp_SaveDataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CreateAdjustDlcSaveDataAccessObject_Statics::NewProp_SaveDataType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CreateAdjustDlcSaveDataAccessObject_Statics::NewProp_SaveDataType = { "SaveDataType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAdjustDlcSaveDataAccessObjectBase_eventCreateAdjustDlcSaveDataAccessObject_Parms, SaveDataType), Z_Construct_UEnum_ELITE_Game_ESaveDataType, METADATA_PARAMS(Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CreateAdjustDlcSaveDataAccessObject_Statics::NewProp_SaveDataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CreateAdjustDlcSaveDataAccessObject_Statics::NewProp_SaveDataType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CreateAdjustDlcSaveDataAccessObject_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAdjustDlcSaveDataAccessObjectBase_eventCreateAdjustDlcSaveDataAccessObject_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CreateAdjustDlcSaveDataAccessObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAdjustDlcSaveDataAccessObjectBase_eventCreateAdjustDlcSaveDataAccessObject_Parms, ReturnValue), Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CreateAdjustDlcSaveDataAccessObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CreateAdjustDlcSaveDataAccessObject_Statics::NewProp_SaveDataType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CreateAdjustDlcSaveDataAccessObject_Statics::NewProp_SaveDataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CreateAdjustDlcSaveDataAccessObject_Statics::NewProp_Outer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CreateAdjustDlcSaveDataAccessObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CreateAdjustDlcSaveDataAccessObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAdjustDlcSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CreateAdjustDlcSaveDataAccessObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase, nullptr, "CreateAdjustDlcSaveDataAccessObject", nullptr, nullptr, sizeof(ELAdjustDlcSaveDataAccessObjectBase_eventCreateAdjustDlcSaveDataAccessObject_Parms), Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CreateAdjustDlcSaveDataAccessObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CreateAdjustDlcSaveDataAccessObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CreateAdjustDlcSaveDataAccessObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CreateAdjustDlcSaveDataAccessObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CreateAdjustDlcSaveDataAccessObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CreateAdjustDlcSaveDataAccessObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_EndCheck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_EndCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAdjustDlcSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_EndCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase, nullptr, "EndCheck", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_EndCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_EndCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_EndCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_EndCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_OnStartCheck_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__unavailableDlcData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_OnStartCheck_Statics::NewProp__unavailableDlcData = { "_unavailableDlcData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAdjustDlcSaveDataAccessObjectBase_eventOnStartCheck_Parms, _unavailableDlcData), Z_Construct_UScriptStruct_FUnavailableDlcData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_OnStartCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_OnStartCheck_Statics::NewProp__unavailableDlcData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_OnStartCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAdjustDlcSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_OnStartCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase, nullptr, "OnStartCheck", nullptr, nullptr, sizeof(ELAdjustDlcSaveDataAccessObjectBase_eventOnStartCheck_Parms), Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_OnStartCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_OnStartCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_OnStartCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_OnStartCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_OnStartCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_OnStartCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_StartCheck_Statics
	{
		struct ELAdjustDlcSaveDataAccessObjectBase_eventStartCheck_Parms
		{
			FUnavailableDlcData _unavailableDlcData;
			FScriptDelegate _delegate;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__unavailableDlcData;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp__delegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_StartCheck_Statics::NewProp__unavailableDlcData = { "_unavailableDlcData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAdjustDlcSaveDataAccessObjectBase_eventStartCheck_Parms, _unavailableDlcData), Z_Construct_UScriptStruct_FUnavailableDlcData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_StartCheck_Statics::NewProp__delegate = { "_delegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAdjustDlcSaveDataAccessObjectBase_eventStartCheck_Parms, _delegate), Z_Construct_UDelegateFunction_ELITE_AdjustedDlcSaveDataDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_StartCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_StartCheck_Statics::NewProp__unavailableDlcData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_StartCheck_Statics::NewProp__delegate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_StartCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAdjustDlcSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_StartCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase, nullptr, "StartCheck", nullptr, nullptr, sizeof(ELAdjustDlcSaveDataAccessObjectBase_eventStartCheck_Parms), Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_StartCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_StartCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_StartCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_StartCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_StartCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_StartCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase_NoRegister()
	{
		return UELAdjustDlcSaveDataAccessObjectBase::StaticClass();
	}
	struct Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_AdjustedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CheckAdjustDlcSaveData, "CheckAdjustDlcSaveData" }, // 1384906984
		{ &Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_CreateAdjustDlcSaveDataAccessObject, "CreateAdjustDlcSaveDataAccessObject" }, // 593247015
		{ &Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_EndCheck, "EndCheck" }, // 4266999487
		{ &Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_OnStartCheck, "OnStartCheck" }, // 362375757
		{ &Z_Construct_UFunction_UELAdjustDlcSaveDataAccessObjectBase_StartCheck, "StartCheck" }, // 4221505601
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELAdjustDlcSaveDataAccessObjectBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELAdjustDlcSaveDataAccessObjectBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase_Statics::NewProp_AdjustedDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAdjustDlcSaveDataAccessObjectBase" },
		{ "ModuleRelativePath", "Public/ELAdjustDlcSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase_Statics::NewProp_AdjustedDelegate = { "AdjustedDelegate", nullptr, (EPropertyFlags)0x0040000000082005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAdjustDlcSaveDataAccessObjectBase, AdjustedDelegate), Z_Construct_UDelegateFunction_ELITE_AdjustedDlcSaveDataDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase_Statics::NewProp_AdjustedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase_Statics::NewProp_AdjustedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase_Statics::NewProp_World_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAdjustDlcSaveDataAccessObjectBase" },
		{ "ModuleRelativePath", "Public/ELAdjustDlcSaveDataAccessObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0044000000002001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAdjustDlcSaveDataAccessObjectBase, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase_Statics::NewProp_World_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase_Statics::NewProp_AdjustedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase_Statics::NewProp_World,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELAdjustDlcSaveDataAccessObjectBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase_Statics::ClassParams = {
		&UELAdjustDlcSaveDataAccessObjectBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELAdjustDlcSaveDataAccessObjectBase, 3240573913);
	template<> ELITE_API UClass* StaticClass<UELAdjustDlcSaveDataAccessObjectBase>()
	{
		return UELAdjustDlcSaveDataAccessObjectBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELAdjustDlcSaveDataAccessObjectBase(Z_Construct_UClass_UELAdjustDlcSaveDataAccessObjectBase, &UELAdjustDlcSaveDataAccessObjectBase::StaticClass, TEXT("/Script/ELITE"), TEXT("UELAdjustDlcSaveDataAccessObjectBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELAdjustDlcSaveDataAccessObjectBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
