// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SaveDataObject_Achievement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveDataObject_Achievement() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObject_Achievement_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObject_Achievement();
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObjectBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELAchievementList();
// End Cross Module References
	DEFINE_FUNCTION(USaveDataObject_Achievement::execAddAchievementCount)
	{
		P_GET_ENUM(EELAchievementList,Z_Param__Achievement);
		P_GET_PROPERTY(FIntProperty,Z_Param__Add);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddAchievementCount(EELAchievementList(Z_Param__Achievement),Z_Param__Add);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_Achievement::execGetAchievementCount)
	{
		P_GET_ENUM(EELAchievementList,Z_Param__Achievement);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAchievementCount(EELAchievementList(Z_Param__Achievement));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_Achievement::execGetAchievementStatus)
	{
		P_GET_ENUM(EELAchievementList,Z_Param__Achievement);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAchievementStatus(EELAchievementList(Z_Param__Achievement));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_Achievement::execSetAchievementCount)
	{
		P_GET_ENUM(EELAchievementList,Z_Param__Achievement);
		P_GET_PROPERTY(FIntProperty,Z_Param__Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAchievementCount(EELAchievementList(Z_Param__Achievement),Z_Param__Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_Achievement::execSetAchievementStatus)
	{
		P_GET_ENUM(EELAchievementList,Z_Param__Achievement);
		P_GET_UBOOL(Z_Param__Status);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAchievementStatus(EELAchievementList(Z_Param__Achievement),Z_Param__Status);
		P_NATIVE_END;
	}
	void USaveDataObject_Achievement::StaticRegisterNativesUSaveDataObject_Achievement()
	{
		UClass* Class = USaveDataObject_Achievement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAchievementCount", &USaveDataObject_Achievement::execAddAchievementCount },
			{ "GetAchievementCount", &USaveDataObject_Achievement::execGetAchievementCount },
			{ "GetAchievementStatus", &USaveDataObject_Achievement::execGetAchievementStatus },
			{ "SetAchievementCount", &USaveDataObject_Achievement::execSetAchievementCount },
			{ "SetAchievementStatus", &USaveDataObject_Achievement::execSetAchievementStatus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveDataObject_Achievement_AddAchievementCount_Statics
	{
		struct SaveDataObject_Achievement_eventAddAchievementCount_Parms
		{
			EELAchievementList _Achievement;
			int32 _Add;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__Achievement_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__Achievement;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Add;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_Achievement_AddAchievementCount_Statics::NewProp__Achievement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataObject_Achievement_AddAchievementCount_Statics::NewProp__Achievement = { "_Achievement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_Achievement_eventAddAchievementCount_Parms, _Achievement), Z_Construct_UEnum_ELITE_Game_EELAchievementList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_Achievement_AddAchievementCount_Statics::NewProp__Add = { "_Add", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_Achievement_eventAddAchievementCount_Parms, _Add), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_Achievement_AddAchievementCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_Achievement_eventAddAchievementCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_Achievement_AddAchievementCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_Achievement_AddAchievementCount_Statics::NewProp__Achievement_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_Achievement_AddAchievementCount_Statics::NewProp__Achievement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_Achievement_AddAchievementCount_Statics::NewProp__Add,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_Achievement_AddAchievementCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_Achievement_AddAchievementCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_Achievement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_Achievement_AddAchievementCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_Achievement, nullptr, "AddAchievementCount", nullptr, nullptr, sizeof(SaveDataObject_Achievement_eventAddAchievementCount_Parms), Z_Construct_UFunction_USaveDataObject_Achievement_AddAchievementCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_Achievement_AddAchievementCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_Achievement_AddAchievementCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_Achievement_AddAchievementCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_Achievement_AddAchievementCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_Achievement_AddAchievementCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_Achievement_GetAchievementCount_Statics
	{
		struct SaveDataObject_Achievement_eventGetAchievementCount_Parms
		{
			EELAchievementList _Achievement;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__Achievement_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__Achievement;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_Achievement_GetAchievementCount_Statics::NewProp__Achievement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataObject_Achievement_GetAchievementCount_Statics::NewProp__Achievement = { "_Achievement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_Achievement_eventGetAchievementCount_Parms, _Achievement), Z_Construct_UEnum_ELITE_Game_EELAchievementList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_Achievement_GetAchievementCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_Achievement_eventGetAchievementCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_Achievement_GetAchievementCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_Achievement_GetAchievementCount_Statics::NewProp__Achievement_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_Achievement_GetAchievementCount_Statics::NewProp__Achievement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_Achievement_GetAchievementCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_Achievement_GetAchievementCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_Achievement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_Achievement_GetAchievementCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_Achievement, nullptr, "GetAchievementCount", nullptr, nullptr, sizeof(SaveDataObject_Achievement_eventGetAchievementCount_Parms), Z_Construct_UFunction_USaveDataObject_Achievement_GetAchievementCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_Achievement_GetAchievementCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_Achievement_GetAchievementCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_Achievement_GetAchievementCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_Achievement_GetAchievementCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_Achievement_GetAchievementCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_Achievement_GetAchievementStatus_Statics
	{
		struct SaveDataObject_Achievement_eventGetAchievementStatus_Parms
		{
			EELAchievementList _Achievement;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__Achievement_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__Achievement;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_Achievement_GetAchievementStatus_Statics::NewProp__Achievement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataObject_Achievement_GetAchievementStatus_Statics::NewProp__Achievement = { "_Achievement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_Achievement_eventGetAchievementStatus_Parms, _Achievement), Z_Construct_UEnum_ELITE_Game_EELAchievementList, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataObject_Achievement_GetAchievementStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataObject_Achievement_eventGetAchievementStatus_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_Achievement_GetAchievementStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_Achievement_eventGetAchievementStatus_Parms), &Z_Construct_UFunction_USaveDataObject_Achievement_GetAchievementStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_Achievement_GetAchievementStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_Achievement_GetAchievementStatus_Statics::NewProp__Achievement_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_Achievement_GetAchievementStatus_Statics::NewProp__Achievement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_Achievement_GetAchievementStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_Achievement_GetAchievementStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_Achievement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_Achievement_GetAchievementStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_Achievement, nullptr, "GetAchievementStatus", nullptr, nullptr, sizeof(SaveDataObject_Achievement_eventGetAchievementStatus_Parms), Z_Construct_UFunction_USaveDataObject_Achievement_GetAchievementStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_Achievement_GetAchievementStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_Achievement_GetAchievementStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_Achievement_GetAchievementStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_Achievement_GetAchievementStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_Achievement_GetAchievementStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_Achievement_SetAchievementCount_Statics
	{
		struct SaveDataObject_Achievement_eventSetAchievementCount_Parms
		{
			EELAchievementList _Achievement;
			int32 _Count;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__Achievement_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__Achievement;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_Achievement_SetAchievementCount_Statics::NewProp__Achievement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataObject_Achievement_SetAchievementCount_Statics::NewProp__Achievement = { "_Achievement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_Achievement_eventSetAchievementCount_Parms, _Achievement), Z_Construct_UEnum_ELITE_Game_EELAchievementList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_Achievement_SetAchievementCount_Statics::NewProp__Count = { "_Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_Achievement_eventSetAchievementCount_Parms, _Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_Achievement_SetAchievementCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_Achievement_SetAchievementCount_Statics::NewProp__Achievement_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_Achievement_SetAchievementCount_Statics::NewProp__Achievement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_Achievement_SetAchievementCount_Statics::NewProp__Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_Achievement_SetAchievementCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_Achievement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_Achievement_SetAchievementCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_Achievement, nullptr, "SetAchievementCount", nullptr, nullptr, sizeof(SaveDataObject_Achievement_eventSetAchievementCount_Parms), Z_Construct_UFunction_USaveDataObject_Achievement_SetAchievementCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_Achievement_SetAchievementCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_Achievement_SetAchievementCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_Achievement_SetAchievementCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_Achievement_SetAchievementCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_Achievement_SetAchievementCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_Achievement_SetAchievementStatus_Statics
	{
		struct SaveDataObject_Achievement_eventSetAchievementStatus_Parms
		{
			EELAchievementList _Achievement;
			bool _Status;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__Achievement_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__Achievement;
		static void NewProp__Status_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_Achievement_SetAchievementStatus_Statics::NewProp__Achievement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataObject_Achievement_SetAchievementStatus_Statics::NewProp__Achievement = { "_Achievement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_Achievement_eventSetAchievementStatus_Parms, _Achievement), Z_Construct_UEnum_ELITE_Game_EELAchievementList, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataObject_Achievement_SetAchievementStatus_Statics::NewProp__Status_SetBit(void* Obj)
	{
		((SaveDataObject_Achievement_eventSetAchievementStatus_Parms*)Obj)->_Status = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_Achievement_SetAchievementStatus_Statics::NewProp__Status = { "_Status", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_Achievement_eventSetAchievementStatus_Parms), &Z_Construct_UFunction_USaveDataObject_Achievement_SetAchievementStatus_Statics::NewProp__Status_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_Achievement_SetAchievementStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_Achievement_SetAchievementStatus_Statics::NewProp__Achievement_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_Achievement_SetAchievementStatus_Statics::NewProp__Achievement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_Achievement_SetAchievementStatus_Statics::NewProp__Status,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_Achievement_SetAchievementStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_Achievement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_Achievement_SetAchievementStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_Achievement, nullptr, "SetAchievementStatus", nullptr, nullptr, sizeof(SaveDataObject_Achievement_eventSetAchievementStatus_Parms), Z_Construct_UFunction_USaveDataObject_Achievement_SetAchievementStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_Achievement_SetAchievementStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_Achievement_SetAchievementStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_Achievement_SetAchievementStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_Achievement_SetAchievementStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_Achievement_SetAchievementStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USaveDataObject_Achievement_NoRegister()
	{
		return USaveDataObject_Achievement::StaticClass();
	}
	struct Z_Construct_UClass_USaveDataObject_Achievement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveDataObject_Achievement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveDataObjectBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveDataObject_Achievement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveDataObject_Achievement_AddAchievementCount, "AddAchievementCount" }, // 960663206
		{ &Z_Construct_UFunction_USaveDataObject_Achievement_GetAchievementCount, "GetAchievementCount" }, // 1239403392
		{ &Z_Construct_UFunction_USaveDataObject_Achievement_GetAchievementStatus, "GetAchievementStatus" }, // 1311771601
		{ &Z_Construct_UFunction_USaveDataObject_Achievement_SetAchievementCount, "SetAchievementCount" }, // 2961132618
		{ &Z_Construct_UFunction_USaveDataObject_Achievement_SetAchievementStatus, "SetAchievementStatus" }, // 167427477
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveDataObject_Achievement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveDataObject_Achievement.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveDataObject_Achievement.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveDataObject_Achievement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveDataObject_Achievement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveDataObject_Achievement_Statics::ClassParams = {
		&USaveDataObject_Achievement::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USaveDataObject_Achievement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveDataObject_Achievement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveDataObject_Achievement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveDataObject_Achievement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveDataObject_Achievement, 2093735880);
	template<> ABP_200508_API UClass* StaticClass<USaveDataObject_Achievement>()
	{
		return USaveDataObject_Achievement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveDataObject_Achievement(Z_Construct_UClass_USaveDataObject_Achievement, &USaveDataObject_Achievement::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USaveDataObject_Achievement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveDataObject_Achievement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
