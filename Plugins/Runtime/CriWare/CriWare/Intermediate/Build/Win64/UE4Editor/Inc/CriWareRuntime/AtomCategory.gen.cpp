// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomCategory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomCategory() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomCategory_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomCategory();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacInfo();
// End Cross Module References
	DEFINE_FUNCTION(UAtomCategory::execGetAttachedAisacInfoById)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CategoryID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AisacAttachedIndex);
		P_GET_UBOOL_REF(Z_Param_Out_IsSuccess);
		P_GET_STRUCT_REF(FAtomAisacInfo,Z_Param_Out_AisacInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomCategory::GetAttachedAisacInfoById(Z_Param_CategoryID,Z_Param_AisacAttachedIndex,Z_Param_Out_IsSuccess,Z_Param_Out_AisacInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomCategory::execGetAttachedAisacInfoByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
		P_GET_PROPERTY(FIntProperty,Z_Param_AisacAttachedIndex);
		P_GET_UBOOL_REF(Z_Param_Out_IsSuccess);
		P_GET_STRUCT_REF(FAtomAisacInfo,Z_Param_Out_AisacInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomCategory::GetAttachedAisacInfoByName(Z_Param_CategoryName,Z_Param_AisacAttachedIndex,Z_Param_Out_IsSuccess,Z_Param_Out_AisacInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomCategory::execGetCurrentAisacControlValueById)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CategoryID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AisacControlID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAtomCategory::GetCurrentAisacControlValueById(Z_Param_CategoryID,Z_Param_AisacControlID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomCategory::execGetCurrentAisacControlValueByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
		P_GET_PROPERTY(FStrProperty,Z_Param_AisacControlName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAtomCategory::GetCurrentAisacControlValueByName(Z_Param_CategoryName,Z_Param_AisacControlName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomCategory::execGetNumAttachedAisacsById)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CategoryID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UAtomCategory::GetNumAttachedAisacsById(Z_Param_CategoryID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomCategory::execGetNumAttachedAisacsByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UAtomCategory::GetNumAttachedAisacsByName(Z_Param_CategoryName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomCategory::execGetVolumeByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAtomCategory::GetVolumeByName(Z_Param_CategoryName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomCategory::execIsPausedByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtomCategory::IsPausedByName(Z_Param_CategoryName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomCategory::execPauseByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
		P_GET_UBOOL(Z_Param_bPause);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomCategory::PauseByName(Z_Param_CategoryName,Z_Param_bPause);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomCategory::execResetAllAisacControlById)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CategoryID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtomCategory::ResetAllAisacControlById(Z_Param_CategoryID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomCategory::execResetAllAisacControlByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtomCategory::ResetAllAisacControlByName(Z_Param_CategoryName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomCategory::execSetAisacControlByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
		P_GET_PROPERTY(FStrProperty,Z_Param_AisacName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomCategory::SetAisacControlByName(Z_Param_CategoryName,Z_Param_AisacName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomCategory::execSetMute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
		P_GET_UBOOL(Z_Param_IsMute);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomCategory::SetMute(Z_Param_CategoryName,Z_Param_IsMute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomCategory::execSetVolumeByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomCategory::SetVolumeByName(Z_Param_CategoryName,Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomCategory::execStopByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomCategory::StopByName(Z_Param_CategoryName);
		P_NATIVE_END;
	}
	void UAtomCategory::StaticRegisterNativesUAtomCategory()
	{
		UClass* Class = UAtomCategory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttachedAisacInfoById", &UAtomCategory::execGetAttachedAisacInfoById },
			{ "GetAttachedAisacInfoByName", &UAtomCategory::execGetAttachedAisacInfoByName },
			{ "GetCurrentAisacControlValueById", &UAtomCategory::execGetCurrentAisacControlValueById },
			{ "GetCurrentAisacControlValueByName", &UAtomCategory::execGetCurrentAisacControlValueByName },
			{ "GetNumAttachedAisacsById", &UAtomCategory::execGetNumAttachedAisacsById },
			{ "GetNumAttachedAisacsByName", &UAtomCategory::execGetNumAttachedAisacsByName },
			{ "GetVolumeByName", &UAtomCategory::execGetVolumeByName },
			{ "IsPausedByName", &UAtomCategory::execIsPausedByName },
			{ "PauseByName", &UAtomCategory::execPauseByName },
			{ "ResetAllAisacControlById", &UAtomCategory::execResetAllAisacControlById },
			{ "ResetAllAisacControlByName", &UAtomCategory::execResetAllAisacControlByName },
			{ "SetAisacControlByName", &UAtomCategory::execSetAisacControlByName },
			{ "SetMute", &UAtomCategory::execSetMute },
			{ "SetVolumeByName", &UAtomCategory::execSetVolumeByName },
			{ "StopByName", &UAtomCategory::execStopByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics
	{
		struct AtomCategory_eventGetAttachedAisacInfoById_Parms
		{
			int32 CategoryID;
			int32 AisacAttachedIndex;
			bool IsSuccess;
			FAtomAisacInfo AisacInfo;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CategoryID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AisacAttachedIndex;
		static void NewProp_IsSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSuccess;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AisacInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::NewProp_CategoryID = { "CategoryID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventGetAttachedAisacInfoById_Parms, CategoryID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::NewProp_AisacAttachedIndex = { "AisacAttachedIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventGetAttachedAisacInfoById_Parms, AisacAttachedIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::NewProp_IsSuccess_SetBit(void* Obj)
	{
		((AtomCategory_eventGetAttachedAisacInfoById_Parms*)Obj)->IsSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::NewProp_IsSuccess = { "IsSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomCategory_eventGetAttachedAisacInfoById_Parms), &Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::NewProp_IsSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::NewProp_AisacInfo = { "AisacInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventGetAttachedAisacInfoById_Parms, AisacInfo), Z_Construct_UScriptStruct_FAtomAisacInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::NewProp_CategoryID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::NewProp_AisacAttachedIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::NewProp_IsSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::NewProp_AisacInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCategory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "GetAttachedAisacInfoById", nullptr, nullptr, sizeof(AtomCategory_eventGetAttachedAisacInfoById_Parms), Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics
	{
		struct AtomCategory_eventGetAttachedAisacInfoByName_Parms
		{
			FString CategoryName;
			int32 AisacAttachedIndex;
			bool IsSuccess;
			FAtomAisacInfo AisacInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AisacAttachedIndex;
		static void NewProp_IsSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSuccess;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AisacInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::NewProp_CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventGetAttachedAisacInfoByName_Parms, CategoryName), METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::NewProp_CategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::NewProp_CategoryName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::NewProp_AisacAttachedIndex = { "AisacAttachedIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventGetAttachedAisacInfoByName_Parms, AisacAttachedIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::NewProp_IsSuccess_SetBit(void* Obj)
	{
		((AtomCategory_eventGetAttachedAisacInfoByName_Parms*)Obj)->IsSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::NewProp_IsSuccess = { "IsSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomCategory_eventGetAttachedAisacInfoByName_Parms), &Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::NewProp_IsSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::NewProp_AisacInfo = { "AisacInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventGetAttachedAisacInfoByName_Parms, AisacInfo), Z_Construct_UScriptStruct_FAtomAisacInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::NewProp_CategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::NewProp_AisacAttachedIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::NewProp_IsSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::NewProp_AisacInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCategory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "GetAttachedAisacInfoByName", nullptr, nullptr, sizeof(AtomCategory_eventGetAttachedAisacInfoByName_Parms), Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics
	{
		struct AtomCategory_eventGetCurrentAisacControlValueById_Parms
		{
			int32 CategoryID;
			int32 AisacControlID;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CategoryID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AisacControlID;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::NewProp_CategoryID = { "CategoryID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventGetCurrentAisacControlValueById_Parms, CategoryID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::NewProp_AisacControlID = { "AisacControlID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventGetCurrentAisacControlValueById_Parms, AisacControlID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventGetCurrentAisacControlValueById_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::NewProp_CategoryID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::NewProp_AisacControlID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCategory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "GetCurrentAisacControlValueById", nullptr, nullptr, sizeof(AtomCategory_eventGetCurrentAisacControlValueById_Parms), Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics
	{
		struct AtomCategory_eventGetCurrentAisacControlValueByName_Parms
		{
			FString CategoryName;
			FString AisacControlName;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AisacControlName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AisacControlName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::NewProp_CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventGetCurrentAisacControlValueByName_Parms, CategoryName), METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::NewProp_CategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::NewProp_CategoryName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::NewProp_AisacControlName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::NewProp_AisacControlName = { "AisacControlName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventGetCurrentAisacControlValueByName_Parms, AisacControlName), METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::NewProp_AisacControlName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::NewProp_AisacControlName_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventGetCurrentAisacControlValueByName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::NewProp_CategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::NewProp_AisacControlName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCategory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "GetCurrentAisacControlValueByName", nullptr, nullptr, sizeof(AtomCategory_eventGetCurrentAisacControlValueByName_Parms), Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics
	{
		struct AtomCategory_eventGetNumAttachedAisacsById_Parms
		{
			int32 CategoryID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CategoryID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics::NewProp_CategoryID = { "CategoryID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventGetNumAttachedAisacsById_Parms, CategoryID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventGetNumAttachedAisacsById_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics::NewProp_CategoryID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCategory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "GetNumAttachedAisacsById", nullptr, nullptr, sizeof(AtomCategory_eventGetNumAttachedAisacsById_Parms), Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics
	{
		struct AtomCategory_eventGetNumAttachedAisacsByName_Parms
		{
			FString CategoryName;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::NewProp_CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventGetNumAttachedAisacsByName_Parms, CategoryName), METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::NewProp_CategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::NewProp_CategoryName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventGetNumAttachedAisacsByName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::NewProp_CategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCategory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "GetNumAttachedAisacsByName", nullptr, nullptr, sizeof(AtomCategory_eventGetNumAttachedAisacsByName_Parms), Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics
	{
		struct AtomCategory_eventGetVolumeByName_Parms
		{
			FString CategoryName;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::NewProp_CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventGetVolumeByName_Parms, CategoryName), METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::NewProp_CategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::NewProp_CategoryName_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventGetVolumeByName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::NewProp_CategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCategory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "GetVolumeByName", nullptr, nullptr, sizeof(AtomCategory_eventGetVolumeByName_Parms), Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCategory_GetVolumeByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics
	{
		struct AtomCategory_eventIsPausedByName_Parms
		{
			FString CategoryName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::NewProp_CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventIsPausedByName_Parms, CategoryName), METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::NewProp_CategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::NewProp_CategoryName_MetaData)) };
	void Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomCategory_eventIsPausedByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomCategory_eventIsPausedByName_Parms), &Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::NewProp_CategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCategory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "IsPausedByName", nullptr, nullptr, sizeof(AtomCategory_eventIsPausedByName_Parms), Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCategory_IsPausedByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomCategory_PauseByName_Statics
	{
		struct AtomCategory_eventPauseByName_Parms
		{
			FString CategoryName;
			bool bPause;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryName;
		static void NewProp_bPause_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPause;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::NewProp_CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventPauseByName_Parms, CategoryName), METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::NewProp_CategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::NewProp_CategoryName_MetaData)) };
	void Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::NewProp_bPause_SetBit(void* Obj)
	{
		((AtomCategory_eventPauseByName_Parms*)Obj)->bPause = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::NewProp_bPause = { "bPause", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomCategory_eventPauseByName_Parms), &Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::NewProp_bPause_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::NewProp_CategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::NewProp_bPause,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCategory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "PauseByName", nullptr, nullptr, sizeof(AtomCategory_eventPauseByName_Parms), Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCategory_PauseByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics
	{
		struct AtomCategory_eventResetAllAisacControlById_Parms
		{
			int32 CategoryID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CategoryID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::NewProp_CategoryID = { "CategoryID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventResetAllAisacControlById_Parms, CategoryID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomCategory_eventResetAllAisacControlById_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomCategory_eventResetAllAisacControlById_Parms), &Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::NewProp_CategoryID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCategory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "ResetAllAisacControlById", nullptr, nullptr, sizeof(AtomCategory_eventResetAllAisacControlById_Parms), Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics
	{
		struct AtomCategory_eventResetAllAisacControlByName_Parms
		{
			FString CategoryName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::NewProp_CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventResetAllAisacControlByName_Parms, CategoryName), METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::NewProp_CategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::NewProp_CategoryName_MetaData)) };
	void Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomCategory_eventResetAllAisacControlByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomCategory_eventResetAllAisacControlByName_Parms), &Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::NewProp_CategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCategory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "ResetAllAisacControlByName", nullptr, nullptr, sizeof(AtomCategory_eventResetAllAisacControlByName_Parms), Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics
	{
		struct AtomCategory_eventSetAisacControlByName_Parms
		{
			FString CategoryName;
			FString AisacName;
			float Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AisacName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AisacName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::NewProp_CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventSetAisacControlByName_Parms, CategoryName), METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::NewProp_CategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::NewProp_CategoryName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::NewProp_AisacName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::NewProp_AisacName = { "AisacName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventSetAisacControlByName_Parms, AisacName), METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::NewProp_AisacName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::NewProp_AisacName_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventSetAisacControlByName_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::NewProp_CategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::NewProp_AisacName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCategory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "SetAisacControlByName", nullptr, nullptr, sizeof(AtomCategory_eventSetAisacControlByName_Parms), Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCategory_SetAisacControlByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomCategory_SetMute_Statics
	{
		struct AtomCategory_eventSetMute_Parms
		{
			FString CategoryName;
			bool IsMute;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryName;
		static void NewProp_IsMute_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsMute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_SetMute_Statics::NewProp_CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCategory_SetMute_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventSetMute_Parms, CategoryName), METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_SetMute_Statics::NewProp_CategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_SetMute_Statics::NewProp_CategoryName_MetaData)) };
	void Z_Construct_UFunction_UAtomCategory_SetMute_Statics::NewProp_IsMute_SetBit(void* Obj)
	{
		((AtomCategory_eventSetMute_Parms*)Obj)->IsMute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomCategory_SetMute_Statics::NewProp_IsMute = { "IsMute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomCategory_eventSetMute_Parms), &Z_Construct_UFunction_UAtomCategory_SetMute_Statics::NewProp_IsMute_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_SetMute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_SetMute_Statics::NewProp_CategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_SetMute_Statics::NewProp_IsMute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_SetMute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCategory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_SetMute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "SetMute", nullptr, nullptr, sizeof(AtomCategory_eventSetMute_Parms), Z_Construct_UFunction_UAtomCategory_SetMute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_SetMute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_SetMute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_SetMute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCategory_SetMute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomCategory_SetMute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics
	{
		struct AtomCategory_eventSetVolumeByName_Parms
		{
			FString CategoryName;
			float Volume;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::NewProp_CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventSetVolumeByName_Parms, CategoryName), METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::NewProp_CategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::NewProp_CategoryName_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventSetVolumeByName_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::NewProp_CategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCategory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "SetVolumeByName", nullptr, nullptr, sizeof(AtomCategory_eventSetVolumeByName_Parms), Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCategory_SetVolumeByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomCategory_StopByName_Statics
	{
		struct AtomCategory_eventStopByName_Parms
		{
			FString CategoryName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_StopByName_Statics::NewProp_CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCategory_StopByName_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventStopByName_Parms, CategoryName), METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_StopByName_Statics::NewProp_CategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_StopByName_Statics::NewProp_CategoryName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_StopByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_StopByName_Statics::NewProp_CategoryName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_StopByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCategory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_StopByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "StopByName", nullptr, nullptr, sizeof(AtomCategory_eventStopByName_Parms), Z_Construct_UFunction_UAtomCategory_StopByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_StopByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_StopByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_StopByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCategory_StopByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomCategory_StopByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtomCategory_NoRegister()
	{
		return UAtomCategory::StaticClass();
	}
	struct Z_Construct_UClass_UAtomCategory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomCategory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomCategory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById, "GetAttachedAisacInfoById" }, // 1198388468
		{ &Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName, "GetAttachedAisacInfoByName" }, // 3047241461
		{ &Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById, "GetCurrentAisacControlValueById" }, // 1221634662
		{ &Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName, "GetCurrentAisacControlValueByName" }, // 421633286
		{ &Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById, "GetNumAttachedAisacsById" }, // 3641886464
		{ &Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName, "GetNumAttachedAisacsByName" }, // 3460061662
		{ &Z_Construct_UFunction_UAtomCategory_GetVolumeByName, "GetVolumeByName" }, // 2909403080
		{ &Z_Construct_UFunction_UAtomCategory_IsPausedByName, "IsPausedByName" }, // 602361849
		{ &Z_Construct_UFunction_UAtomCategory_PauseByName, "PauseByName" }, // 3670489306
		{ &Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById, "ResetAllAisacControlById" }, // 1126176516
		{ &Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName, "ResetAllAisacControlByName" }, // 1399032838
		{ &Z_Construct_UFunction_UAtomCategory_SetAisacControlByName, "SetAisacControlByName" }, // 428975210
		{ &Z_Construct_UFunction_UAtomCategory_SetMute, "SetMute" }, // 3089809059
		{ &Z_Construct_UFunction_UAtomCategory_SetVolumeByName, "SetVolumeByName" }, // 1746731677
		{ &Z_Construct_UFunction_UAtomCategory_StopByName, "StopByName" }, // 986888552
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomCategory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtomCategory.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomCategory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomCategory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomCategory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtomCategory_Statics::ClassParams = {
		&UAtomCategory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtomCategory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomCategory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomCategory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtomCategory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtomCategory, 2604541462);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomCategory>()
	{
		return UAtomCategory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtomCategory(Z_Construct_UClass_UAtomCategory, &UAtomCategory::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtomCategory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomCategory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
