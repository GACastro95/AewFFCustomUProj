// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerSquareManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerSquareManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerSquareManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerSquareManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerSquareActor_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerCity();
// End Cross Module References
	DEFINE_FUNCTION(AELCareerSquareManager::execGetCareerSquareTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AELCareerSquareActor*>*)Z_Param__Result=P_THIS->GetCareerSquareTable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSquareManager::execGetCurrentPlayerStayCity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECareerCity*)Z_Param__Result=P_THIS->GetCurrentPlayerStayCity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSquareManager::execGetCurrentStaySquare)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELCareerSquareActor**)Z_Param__Result=P_THIS->GetCurrentStaySquare();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSquareManager::execGetNextPlayerStayCity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECareerCity*)Z_Param__Result=P_THIS->GetNextPlayerStayCity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSquareManager::execGetSquareCityFromId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__SquareId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECareerCity*)Z_Param__Result=P_THIS->GetSquareCityFromId(Z_Param__SquareId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSquareManager::execGetSquareFromCityName)
	{
		P_GET_ENUM(ECareerCity,Z_Param__City);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELCareerSquareActor**)Z_Param__Result=P_THIS->GetSquareFromCityName(ECareerCity(Z_Param__City));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSquareManager::execSetCareerSquareTable)
	{
		P_GET_TARRAY(AELCareerSquareActor*,Z_Param_Table);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerSquareTable(Z_Param_Table);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSquareManager::execSetCurrentPlayerStayCity)
	{
		P_GET_ENUM(ECareerCity,Z_Param__City);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentPlayerStayCity(ECareerCity(Z_Param__City));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSquareManager::execSetNextPlayerStayCity)
	{
		P_GET_ENUM(ECareerCity,Z_Param__City);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNextPlayerStayCity(ECareerCity(Z_Param__City));
		P_NATIVE_END;
	}
	void AELCareerSquareManager::StaticRegisterNativesAELCareerSquareManager()
	{
		UClass* Class = AELCareerSquareManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCareerSquareTable", &AELCareerSquareManager::execGetCareerSquareTable },
			{ "GetCurrentPlayerStayCity", &AELCareerSquareManager::execGetCurrentPlayerStayCity },
			{ "GetCurrentStaySquare", &AELCareerSquareManager::execGetCurrentStaySquare },
			{ "GetNextPlayerStayCity", &AELCareerSquareManager::execGetNextPlayerStayCity },
			{ "GetSquareCityFromId", &AELCareerSquareManager::execGetSquareCityFromId },
			{ "GetSquareFromCityName", &AELCareerSquareManager::execGetSquareFromCityName },
			{ "SetCareerSquareTable", &AELCareerSquareManager::execSetCareerSquareTable },
			{ "SetCurrentPlayerStayCity", &AELCareerSquareManager::execSetCurrentPlayerStayCity },
			{ "SetNextPlayerStayCity", &AELCareerSquareManager::execSetNextPlayerStayCity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELCareerSquareManager_GetCareerSquareTable_Statics
	{
		struct ELCareerSquareManager_eventGetCareerSquareTable_Parms
		{
			TArray<AELCareerSquareActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerSquareManager_GetCareerSquareTable_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELCareerSquareActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELCareerSquareManager_GetCareerSquareTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSquareManager_eventGetCareerSquareTable_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSquareManager_GetCareerSquareTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSquareManager_GetCareerSquareTable_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSquareManager_GetCareerSquareTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSquareManager_GetCareerSquareTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSquareManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSquareManager_GetCareerSquareTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSquareManager, nullptr, "GetCareerSquareTable", nullptr, nullptr, sizeof(ELCareerSquareManager_eventGetCareerSquareTable_Parms), Z_Construct_UFunction_AELCareerSquareManager_GetCareerSquareTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSquareManager_GetCareerSquareTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSquareManager_GetCareerSquareTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSquareManager_GetCareerSquareTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSquareManager_GetCareerSquareTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSquareManager_GetCareerSquareTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSquareManager_GetCurrentPlayerStayCity_Statics
	{
		struct ELCareerSquareManager_eventGetCurrentPlayerStayCity_Parms
		{
			ECareerCity ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerSquareManager_GetCurrentPlayerStayCity_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerSquareManager_GetCurrentPlayerStayCity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSquareManager_eventGetCurrentPlayerStayCity_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ECareerCity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSquareManager_GetCurrentPlayerStayCity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSquareManager_GetCurrentPlayerStayCity_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSquareManager_GetCurrentPlayerStayCity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSquareManager_GetCurrentPlayerStayCity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSquareManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSquareManager_GetCurrentPlayerStayCity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSquareManager, nullptr, "GetCurrentPlayerStayCity", nullptr, nullptr, sizeof(ELCareerSquareManager_eventGetCurrentPlayerStayCity_Parms), Z_Construct_UFunction_AELCareerSquareManager_GetCurrentPlayerStayCity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSquareManager_GetCurrentPlayerStayCity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSquareManager_GetCurrentPlayerStayCity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSquareManager_GetCurrentPlayerStayCity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSquareManager_GetCurrentPlayerStayCity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSquareManager_GetCurrentPlayerStayCity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSquareManager_GetCurrentStaySquare_Statics
	{
		struct ELCareerSquareManager_eventGetCurrentStaySquare_Parms
		{
			AELCareerSquareActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerSquareManager_GetCurrentStaySquare_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSquareManager_eventGetCurrentStaySquare_Parms, ReturnValue), Z_Construct_UClass_AELCareerSquareActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSquareManager_GetCurrentStaySquare_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSquareManager_GetCurrentStaySquare_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSquareManager_GetCurrentStaySquare_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSquareManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSquareManager_GetCurrentStaySquare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSquareManager, nullptr, "GetCurrentStaySquare", nullptr, nullptr, sizeof(ELCareerSquareManager_eventGetCurrentStaySquare_Parms), Z_Construct_UFunction_AELCareerSquareManager_GetCurrentStaySquare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSquareManager_GetCurrentStaySquare_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSquareManager_GetCurrentStaySquare_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSquareManager_GetCurrentStaySquare_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSquareManager_GetCurrentStaySquare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSquareManager_GetCurrentStaySquare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSquareManager_GetNextPlayerStayCity_Statics
	{
		struct ELCareerSquareManager_eventGetNextPlayerStayCity_Parms
		{
			ECareerCity ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerSquareManager_GetNextPlayerStayCity_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerSquareManager_GetNextPlayerStayCity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSquareManager_eventGetNextPlayerStayCity_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ECareerCity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSquareManager_GetNextPlayerStayCity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSquareManager_GetNextPlayerStayCity_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSquareManager_GetNextPlayerStayCity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSquareManager_GetNextPlayerStayCity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSquareManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSquareManager_GetNextPlayerStayCity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSquareManager, nullptr, "GetNextPlayerStayCity", nullptr, nullptr, sizeof(ELCareerSquareManager_eventGetNextPlayerStayCity_Parms), Z_Construct_UFunction_AELCareerSquareManager_GetNextPlayerStayCity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSquareManager_GetNextPlayerStayCity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSquareManager_GetNextPlayerStayCity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSquareManager_GetNextPlayerStayCity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSquareManager_GetNextPlayerStayCity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSquareManager_GetNextPlayerStayCity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSquareManager_GetSquareCityFromId_Statics
	{
		struct ELCareerSquareManager_eventGetSquareCityFromId_Parms
		{
			FString _SquareId;
			ECareerCity ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__SquareId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__SquareId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSquareManager_GetSquareCityFromId_Statics::NewProp__SquareId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELCareerSquareManager_GetSquareCityFromId_Statics::NewProp__SquareId = { "_SquareId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSquareManager_eventGetSquareCityFromId_Parms, _SquareId), METADATA_PARAMS(Z_Construct_UFunction_AELCareerSquareManager_GetSquareCityFromId_Statics::NewProp__SquareId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSquareManager_GetSquareCityFromId_Statics::NewProp__SquareId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerSquareManager_GetSquareCityFromId_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerSquareManager_GetSquareCityFromId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSquareManager_eventGetSquareCityFromId_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ECareerCity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSquareManager_GetSquareCityFromId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSquareManager_GetSquareCityFromId_Statics::NewProp__SquareId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSquareManager_GetSquareCityFromId_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSquareManager_GetSquareCityFromId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSquareManager_GetSquareCityFromId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSquareManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSquareManager_GetSquareCityFromId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSquareManager, nullptr, "GetSquareCityFromId", nullptr, nullptr, sizeof(ELCareerSquareManager_eventGetSquareCityFromId_Parms), Z_Construct_UFunction_AELCareerSquareManager_GetSquareCityFromId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSquareManager_GetSquareCityFromId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSquareManager_GetSquareCityFromId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSquareManager_GetSquareCityFromId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSquareManager_GetSquareCityFromId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSquareManager_GetSquareCityFromId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSquareManager_GetSquareFromCityName_Statics
	{
		struct ELCareerSquareManager_eventGetSquareFromCityName_Parms
		{
			ECareerCity _City;
			AELCareerSquareActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__City_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__City;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerSquareManager_GetSquareFromCityName_Statics::NewProp__City_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerSquareManager_GetSquareFromCityName_Statics::NewProp__City = { "_City", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSquareManager_eventGetSquareFromCityName_Parms, _City), Z_Construct_UEnum_ABP_200508_ECareerCity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerSquareManager_GetSquareFromCityName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSquareManager_eventGetSquareFromCityName_Parms, ReturnValue), Z_Construct_UClass_AELCareerSquareActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSquareManager_GetSquareFromCityName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSquareManager_GetSquareFromCityName_Statics::NewProp__City_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSquareManager_GetSquareFromCityName_Statics::NewProp__City,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSquareManager_GetSquareFromCityName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSquareManager_GetSquareFromCityName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSquareManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSquareManager_GetSquareFromCityName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSquareManager, nullptr, "GetSquareFromCityName", nullptr, nullptr, sizeof(ELCareerSquareManager_eventGetSquareFromCityName_Parms), Z_Construct_UFunction_AELCareerSquareManager_GetSquareFromCityName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSquareManager_GetSquareFromCityName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSquareManager_GetSquareFromCityName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSquareManager_GetSquareFromCityName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSquareManager_GetSquareFromCityName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSquareManager_GetSquareFromCityName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSquareManager_SetCareerSquareTable_Statics
	{
		struct ELCareerSquareManager_eventSetCareerSquareTable_Parms
		{
			TArray<AELCareerSquareActor*> Table;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Table_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Table;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerSquareManager_SetCareerSquareTable_Statics::NewProp_Table_Inner = { "Table", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELCareerSquareActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELCareerSquareManager_SetCareerSquareTable_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSquareManager_eventSetCareerSquareTable_Parms, Table), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSquareManager_SetCareerSquareTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSquareManager_SetCareerSquareTable_Statics::NewProp_Table_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSquareManager_SetCareerSquareTable_Statics::NewProp_Table,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSquareManager_SetCareerSquareTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSquareManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSquareManager_SetCareerSquareTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSquareManager, nullptr, "SetCareerSquareTable", nullptr, nullptr, sizeof(ELCareerSquareManager_eventSetCareerSquareTable_Parms), Z_Construct_UFunction_AELCareerSquareManager_SetCareerSquareTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSquareManager_SetCareerSquareTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSquareManager_SetCareerSquareTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSquareManager_SetCareerSquareTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSquareManager_SetCareerSquareTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSquareManager_SetCareerSquareTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSquareManager_SetCurrentPlayerStayCity_Statics
	{
		struct ELCareerSquareManager_eventSetCurrentPlayerStayCity_Parms
		{
			ECareerCity _City;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__City_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__City;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerSquareManager_SetCurrentPlayerStayCity_Statics::NewProp__City_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerSquareManager_SetCurrentPlayerStayCity_Statics::NewProp__City = { "_City", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSquareManager_eventSetCurrentPlayerStayCity_Parms, _City), Z_Construct_UEnum_ABP_200508_ECareerCity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSquareManager_SetCurrentPlayerStayCity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSquareManager_SetCurrentPlayerStayCity_Statics::NewProp__City_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSquareManager_SetCurrentPlayerStayCity_Statics::NewProp__City,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSquareManager_SetCurrentPlayerStayCity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSquareManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSquareManager_SetCurrentPlayerStayCity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSquareManager, nullptr, "SetCurrentPlayerStayCity", nullptr, nullptr, sizeof(ELCareerSquareManager_eventSetCurrentPlayerStayCity_Parms), Z_Construct_UFunction_AELCareerSquareManager_SetCurrentPlayerStayCity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSquareManager_SetCurrentPlayerStayCity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSquareManager_SetCurrentPlayerStayCity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSquareManager_SetCurrentPlayerStayCity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSquareManager_SetCurrentPlayerStayCity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSquareManager_SetCurrentPlayerStayCity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSquareManager_SetNextPlayerStayCity_Statics
	{
		struct ELCareerSquareManager_eventSetNextPlayerStayCity_Parms
		{
			ECareerCity _City;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__City_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__City;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerSquareManager_SetNextPlayerStayCity_Statics::NewProp__City_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerSquareManager_SetNextPlayerStayCity_Statics::NewProp__City = { "_City", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSquareManager_eventSetNextPlayerStayCity_Parms, _City), Z_Construct_UEnum_ABP_200508_ECareerCity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSquareManager_SetNextPlayerStayCity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSquareManager_SetNextPlayerStayCity_Statics::NewProp__City_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSquareManager_SetNextPlayerStayCity_Statics::NewProp__City,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSquareManager_SetNextPlayerStayCity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSquareManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSquareManager_SetNextPlayerStayCity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSquareManager, nullptr, "SetNextPlayerStayCity", nullptr, nullptr, sizeof(ELCareerSquareManager_eventSetNextPlayerStayCity_Parms), Z_Construct_UFunction_AELCareerSquareManager_SetNextPlayerStayCity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSquareManager_SetNextPlayerStayCity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSquareManager_SetNextPlayerStayCity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSquareManager_SetNextPlayerStayCity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSquareManager_SetNextPlayerStayCity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSquareManager_SetNextPlayerStayCity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELCareerSquareManager_NoRegister()
	{
		return AELCareerSquareManager::StaticClass();
	}
	struct Z_Construct_UClass_AELCareerSquareManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_CareerSquareTable_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CareerSquareTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_CareerSquareTable;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_CurrentPlayerStayCity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CurrentPlayerStayCity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_CurrentPlayerStayCity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_NextPlayerStayCity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_NextPlayerStayCity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_NextPlayerStayCity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELCareerSquareManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELCareerSquareManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELCareerSquareManager_GetCareerSquareTable, "GetCareerSquareTable" }, // 2906472885
		{ &Z_Construct_UFunction_AELCareerSquareManager_GetCurrentPlayerStayCity, "GetCurrentPlayerStayCity" }, // 2458174049
		{ &Z_Construct_UFunction_AELCareerSquareManager_GetCurrentStaySquare, "GetCurrentStaySquare" }, // 2674005066
		{ &Z_Construct_UFunction_AELCareerSquareManager_GetNextPlayerStayCity, "GetNextPlayerStayCity" }, // 2238345336
		{ &Z_Construct_UFunction_AELCareerSquareManager_GetSquareCityFromId, "GetSquareCityFromId" }, // 2163495440
		{ &Z_Construct_UFunction_AELCareerSquareManager_GetSquareFromCityName, "GetSquareFromCityName" }, // 3358003998
		{ &Z_Construct_UFunction_AELCareerSquareManager_SetCareerSquareTable, "SetCareerSquareTable" }, // 3772950916
		{ &Z_Construct_UFunction_AELCareerSquareManager_SetCurrentPlayerStayCity, "SetCurrentPlayerStayCity" }, // 1577835596
		{ &Z_Construct_UFunction_AELCareerSquareManager_SetNextPlayerStayCity, "SetNextPlayerStayCity" }, // 2948965038
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerSquareManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerSquareManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerSquareManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELCareerSquareManager_Statics::NewProp_m_CareerSquareTable_Inner = { "m_CareerSquareTable", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELCareerSquareActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerSquareManager_Statics::NewProp_m_CareerSquareTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerSquareManager" },
		{ "ModuleRelativePath", "Public/ELCareerSquareManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELCareerSquareManager_Statics::NewProp_m_CareerSquareTable = { "m_CareerSquareTable", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerSquareManager, m_CareerSquareTable), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELCareerSquareManager_Statics::NewProp_m_CareerSquareTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerSquareManager_Statics::NewProp_m_CareerSquareTable_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELCareerSquareManager_Statics::NewProp_m_CurrentPlayerStayCity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerSquareManager_Statics::NewProp_m_CurrentPlayerStayCity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerSquareManager" },
		{ "ModuleRelativePath", "Public/ELCareerSquareManager.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELCareerSquareManager_Statics::NewProp_m_CurrentPlayerStayCity = { "m_CurrentPlayerStayCity", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerSquareManager, m_CurrentPlayerStayCity), Z_Construct_UEnum_ABP_200508_ECareerCity, METADATA_PARAMS(Z_Construct_UClass_AELCareerSquareManager_Statics::NewProp_m_CurrentPlayerStayCity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerSquareManager_Statics::NewProp_m_CurrentPlayerStayCity_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELCareerSquareManager_Statics::NewProp_m_NextPlayerStayCity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerSquareManager_Statics::NewProp_m_NextPlayerStayCity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerSquareManager" },
		{ "ModuleRelativePath", "Public/ELCareerSquareManager.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELCareerSquareManager_Statics::NewProp_m_NextPlayerStayCity = { "m_NextPlayerStayCity", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerSquareManager, m_NextPlayerStayCity), Z_Construct_UEnum_ABP_200508_ECareerCity, METADATA_PARAMS(Z_Construct_UClass_AELCareerSquareManager_Statics::NewProp_m_NextPlayerStayCity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerSquareManager_Statics::NewProp_m_NextPlayerStayCity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELCareerSquareManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerSquareManager_Statics::NewProp_m_CareerSquareTable_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerSquareManager_Statics::NewProp_m_CareerSquareTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerSquareManager_Statics::NewProp_m_CurrentPlayerStayCity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerSquareManager_Statics::NewProp_m_CurrentPlayerStayCity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerSquareManager_Statics::NewProp_m_NextPlayerStayCity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerSquareManager_Statics::NewProp_m_NextPlayerStayCity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELCareerSquareManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELCareerSquareManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELCareerSquareManager_Statics::ClassParams = {
		&AELCareerSquareManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELCareerSquareManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerSquareManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELCareerSquareManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerSquareManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELCareerSquareManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELCareerSquareManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELCareerSquareManager, 441129234);
	template<> ABP_200508_API UClass* StaticClass<AELCareerSquareManager>()
	{
		return AELCareerSquareManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELCareerSquareManager(Z_Construct_UClass_AELCareerSquareManager, &AELCareerSquareManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELCareerSquareManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELCareerSquareManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
