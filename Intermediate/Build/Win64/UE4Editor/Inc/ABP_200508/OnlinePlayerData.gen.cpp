// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/OnlinePlayerData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlinePlayerData() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UOnlinePlayerData_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UOnlinePlayerData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserContentBinary_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UOnlinePlayerData::execAddGamePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddGamePoint(Z_Param__sValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePlayerData::execAddLoseCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddLoseCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePlayerData::execAddTotalMatchCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTotalMatchCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePlayerData::execAddWonCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddWonCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePlayerData::execCalcWinLoseCounter)
	{
		P_GET_UBOOL(Z_Param__bIsWon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalcWinLoseCounter(Z_Param__bIsWon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePlayerData::execCreateOnlinePlayerData)
	{
		P_GET_OBJECT_REF(UOnlinePlayerData,Z_Param_Out__pcOnlinePlayerData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlinePlayerData::CreateOnlinePlayerData(Z_Param_Out__pcOnlinePlayerData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePlayerData::execCreateOnlinePlayerDataWithUserContentBinary)
	{
		P_GET_OBJECT_REF(UOnlinePlayerData,Z_Param_Out__pcOnlinePlayerData);
		P_GET_OBJECT(UEOSUserContentBinary,Z_Param__pcUserContentBinary);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOnlinePlayerData::CreateOnlinePlayerDataWithUserContentBinary(Z_Param_Out__pcOnlinePlayerData,Z_Param__pcUserContentBinary);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePlayerData::execGetGamePoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetGamePoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePlayerData::execGetLeague)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLeague();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePlayerData::execGetLoseCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLoseCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePlayerData::execGetRank)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRank();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePlayerData::execGetTotalMatchCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTotalMatchCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePlayerData::execGetWinLoseCounter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetWinLoseCounter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePlayerData::execGetWonCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetWonCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePlayerData::execMakeUserContentBinary)
	{
		P_GET_OBJECT_REF(UEOSUserContentBinary,Z_Param_Out__pcUserContentBinary);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MakeUserContentBinary(Z_Param_Out__pcUserContentBinary);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePlayerData::execSetGamePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGamePoint(Z_Param__sValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePlayerData::execSetLeague)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLeague(Z_Param__sValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePlayerData::execSetLoseCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoseCount(Z_Param__sValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePlayerData::execSetRank)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRank(Z_Param__sValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePlayerData::execSetTotalMatch)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTotalMatch(Z_Param__sValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePlayerData::execSetWinLoseCounter)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__uValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWinLoseCounter(Z_Param__uValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePlayerData::execSetWonCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWonCount(Z_Param__sValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePlayerData::execSubGamePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SubGamePoint(Z_Param__sValue);
		P_NATIVE_END;
	}
	void UOnlinePlayerData::StaticRegisterNativesUOnlinePlayerData()
	{
		UClass* Class = UOnlinePlayerData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddGamePoint", &UOnlinePlayerData::execAddGamePoint },
			{ "AddLoseCount", &UOnlinePlayerData::execAddLoseCount },
			{ "AddTotalMatchCount", &UOnlinePlayerData::execAddTotalMatchCount },
			{ "AddWonCount", &UOnlinePlayerData::execAddWonCount },
			{ "CalcWinLoseCounter", &UOnlinePlayerData::execCalcWinLoseCounter },
			{ "CreateOnlinePlayerData", &UOnlinePlayerData::execCreateOnlinePlayerData },
			{ "CreateOnlinePlayerDataWithUserContentBinary", &UOnlinePlayerData::execCreateOnlinePlayerDataWithUserContentBinary },
			{ "GetGamePoint", &UOnlinePlayerData::execGetGamePoint },
			{ "GetLeague", &UOnlinePlayerData::execGetLeague },
			{ "GetLoseCount", &UOnlinePlayerData::execGetLoseCount },
			{ "GetRank", &UOnlinePlayerData::execGetRank },
			{ "GetTotalMatchCount", &UOnlinePlayerData::execGetTotalMatchCount },
			{ "GetWinLoseCounter", &UOnlinePlayerData::execGetWinLoseCounter },
			{ "GetWonCount", &UOnlinePlayerData::execGetWonCount },
			{ "MakeUserContentBinary", &UOnlinePlayerData::execMakeUserContentBinary },
			{ "SetGamePoint", &UOnlinePlayerData::execSetGamePoint },
			{ "SetLeague", &UOnlinePlayerData::execSetLeague },
			{ "SetLoseCount", &UOnlinePlayerData::execSetLoseCount },
			{ "SetRank", &UOnlinePlayerData::execSetRank },
			{ "SetTotalMatch", &UOnlinePlayerData::execSetTotalMatch },
			{ "SetWinLoseCounter", &UOnlinePlayerData::execSetWinLoseCounter },
			{ "SetWonCount", &UOnlinePlayerData::execSetWonCount },
			{ "SubGamePoint", &UOnlinePlayerData::execSubGamePoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlinePlayerData_AddGamePoint_Statics
	{
		struct OnlinePlayerData_eventAddGamePoint_Parms
		{
			int32 _sValue;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlinePlayerData_AddGamePoint_Statics::NewProp__sValue = { "_sValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePlayerData_eventAddGamePoint_Parms, _sValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlinePlayerData_AddGamePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePlayerData_eventAddGamePoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePlayerData_AddGamePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePlayerData_AddGamePoint_Statics::NewProp__sValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePlayerData_AddGamePoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePlayerData_AddGamePoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlinePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePlayerData_AddGamePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePlayerData, nullptr, "AddGamePoint", nullptr, nullptr, sizeof(OnlinePlayerData_eventAddGamePoint_Parms), Z_Construct_UFunction_UOnlinePlayerData_AddGamePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_AddGamePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePlayerData_AddGamePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_AddGamePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePlayerData_AddGamePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePlayerData_AddGamePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePlayerData_AddLoseCount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePlayerData_AddLoseCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlinePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePlayerData_AddLoseCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePlayerData, nullptr, "AddLoseCount", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePlayerData_AddLoseCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_AddLoseCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePlayerData_AddLoseCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePlayerData_AddLoseCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePlayerData_AddTotalMatchCount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePlayerData_AddTotalMatchCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlinePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePlayerData_AddTotalMatchCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePlayerData, nullptr, "AddTotalMatchCount", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePlayerData_AddTotalMatchCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_AddTotalMatchCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePlayerData_AddTotalMatchCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePlayerData_AddTotalMatchCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePlayerData_AddWonCount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePlayerData_AddWonCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlinePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePlayerData_AddWonCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePlayerData, nullptr, "AddWonCount", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePlayerData_AddWonCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_AddWonCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePlayerData_AddWonCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePlayerData_AddWonCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePlayerData_CalcWinLoseCounter_Statics
	{
		struct OnlinePlayerData_eventCalcWinLoseCounter_Parms
		{
			bool _bIsWon;
		};
		static void NewProp__bIsWon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bIsWon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOnlinePlayerData_CalcWinLoseCounter_Statics::NewProp__bIsWon_SetBit(void* Obj)
	{
		((OnlinePlayerData_eventCalcWinLoseCounter_Parms*)Obj)->_bIsWon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePlayerData_CalcWinLoseCounter_Statics::NewProp__bIsWon = { "_bIsWon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePlayerData_eventCalcWinLoseCounter_Parms), &Z_Construct_UFunction_UOnlinePlayerData_CalcWinLoseCounter_Statics::NewProp__bIsWon_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePlayerData_CalcWinLoseCounter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePlayerData_CalcWinLoseCounter_Statics::NewProp__bIsWon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePlayerData_CalcWinLoseCounter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlinePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePlayerData_CalcWinLoseCounter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePlayerData, nullptr, "CalcWinLoseCounter", nullptr, nullptr, sizeof(OnlinePlayerData_eventCalcWinLoseCounter_Parms), Z_Construct_UFunction_UOnlinePlayerData_CalcWinLoseCounter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_CalcWinLoseCounter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePlayerData_CalcWinLoseCounter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_CalcWinLoseCounter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePlayerData_CalcWinLoseCounter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePlayerData_CalcWinLoseCounter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePlayerData_CreateOnlinePlayerData_Statics
	{
		struct OnlinePlayerData_eventCreateOnlinePlayerData_Parms
		{
			UOnlinePlayerData* _pcOnlinePlayerData;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcOnlinePlayerData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePlayerData_CreateOnlinePlayerData_Statics::NewProp__pcOnlinePlayerData = { "_pcOnlinePlayerData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePlayerData_eventCreateOnlinePlayerData_Parms, _pcOnlinePlayerData), Z_Construct_UClass_UOnlinePlayerData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlinePlayerData_CreateOnlinePlayerData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePlayerData_eventCreateOnlinePlayerData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePlayerData_CreateOnlinePlayerData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePlayerData_eventCreateOnlinePlayerData_Parms), &Z_Construct_UFunction_UOnlinePlayerData_CreateOnlinePlayerData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePlayerData_CreateOnlinePlayerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePlayerData_CreateOnlinePlayerData_Statics::NewProp__pcOnlinePlayerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePlayerData_CreateOnlinePlayerData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePlayerData_CreateOnlinePlayerData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlinePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePlayerData_CreateOnlinePlayerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePlayerData, nullptr, "CreateOnlinePlayerData", nullptr, nullptr, sizeof(OnlinePlayerData_eventCreateOnlinePlayerData_Parms), Z_Construct_UFunction_UOnlinePlayerData_CreateOnlinePlayerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_CreateOnlinePlayerData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePlayerData_CreateOnlinePlayerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_CreateOnlinePlayerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePlayerData_CreateOnlinePlayerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePlayerData_CreateOnlinePlayerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePlayerData_CreateOnlinePlayerDataWithUserContentBinary_Statics
	{
		struct OnlinePlayerData_eventCreateOnlinePlayerDataWithUserContentBinary_Parms
		{
			UOnlinePlayerData* _pcOnlinePlayerData;
			UEOSUserContentBinary* _pcUserContentBinary;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcOnlinePlayerData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUserContentBinary;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePlayerData_CreateOnlinePlayerDataWithUserContentBinary_Statics::NewProp__pcOnlinePlayerData = { "_pcOnlinePlayerData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePlayerData_eventCreateOnlinePlayerDataWithUserContentBinary_Parms, _pcOnlinePlayerData), Z_Construct_UClass_UOnlinePlayerData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePlayerData_CreateOnlinePlayerDataWithUserContentBinary_Statics::NewProp__pcUserContentBinary = { "_pcUserContentBinary", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePlayerData_eventCreateOnlinePlayerDataWithUserContentBinary_Parms, _pcUserContentBinary), Z_Construct_UClass_UEOSUserContentBinary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlinePlayerData_CreateOnlinePlayerDataWithUserContentBinary_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePlayerData_eventCreateOnlinePlayerDataWithUserContentBinary_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePlayerData_CreateOnlinePlayerDataWithUserContentBinary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePlayerData_eventCreateOnlinePlayerDataWithUserContentBinary_Parms), &Z_Construct_UFunction_UOnlinePlayerData_CreateOnlinePlayerDataWithUserContentBinary_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePlayerData_CreateOnlinePlayerDataWithUserContentBinary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePlayerData_CreateOnlinePlayerDataWithUserContentBinary_Statics::NewProp__pcOnlinePlayerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePlayerData_CreateOnlinePlayerDataWithUserContentBinary_Statics::NewProp__pcUserContentBinary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePlayerData_CreateOnlinePlayerDataWithUserContentBinary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePlayerData_CreateOnlinePlayerDataWithUserContentBinary_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlinePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePlayerData_CreateOnlinePlayerDataWithUserContentBinary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePlayerData, nullptr, "CreateOnlinePlayerDataWithUserContentBinary", nullptr, nullptr, sizeof(OnlinePlayerData_eventCreateOnlinePlayerDataWithUserContentBinary_Parms), Z_Construct_UFunction_UOnlinePlayerData_CreateOnlinePlayerDataWithUserContentBinary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_CreateOnlinePlayerDataWithUserContentBinary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePlayerData_CreateOnlinePlayerDataWithUserContentBinary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_CreateOnlinePlayerDataWithUserContentBinary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePlayerData_CreateOnlinePlayerDataWithUserContentBinary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePlayerData_CreateOnlinePlayerDataWithUserContentBinary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePlayerData_GetGamePoint_Statics
	{
		struct OnlinePlayerData_eventGetGamePoint_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlinePlayerData_GetGamePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePlayerData_eventGetGamePoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePlayerData_GetGamePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePlayerData_GetGamePoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePlayerData_GetGamePoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlinePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePlayerData_GetGamePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePlayerData, nullptr, "GetGamePoint", nullptr, nullptr, sizeof(OnlinePlayerData_eventGetGamePoint_Parms), Z_Construct_UFunction_UOnlinePlayerData_GetGamePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_GetGamePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePlayerData_GetGamePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_GetGamePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePlayerData_GetGamePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePlayerData_GetGamePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePlayerData_GetLeague_Statics
	{
		struct OnlinePlayerData_eventGetLeague_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlinePlayerData_GetLeague_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePlayerData_eventGetLeague_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePlayerData_GetLeague_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePlayerData_GetLeague_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePlayerData_GetLeague_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlinePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePlayerData_GetLeague_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePlayerData, nullptr, "GetLeague", nullptr, nullptr, sizeof(OnlinePlayerData_eventGetLeague_Parms), Z_Construct_UFunction_UOnlinePlayerData_GetLeague_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_GetLeague_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePlayerData_GetLeague_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_GetLeague_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePlayerData_GetLeague()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePlayerData_GetLeague_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePlayerData_GetLoseCount_Statics
	{
		struct OnlinePlayerData_eventGetLoseCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlinePlayerData_GetLoseCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePlayerData_eventGetLoseCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePlayerData_GetLoseCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePlayerData_GetLoseCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePlayerData_GetLoseCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlinePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePlayerData_GetLoseCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePlayerData, nullptr, "GetLoseCount", nullptr, nullptr, sizeof(OnlinePlayerData_eventGetLoseCount_Parms), Z_Construct_UFunction_UOnlinePlayerData_GetLoseCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_GetLoseCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePlayerData_GetLoseCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_GetLoseCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePlayerData_GetLoseCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePlayerData_GetLoseCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePlayerData_GetRank_Statics
	{
		struct OnlinePlayerData_eventGetRank_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlinePlayerData_GetRank_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePlayerData_eventGetRank_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePlayerData_GetRank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePlayerData_GetRank_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePlayerData_GetRank_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlinePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePlayerData_GetRank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePlayerData, nullptr, "GetRank", nullptr, nullptr, sizeof(OnlinePlayerData_eventGetRank_Parms), Z_Construct_UFunction_UOnlinePlayerData_GetRank_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_GetRank_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePlayerData_GetRank_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_GetRank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePlayerData_GetRank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePlayerData_GetRank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePlayerData_GetTotalMatchCount_Statics
	{
		struct OnlinePlayerData_eventGetTotalMatchCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlinePlayerData_GetTotalMatchCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePlayerData_eventGetTotalMatchCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePlayerData_GetTotalMatchCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePlayerData_GetTotalMatchCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePlayerData_GetTotalMatchCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlinePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePlayerData_GetTotalMatchCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePlayerData, nullptr, "GetTotalMatchCount", nullptr, nullptr, sizeof(OnlinePlayerData_eventGetTotalMatchCount_Parms), Z_Construct_UFunction_UOnlinePlayerData_GetTotalMatchCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_GetTotalMatchCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePlayerData_GetTotalMatchCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_GetTotalMatchCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePlayerData_GetTotalMatchCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePlayerData_GetTotalMatchCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePlayerData_GetWinLoseCounter_Statics
	{
		struct OnlinePlayerData_eventGetWinLoseCounter_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlinePlayerData_GetWinLoseCounter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePlayerData_eventGetWinLoseCounter_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePlayerData_GetWinLoseCounter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePlayerData_GetWinLoseCounter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePlayerData_GetWinLoseCounter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlinePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePlayerData_GetWinLoseCounter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePlayerData, nullptr, "GetWinLoseCounter", nullptr, nullptr, sizeof(OnlinePlayerData_eventGetWinLoseCounter_Parms), Z_Construct_UFunction_UOnlinePlayerData_GetWinLoseCounter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_GetWinLoseCounter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePlayerData_GetWinLoseCounter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_GetWinLoseCounter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePlayerData_GetWinLoseCounter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePlayerData_GetWinLoseCounter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePlayerData_GetWonCount_Statics
	{
		struct OnlinePlayerData_eventGetWonCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlinePlayerData_GetWonCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePlayerData_eventGetWonCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePlayerData_GetWonCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePlayerData_GetWonCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePlayerData_GetWonCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlinePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePlayerData_GetWonCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePlayerData, nullptr, "GetWonCount", nullptr, nullptr, sizeof(OnlinePlayerData_eventGetWonCount_Parms), Z_Construct_UFunction_UOnlinePlayerData_GetWonCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_GetWonCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePlayerData_GetWonCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_GetWonCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePlayerData_GetWonCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePlayerData_GetWonCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePlayerData_MakeUserContentBinary_Statics
	{
		struct OnlinePlayerData_eventMakeUserContentBinary_Parms
		{
			UEOSUserContentBinary* _pcUserContentBinary;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUserContentBinary;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnlinePlayerData_MakeUserContentBinary_Statics::NewProp__pcUserContentBinary = { "_pcUserContentBinary", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePlayerData_eventMakeUserContentBinary_Parms, _pcUserContentBinary), Z_Construct_UClass_UEOSUserContentBinary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOnlinePlayerData_MakeUserContentBinary_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePlayerData_eventMakeUserContentBinary_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePlayerData_MakeUserContentBinary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePlayerData_eventMakeUserContentBinary_Parms), &Z_Construct_UFunction_UOnlinePlayerData_MakeUserContentBinary_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePlayerData_MakeUserContentBinary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePlayerData_MakeUserContentBinary_Statics::NewProp__pcUserContentBinary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePlayerData_MakeUserContentBinary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePlayerData_MakeUserContentBinary_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlinePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePlayerData_MakeUserContentBinary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePlayerData, nullptr, "MakeUserContentBinary", nullptr, nullptr, sizeof(OnlinePlayerData_eventMakeUserContentBinary_Parms), Z_Construct_UFunction_UOnlinePlayerData_MakeUserContentBinary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_MakeUserContentBinary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePlayerData_MakeUserContentBinary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_MakeUserContentBinary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePlayerData_MakeUserContentBinary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePlayerData_MakeUserContentBinary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePlayerData_SetGamePoint_Statics
	{
		struct OnlinePlayerData_eventSetGamePoint_Parms
		{
			int32 _sValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlinePlayerData_SetGamePoint_Statics::NewProp__sValue = { "_sValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePlayerData_eventSetGamePoint_Parms, _sValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePlayerData_SetGamePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePlayerData_SetGamePoint_Statics::NewProp__sValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePlayerData_SetGamePoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlinePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePlayerData_SetGamePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePlayerData, nullptr, "SetGamePoint", nullptr, nullptr, sizeof(OnlinePlayerData_eventSetGamePoint_Parms), Z_Construct_UFunction_UOnlinePlayerData_SetGamePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_SetGamePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePlayerData_SetGamePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_SetGamePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePlayerData_SetGamePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePlayerData_SetGamePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePlayerData_SetLeague_Statics
	{
		struct OnlinePlayerData_eventSetLeague_Parms
		{
			int32 _sValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlinePlayerData_SetLeague_Statics::NewProp__sValue = { "_sValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePlayerData_eventSetLeague_Parms, _sValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePlayerData_SetLeague_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePlayerData_SetLeague_Statics::NewProp__sValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePlayerData_SetLeague_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlinePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePlayerData_SetLeague_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePlayerData, nullptr, "SetLeague", nullptr, nullptr, sizeof(OnlinePlayerData_eventSetLeague_Parms), Z_Construct_UFunction_UOnlinePlayerData_SetLeague_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_SetLeague_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePlayerData_SetLeague_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_SetLeague_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePlayerData_SetLeague()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePlayerData_SetLeague_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePlayerData_SetLoseCount_Statics
	{
		struct OnlinePlayerData_eventSetLoseCount_Parms
		{
			int32 _sValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlinePlayerData_SetLoseCount_Statics::NewProp__sValue = { "_sValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePlayerData_eventSetLoseCount_Parms, _sValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePlayerData_SetLoseCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePlayerData_SetLoseCount_Statics::NewProp__sValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePlayerData_SetLoseCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlinePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePlayerData_SetLoseCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePlayerData, nullptr, "SetLoseCount", nullptr, nullptr, sizeof(OnlinePlayerData_eventSetLoseCount_Parms), Z_Construct_UFunction_UOnlinePlayerData_SetLoseCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_SetLoseCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePlayerData_SetLoseCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_SetLoseCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePlayerData_SetLoseCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePlayerData_SetLoseCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePlayerData_SetRank_Statics
	{
		struct OnlinePlayerData_eventSetRank_Parms
		{
			int32 _sValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlinePlayerData_SetRank_Statics::NewProp__sValue = { "_sValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePlayerData_eventSetRank_Parms, _sValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePlayerData_SetRank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePlayerData_SetRank_Statics::NewProp__sValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePlayerData_SetRank_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlinePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePlayerData_SetRank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePlayerData, nullptr, "SetRank", nullptr, nullptr, sizeof(OnlinePlayerData_eventSetRank_Parms), Z_Construct_UFunction_UOnlinePlayerData_SetRank_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_SetRank_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePlayerData_SetRank_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_SetRank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePlayerData_SetRank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePlayerData_SetRank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePlayerData_SetTotalMatch_Statics
	{
		struct OnlinePlayerData_eventSetTotalMatch_Parms
		{
			int32 _sValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlinePlayerData_SetTotalMatch_Statics::NewProp__sValue = { "_sValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePlayerData_eventSetTotalMatch_Parms, _sValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePlayerData_SetTotalMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePlayerData_SetTotalMatch_Statics::NewProp__sValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePlayerData_SetTotalMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlinePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePlayerData_SetTotalMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePlayerData, nullptr, "SetTotalMatch", nullptr, nullptr, sizeof(OnlinePlayerData_eventSetTotalMatch_Parms), Z_Construct_UFunction_UOnlinePlayerData_SetTotalMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_SetTotalMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePlayerData_SetTotalMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_SetTotalMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePlayerData_SetTotalMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePlayerData_SetTotalMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePlayerData_SetWinLoseCounter_Statics
	{
		struct OnlinePlayerData_eventSetWinLoseCounter_Parms
		{
			int32 _uValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__uValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlinePlayerData_SetWinLoseCounter_Statics::NewProp__uValue = { "_uValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePlayerData_eventSetWinLoseCounter_Parms, _uValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePlayerData_SetWinLoseCounter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePlayerData_SetWinLoseCounter_Statics::NewProp__uValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePlayerData_SetWinLoseCounter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlinePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePlayerData_SetWinLoseCounter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePlayerData, nullptr, "SetWinLoseCounter", nullptr, nullptr, sizeof(OnlinePlayerData_eventSetWinLoseCounter_Parms), Z_Construct_UFunction_UOnlinePlayerData_SetWinLoseCounter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_SetWinLoseCounter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePlayerData_SetWinLoseCounter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_SetWinLoseCounter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePlayerData_SetWinLoseCounter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePlayerData_SetWinLoseCounter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePlayerData_SetWonCount_Statics
	{
		struct OnlinePlayerData_eventSetWonCount_Parms
		{
			int32 _sValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlinePlayerData_SetWonCount_Statics::NewProp__sValue = { "_sValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePlayerData_eventSetWonCount_Parms, _sValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePlayerData_SetWonCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePlayerData_SetWonCount_Statics::NewProp__sValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePlayerData_SetWonCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlinePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePlayerData_SetWonCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePlayerData, nullptr, "SetWonCount", nullptr, nullptr, sizeof(OnlinePlayerData_eventSetWonCount_Parms), Z_Construct_UFunction_UOnlinePlayerData_SetWonCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_SetWonCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePlayerData_SetWonCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_SetWonCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePlayerData_SetWonCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePlayerData_SetWonCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePlayerData_SubGamePoint_Statics
	{
		struct OnlinePlayerData_eventSubGamePoint_Parms
		{
			int32 _sValue;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlinePlayerData_SubGamePoint_Statics::NewProp__sValue = { "_sValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePlayerData_eventSubGamePoint_Parms, _sValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlinePlayerData_SubGamePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePlayerData_eventSubGamePoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePlayerData_SubGamePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePlayerData_SubGamePoint_Statics::NewProp__sValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePlayerData_SubGamePoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePlayerData_SubGamePoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlinePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePlayerData_SubGamePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePlayerData, nullptr, "SubGamePoint", nullptr, nullptr, sizeof(OnlinePlayerData_eventSubGamePoint_Parms), Z_Construct_UFunction_UOnlinePlayerData_SubGamePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_SubGamePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePlayerData_SubGamePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePlayerData_SubGamePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePlayerData_SubGamePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePlayerData_SubGamePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOnlinePlayerData_NoRegister()
	{
		return UOnlinePlayerData::StaticClass();
	}
	struct Z_Construct_UClass_UOnlinePlayerData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlinePlayerData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlinePlayerData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlinePlayerData_AddGamePoint, "AddGamePoint" }, // 3697668814
		{ &Z_Construct_UFunction_UOnlinePlayerData_AddLoseCount, "AddLoseCount" }, // 2280845584
		{ &Z_Construct_UFunction_UOnlinePlayerData_AddTotalMatchCount, "AddTotalMatchCount" }, // 2134807541
		{ &Z_Construct_UFunction_UOnlinePlayerData_AddWonCount, "AddWonCount" }, // 766707206
		{ &Z_Construct_UFunction_UOnlinePlayerData_CalcWinLoseCounter, "CalcWinLoseCounter" }, // 2397235509
		{ &Z_Construct_UFunction_UOnlinePlayerData_CreateOnlinePlayerData, "CreateOnlinePlayerData" }, // 745484564
		{ &Z_Construct_UFunction_UOnlinePlayerData_CreateOnlinePlayerDataWithUserContentBinary, "CreateOnlinePlayerDataWithUserContentBinary" }, // 3684241093
		{ &Z_Construct_UFunction_UOnlinePlayerData_GetGamePoint, "GetGamePoint" }, // 2836903474
		{ &Z_Construct_UFunction_UOnlinePlayerData_GetLeague, "GetLeague" }, // 2153239281
		{ &Z_Construct_UFunction_UOnlinePlayerData_GetLoseCount, "GetLoseCount" }, // 3113917626
		{ &Z_Construct_UFunction_UOnlinePlayerData_GetRank, "GetRank" }, // 1180691703
		{ &Z_Construct_UFunction_UOnlinePlayerData_GetTotalMatchCount, "GetTotalMatchCount" }, // 1244322406
		{ &Z_Construct_UFunction_UOnlinePlayerData_GetWinLoseCounter, "GetWinLoseCounter" }, // 4054168150
		{ &Z_Construct_UFunction_UOnlinePlayerData_GetWonCount, "GetWonCount" }, // 840458500
		{ &Z_Construct_UFunction_UOnlinePlayerData_MakeUserContentBinary, "MakeUserContentBinary" }, // 2533514158
		{ &Z_Construct_UFunction_UOnlinePlayerData_SetGamePoint, "SetGamePoint" }, // 629394054
		{ &Z_Construct_UFunction_UOnlinePlayerData_SetLeague, "SetLeague" }, // 1860937828
		{ &Z_Construct_UFunction_UOnlinePlayerData_SetLoseCount, "SetLoseCount" }, // 2142176197
		{ &Z_Construct_UFunction_UOnlinePlayerData_SetRank, "SetRank" }, // 782253505
		{ &Z_Construct_UFunction_UOnlinePlayerData_SetTotalMatch, "SetTotalMatch" }, // 803458096
		{ &Z_Construct_UFunction_UOnlinePlayerData_SetWinLoseCounter, "SetWinLoseCounter" }, // 3498462847
		{ &Z_Construct_UFunction_UOnlinePlayerData_SetWonCount, "SetWonCount" }, // 3834056699
		{ &Z_Construct_UFunction_UOnlinePlayerData_SubGamePoint, "SubGamePoint" }, // 1054607959
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePlayerData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OnlinePlayerData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OnlinePlayerData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlinePlayerData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlinePlayerData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlinePlayerData_Statics::ClassParams = {
		&UOnlinePlayerData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlinePlayerData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePlayerData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlinePlayerData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlinePlayerData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlinePlayerData, 155765763);
	template<> ABP_200508_API UClass* StaticClass<UOnlinePlayerData>()
	{
		return UOnlinePlayerData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlinePlayerData(Z_Construct_UClass_UOnlinePlayerData, &UOnlinePlayerData::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UOnlinePlayerData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlinePlayerData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
