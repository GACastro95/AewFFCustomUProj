// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SaveDataObject_JukeBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveDataObject_JukeBox() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObject_JukeBox_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObject_JukeBox();
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObjectBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELTmpJukeboxSaveData();
// End Cross Module References
	DEFINE_FUNCTION(USaveDataObject_JukeBox::execGetCurrentJukeBoxPlayCue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundAtomCue**)Z_Param__Result=P_THIS->GetCurrentJukeBoxPlayCue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_JukeBox::execGetCurrentPlayID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentPlayID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_JukeBox::execGetJukeBoxCheckList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetJukeBoxCheckList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_JukeBox::execGetJukeBoxCheckListForID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__targetId);
		P_GET_UBOOL_REF(Z_Param_Out__findParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetJukeBoxCheckListForID(Z_Param__targetId,Z_Param_Out__findParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_JukeBox::execGetJukeBoxPlayCue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__targetId);
		P_GET_UBOOL(Z_Param__inGameFlg);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundAtomCue**)Z_Param__Result=P_THIS->GetJukeBoxPlayCue(Z_Param__targetId,Z_Param__inGameFlg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_JukeBox::execGetJukeBoxPlayedList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetJukeBoxPlayedList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_JukeBox::execGetJukeBoxPlayedListForID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__targetId);
		P_GET_UBOOL_REF(Z_Param_Out__findParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetJukeBoxPlayedListForID(Z_Param__targetId,Z_Param_Out__findParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_JukeBox::execGetJukeBoxPlayList)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out__listArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetJukeBoxPlayList(Z_Param_Out__listArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_JukeBox::execGetJukeBoxSortList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetJukeBoxSortList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_JukeBox::execGetJukeBoxSortListForID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__targetId);
		P_GET_UBOOL_REF(Z_Param_Out__findParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetJukeBoxSortListForID(Z_Param__targetId,Z_Param_Out__findParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_JukeBox::execGetNextJukeBoxPlayCue)
	{
		P_GET_UBOOL(Z_Param__inGameFlg);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundAtomCue**)Z_Param__Result=P_THIS->GetNextJukeBoxPlayCue(Z_Param__inGameFlg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_JukeBox::execGetNextPlayID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNextPlayID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_JukeBox::execInitJukeBoxPlayedList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitJukeBoxPlayedList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_JukeBox::execInitJukeBoxSortList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitJukeBoxSortList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_JukeBox::execIsCreateSavedata)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCreateSavedata();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_JukeBox::execIsRandomPlayback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRandomPlayback();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_JukeBox::execSetCreateSavedata)
	{
		P_GET_UBOOL(Z_Param__create);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCreateSavedata(Z_Param__create);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_JukeBox::execSetCurrentPlayID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentPlayID(Z_Param__id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_JukeBox::execSetJukeBoxCheckListForID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__targetId);
		P_GET_UBOOL(Z_Param__Enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetJukeBoxCheckListForID(Z_Param__targetId,Z_Param__Enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_JukeBox::execSetJukeBoxPlayedListForID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__targetId);
		P_GET_UBOOL(Z_Param__Enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetJukeBoxPlayedListForID(Z_Param__targetId,Z_Param__Enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_JukeBox::execSetJukeBoxSortListForID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__targetId);
		P_GET_PROPERTY(FIntProperty,Z_Param__sortNo);
		P_GET_UBOOL(Z_Param__Enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetJukeBoxSortListForID(Z_Param__targetId,Z_Param__sortNo,Z_Param__Enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_JukeBox::execSetNextPlayID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNextPlayID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_JukeBox::execSetNextPlayIDForRandom)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNextPlayIDForRandom();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_JukeBox::execSetRandomPlayback)
	{
		P_GET_UBOOL(Z_Param__random);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRandomPlayback(Z_Param__random);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_JukeBox::execSetUpdated)
	{
		P_GET_UBOOL(Z_Param__update);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUpdated(Z_Param__update);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_JukeBox::execUpdateSavedataForTmpData)
	{
		P_GET_STRUCT(FELTmpJukeboxSaveData,Z_Param__tmpData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSavedataForTmpData(Z_Param__tmpData);
		P_NATIVE_END;
	}
	void USaveDataObject_JukeBox::StaticRegisterNativesUSaveDataObject_JukeBox()
	{
		UClass* Class = USaveDataObject_JukeBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentJukeBoxPlayCue", &USaveDataObject_JukeBox::execGetCurrentJukeBoxPlayCue },
			{ "GetCurrentPlayID", &USaveDataObject_JukeBox::execGetCurrentPlayID },
			{ "GetJukeBoxCheckList", &USaveDataObject_JukeBox::execGetJukeBoxCheckList },
			{ "GetJukeBoxCheckListForID", &USaveDataObject_JukeBox::execGetJukeBoxCheckListForID },
			{ "GetJukeBoxPlayCue", &USaveDataObject_JukeBox::execGetJukeBoxPlayCue },
			{ "GetJukeBoxPlayedList", &USaveDataObject_JukeBox::execGetJukeBoxPlayedList },
			{ "GetJukeBoxPlayedListForID", &USaveDataObject_JukeBox::execGetJukeBoxPlayedListForID },
			{ "GetJukeBoxPlayList", &USaveDataObject_JukeBox::execGetJukeBoxPlayList },
			{ "GetJukeBoxSortList", &USaveDataObject_JukeBox::execGetJukeBoxSortList },
			{ "GetJukeBoxSortListForID", &USaveDataObject_JukeBox::execGetJukeBoxSortListForID },
			{ "GetNextJukeBoxPlayCue", &USaveDataObject_JukeBox::execGetNextJukeBoxPlayCue },
			{ "GetNextPlayID", &USaveDataObject_JukeBox::execGetNextPlayID },
			{ "InitJukeBoxPlayedList", &USaveDataObject_JukeBox::execInitJukeBoxPlayedList },
			{ "InitJukeBoxSortList", &USaveDataObject_JukeBox::execInitJukeBoxSortList },
			{ "IsCreateSavedata", &USaveDataObject_JukeBox::execIsCreateSavedata },
			{ "IsRandomPlayback", &USaveDataObject_JukeBox::execIsRandomPlayback },
			{ "SetCreateSavedata", &USaveDataObject_JukeBox::execSetCreateSavedata },
			{ "SetCurrentPlayID", &USaveDataObject_JukeBox::execSetCurrentPlayID },
			{ "SetJukeBoxCheckListForID", &USaveDataObject_JukeBox::execSetJukeBoxCheckListForID },
			{ "SetJukeBoxPlayedListForID", &USaveDataObject_JukeBox::execSetJukeBoxPlayedListForID },
			{ "SetJukeBoxSortListForID", &USaveDataObject_JukeBox::execSetJukeBoxSortListForID },
			{ "SetNextPlayID", &USaveDataObject_JukeBox::execSetNextPlayID },
			{ "SetNextPlayIDForRandom", &USaveDataObject_JukeBox::execSetNextPlayIDForRandom },
			{ "SetRandomPlayback", &USaveDataObject_JukeBox::execSetRandomPlayback },
			{ "SetUpdated", &USaveDataObject_JukeBox::execSetUpdated },
			{ "UpdateSavedataForTmpData", &USaveDataObject_JukeBox::execUpdateSavedataForTmpData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveDataObject_JukeBox_GetCurrentJukeBoxPlayCue_Statics
	{
		struct SaveDataObject_JukeBox_eventGetCurrentJukeBoxPlayCue_Parms
		{
			USoundAtomCue* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_GetCurrentJukeBoxPlayCue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_JukeBox_eventGetCurrentJukeBoxPlayCue_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_JukeBox_GetCurrentJukeBoxPlayCue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_GetCurrentJukeBoxPlayCue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_JukeBox_GetCurrentJukeBoxPlayCue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_JukeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_JukeBox_GetCurrentJukeBoxPlayCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_JukeBox, nullptr, "GetCurrentJukeBoxPlayCue", nullptr, nullptr, sizeof(SaveDataObject_JukeBox_eventGetCurrentJukeBoxPlayCue_Parms), Z_Construct_UFunction_USaveDataObject_JukeBox_GetCurrentJukeBoxPlayCue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_GetCurrentJukeBoxPlayCue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_JukeBox_GetCurrentJukeBoxPlayCue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_GetCurrentJukeBoxPlayCue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_JukeBox_GetCurrentJukeBoxPlayCue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_JukeBox_GetCurrentJukeBoxPlayCue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_JukeBox_GetCurrentPlayID_Statics
	{
		struct SaveDataObject_JukeBox_eventGetCurrentPlayID_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_GetCurrentPlayID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_JukeBox_eventGetCurrentPlayID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_JukeBox_GetCurrentPlayID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_GetCurrentPlayID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_JukeBox_GetCurrentPlayID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_JukeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_JukeBox_GetCurrentPlayID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_JukeBox, nullptr, "GetCurrentPlayID", nullptr, nullptr, sizeof(SaveDataObject_JukeBox_eventGetCurrentPlayID_Parms), Z_Construct_UFunction_USaveDataObject_JukeBox_GetCurrentPlayID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_GetCurrentPlayID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_JukeBox_GetCurrentPlayID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_GetCurrentPlayID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_JukeBox_GetCurrentPlayID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_JukeBox_GetCurrentPlayID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxCheckList_Statics
	{
		struct SaveDataObject_JukeBox_eventGetJukeBoxCheckList_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxCheckList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxCheckList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_JukeBox_eventGetJukeBoxCheckList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxCheckList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxCheckList_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxCheckList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxCheckList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_JukeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxCheckList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_JukeBox, nullptr, "GetJukeBoxCheckList", nullptr, nullptr, sizeof(SaveDataObject_JukeBox_eventGetJukeBoxCheckList_Parms), Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxCheckList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxCheckList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxCheckList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxCheckList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxCheckList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxCheckList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxCheckListForID_Statics
	{
		struct SaveDataObject_JukeBox_eventGetJukeBoxCheckListForID_Parms
		{
			int32 _targetId;
			bool _findParam;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetId;
		static void NewProp__findParam_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__findParam;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxCheckListForID_Statics::NewProp__targetId = { "_targetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_JukeBox_eventGetJukeBoxCheckListForID_Parms, _targetId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxCheckListForID_Statics::NewProp__findParam_SetBit(void* Obj)
	{
		((SaveDataObject_JukeBox_eventGetJukeBoxCheckListForID_Parms*)Obj)->_findParam = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxCheckListForID_Statics::NewProp__findParam = { "_findParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_JukeBox_eventGetJukeBoxCheckListForID_Parms), &Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxCheckListForID_Statics::NewProp__findParam_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxCheckListForID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataObject_JukeBox_eventGetJukeBoxCheckListForID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxCheckListForID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_JukeBox_eventGetJukeBoxCheckListForID_Parms), &Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxCheckListForID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxCheckListForID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxCheckListForID_Statics::NewProp__targetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxCheckListForID_Statics::NewProp__findParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxCheckListForID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxCheckListForID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_JukeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxCheckListForID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_JukeBox, nullptr, "GetJukeBoxCheckListForID", nullptr, nullptr, sizeof(SaveDataObject_JukeBox_eventGetJukeBoxCheckListForID_Parms), Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxCheckListForID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxCheckListForID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxCheckListForID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxCheckListForID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxCheckListForID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxCheckListForID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayCue_Statics
	{
		struct SaveDataObject_JukeBox_eventGetJukeBoxPlayCue_Parms
		{
			int32 _targetId;
			bool _inGameFlg;
			USoundAtomCue* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetId;
		static void NewProp__inGameFlg_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__inGameFlg;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayCue_Statics::NewProp__targetId = { "_targetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_JukeBox_eventGetJukeBoxPlayCue_Parms, _targetId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayCue_Statics::NewProp__inGameFlg_SetBit(void* Obj)
	{
		((SaveDataObject_JukeBox_eventGetJukeBoxPlayCue_Parms*)Obj)->_inGameFlg = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayCue_Statics::NewProp__inGameFlg = { "_inGameFlg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_JukeBox_eventGetJukeBoxPlayCue_Parms), &Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayCue_Statics::NewProp__inGameFlg_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayCue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_JukeBox_eventGetJukeBoxPlayCue_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayCue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayCue_Statics::NewProp__targetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayCue_Statics::NewProp__inGameFlg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayCue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayCue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_JukeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_JukeBox, nullptr, "GetJukeBoxPlayCue", nullptr, nullptr, sizeof(SaveDataObject_JukeBox_eventGetJukeBoxPlayCue_Parms), Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayCue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayCue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayCue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayCue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayCue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayCue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayedList_Statics
	{
		struct SaveDataObject_JukeBox_eventGetJukeBoxPlayedList_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayedList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayedList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_JukeBox_eventGetJukeBoxPlayedList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayedList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayedList_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayedList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayedList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_JukeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayedList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_JukeBox, nullptr, "GetJukeBoxPlayedList", nullptr, nullptr, sizeof(SaveDataObject_JukeBox_eventGetJukeBoxPlayedList_Parms), Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayedList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayedList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayedList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayedList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayedList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayedList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayedListForID_Statics
	{
		struct SaveDataObject_JukeBox_eventGetJukeBoxPlayedListForID_Parms
		{
			int32 _targetId;
			bool _findParam;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetId;
		static void NewProp__findParam_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__findParam;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayedListForID_Statics::NewProp__targetId = { "_targetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_JukeBox_eventGetJukeBoxPlayedListForID_Parms, _targetId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayedListForID_Statics::NewProp__findParam_SetBit(void* Obj)
	{
		((SaveDataObject_JukeBox_eventGetJukeBoxPlayedListForID_Parms*)Obj)->_findParam = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayedListForID_Statics::NewProp__findParam = { "_findParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_JukeBox_eventGetJukeBoxPlayedListForID_Parms), &Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayedListForID_Statics::NewProp__findParam_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayedListForID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataObject_JukeBox_eventGetJukeBoxPlayedListForID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayedListForID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_JukeBox_eventGetJukeBoxPlayedListForID_Parms), &Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayedListForID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayedListForID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayedListForID_Statics::NewProp__targetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayedListForID_Statics::NewProp__findParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayedListForID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayedListForID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_JukeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayedListForID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_JukeBox, nullptr, "GetJukeBoxPlayedListForID", nullptr, nullptr, sizeof(SaveDataObject_JukeBox_eventGetJukeBoxPlayedListForID_Parms), Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayedListForID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayedListForID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayedListForID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayedListForID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayedListForID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayedListForID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayList_Statics
	{
		struct SaveDataObject_JukeBox_eventGetJukeBoxPlayList_Parms
		{
			TArray<int32> _listArray;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__listArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__listArray;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayList_Statics::NewProp__listArray_Inner = { "_listArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayList_Statics::NewProp__listArray = { "_listArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_JukeBox_eventGetJukeBoxPlayList_Parms, _listArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataObject_JukeBox_eventGetJukeBoxPlayList_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_JukeBox_eventGetJukeBoxPlayList_Parms), &Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayList_Statics::NewProp__listArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayList_Statics::NewProp__listArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_JukeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_JukeBox, nullptr, "GetJukeBoxPlayList", nullptr, nullptr, sizeof(SaveDataObject_JukeBox_eventGetJukeBoxPlayList_Parms), Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxSortList_Statics
	{
		struct SaveDataObject_JukeBox_eventGetJukeBoxSortList_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxSortList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxSortList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_JukeBox_eventGetJukeBoxSortList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxSortList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxSortList_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxSortList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxSortList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_JukeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxSortList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_JukeBox, nullptr, "GetJukeBoxSortList", nullptr, nullptr, sizeof(SaveDataObject_JukeBox_eventGetJukeBoxSortList_Parms), Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxSortList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxSortList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxSortList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxSortList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxSortList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxSortList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxSortListForID_Statics
	{
		struct SaveDataObject_JukeBox_eventGetJukeBoxSortListForID_Parms
		{
			int32 _targetId;
			bool _findParam;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetId;
		static void NewProp__findParam_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__findParam;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxSortListForID_Statics::NewProp__targetId = { "_targetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_JukeBox_eventGetJukeBoxSortListForID_Parms, _targetId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxSortListForID_Statics::NewProp__findParam_SetBit(void* Obj)
	{
		((SaveDataObject_JukeBox_eventGetJukeBoxSortListForID_Parms*)Obj)->_findParam = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxSortListForID_Statics::NewProp__findParam = { "_findParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_JukeBox_eventGetJukeBoxSortListForID_Parms), &Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxSortListForID_Statics::NewProp__findParam_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxSortListForID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_JukeBox_eventGetJukeBoxSortListForID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxSortListForID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxSortListForID_Statics::NewProp__targetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxSortListForID_Statics::NewProp__findParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxSortListForID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxSortListForID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_JukeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxSortListForID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_JukeBox, nullptr, "GetJukeBoxSortListForID", nullptr, nullptr, sizeof(SaveDataObject_JukeBox_eventGetJukeBoxSortListForID_Parms), Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxSortListForID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxSortListForID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxSortListForID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxSortListForID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxSortListForID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxSortListForID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_JukeBox_GetNextJukeBoxPlayCue_Statics
	{
		struct SaveDataObject_JukeBox_eventGetNextJukeBoxPlayCue_Parms
		{
			bool _inGameFlg;
			USoundAtomCue* ReturnValue;
		};
		static void NewProp__inGameFlg_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__inGameFlg;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveDataObject_JukeBox_GetNextJukeBoxPlayCue_Statics::NewProp__inGameFlg_SetBit(void* Obj)
	{
		((SaveDataObject_JukeBox_eventGetNextJukeBoxPlayCue_Parms*)Obj)->_inGameFlg = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_GetNextJukeBoxPlayCue_Statics::NewProp__inGameFlg = { "_inGameFlg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_JukeBox_eventGetNextJukeBoxPlayCue_Parms), &Z_Construct_UFunction_USaveDataObject_JukeBox_GetNextJukeBoxPlayCue_Statics::NewProp__inGameFlg_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_GetNextJukeBoxPlayCue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_JukeBox_eventGetNextJukeBoxPlayCue_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_JukeBox_GetNextJukeBoxPlayCue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_GetNextJukeBoxPlayCue_Statics::NewProp__inGameFlg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_GetNextJukeBoxPlayCue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_JukeBox_GetNextJukeBoxPlayCue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_JukeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_JukeBox_GetNextJukeBoxPlayCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_JukeBox, nullptr, "GetNextJukeBoxPlayCue", nullptr, nullptr, sizeof(SaveDataObject_JukeBox_eventGetNextJukeBoxPlayCue_Parms), Z_Construct_UFunction_USaveDataObject_JukeBox_GetNextJukeBoxPlayCue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_GetNextJukeBoxPlayCue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_JukeBox_GetNextJukeBoxPlayCue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_GetNextJukeBoxPlayCue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_JukeBox_GetNextJukeBoxPlayCue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_JukeBox_GetNextJukeBoxPlayCue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_JukeBox_GetNextPlayID_Statics
	{
		struct SaveDataObject_JukeBox_eventGetNextPlayID_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_GetNextPlayID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_JukeBox_eventGetNextPlayID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_JukeBox_GetNextPlayID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_GetNextPlayID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_JukeBox_GetNextPlayID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_JukeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_JukeBox_GetNextPlayID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_JukeBox, nullptr, "GetNextPlayID", nullptr, nullptr, sizeof(SaveDataObject_JukeBox_eventGetNextPlayID_Parms), Z_Construct_UFunction_USaveDataObject_JukeBox_GetNextPlayID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_GetNextPlayID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_JukeBox_GetNextPlayID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_GetNextPlayID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_JukeBox_GetNextPlayID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_JukeBox_GetNextPlayID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_JukeBox_InitJukeBoxPlayedList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_JukeBox_InitJukeBoxPlayedList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_JukeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_JukeBox_InitJukeBoxPlayedList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_JukeBox, nullptr, "InitJukeBoxPlayedList", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_JukeBox_InitJukeBoxPlayedList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_InitJukeBoxPlayedList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_JukeBox_InitJukeBoxPlayedList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_JukeBox_InitJukeBoxPlayedList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_JukeBox_InitJukeBoxSortList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_JukeBox_InitJukeBoxSortList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_JukeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_JukeBox_InitJukeBoxSortList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_JukeBox, nullptr, "InitJukeBoxSortList", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_JukeBox_InitJukeBoxSortList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_InitJukeBoxSortList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_JukeBox_InitJukeBoxSortList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_JukeBox_InitJukeBoxSortList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_JukeBox_IsCreateSavedata_Statics
	{
		struct SaveDataObject_JukeBox_eventIsCreateSavedata_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveDataObject_JukeBox_IsCreateSavedata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataObject_JukeBox_eventIsCreateSavedata_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_IsCreateSavedata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_JukeBox_eventIsCreateSavedata_Parms), &Z_Construct_UFunction_USaveDataObject_JukeBox_IsCreateSavedata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_JukeBox_IsCreateSavedata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_IsCreateSavedata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_JukeBox_IsCreateSavedata_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_JukeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_JukeBox_IsCreateSavedata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_JukeBox, nullptr, "IsCreateSavedata", nullptr, nullptr, sizeof(SaveDataObject_JukeBox_eventIsCreateSavedata_Parms), Z_Construct_UFunction_USaveDataObject_JukeBox_IsCreateSavedata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_IsCreateSavedata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_JukeBox_IsCreateSavedata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_IsCreateSavedata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_JukeBox_IsCreateSavedata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_JukeBox_IsCreateSavedata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_JukeBox_IsRandomPlayback_Statics
	{
		struct SaveDataObject_JukeBox_eventIsRandomPlayback_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveDataObject_JukeBox_IsRandomPlayback_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataObject_JukeBox_eventIsRandomPlayback_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_IsRandomPlayback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_JukeBox_eventIsRandomPlayback_Parms), &Z_Construct_UFunction_USaveDataObject_JukeBox_IsRandomPlayback_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_JukeBox_IsRandomPlayback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_IsRandomPlayback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_JukeBox_IsRandomPlayback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_JukeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_JukeBox_IsRandomPlayback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_JukeBox, nullptr, "IsRandomPlayback", nullptr, nullptr, sizeof(SaveDataObject_JukeBox_eventIsRandomPlayback_Parms), Z_Construct_UFunction_USaveDataObject_JukeBox_IsRandomPlayback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_IsRandomPlayback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_JukeBox_IsRandomPlayback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_IsRandomPlayback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_JukeBox_IsRandomPlayback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_JukeBox_IsRandomPlayback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_JukeBox_SetCreateSavedata_Statics
	{
		struct SaveDataObject_JukeBox_eventSetCreateSavedata_Parms
		{
			bool _create;
		};
		static void NewProp__create_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__create;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveDataObject_JukeBox_SetCreateSavedata_Statics::NewProp__create_SetBit(void* Obj)
	{
		((SaveDataObject_JukeBox_eventSetCreateSavedata_Parms*)Obj)->_create = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_SetCreateSavedata_Statics::NewProp__create = { "_create", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_JukeBox_eventSetCreateSavedata_Parms), &Z_Construct_UFunction_USaveDataObject_JukeBox_SetCreateSavedata_Statics::NewProp__create_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_JukeBox_SetCreateSavedata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_SetCreateSavedata_Statics::NewProp__create,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_JukeBox_SetCreateSavedata_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_JukeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_JukeBox_SetCreateSavedata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_JukeBox, nullptr, "SetCreateSavedata", nullptr, nullptr, sizeof(SaveDataObject_JukeBox_eventSetCreateSavedata_Parms), Z_Construct_UFunction_USaveDataObject_JukeBox_SetCreateSavedata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_SetCreateSavedata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_JukeBox_SetCreateSavedata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_SetCreateSavedata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_JukeBox_SetCreateSavedata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_JukeBox_SetCreateSavedata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_JukeBox_SetCurrentPlayID_Statics
	{
		struct SaveDataObject_JukeBox_eventSetCurrentPlayID_Parms
		{
			int32 _id;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_SetCurrentPlayID_Statics::NewProp__id = { "_id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_JukeBox_eventSetCurrentPlayID_Parms, _id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_JukeBox_SetCurrentPlayID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_SetCurrentPlayID_Statics::NewProp__id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_JukeBox_SetCurrentPlayID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_JukeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_JukeBox_SetCurrentPlayID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_JukeBox, nullptr, "SetCurrentPlayID", nullptr, nullptr, sizeof(SaveDataObject_JukeBox_eventSetCurrentPlayID_Parms), Z_Construct_UFunction_USaveDataObject_JukeBox_SetCurrentPlayID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_SetCurrentPlayID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_JukeBox_SetCurrentPlayID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_SetCurrentPlayID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_JukeBox_SetCurrentPlayID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_JukeBox_SetCurrentPlayID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxCheckListForID_Statics
	{
		struct SaveDataObject_JukeBox_eventSetJukeBoxCheckListForID_Parms
		{
			int32 _targetId;
			bool _Enable;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetId;
		static void NewProp__Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxCheckListForID_Statics::NewProp__targetId = { "_targetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_JukeBox_eventSetJukeBoxCheckListForID_Parms, _targetId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxCheckListForID_Statics::NewProp__Enable_SetBit(void* Obj)
	{
		((SaveDataObject_JukeBox_eventSetJukeBoxCheckListForID_Parms*)Obj)->_Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxCheckListForID_Statics::NewProp__Enable = { "_Enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_JukeBox_eventSetJukeBoxCheckListForID_Parms), &Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxCheckListForID_Statics::NewProp__Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxCheckListForID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxCheckListForID_Statics::NewProp__targetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxCheckListForID_Statics::NewProp__Enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxCheckListForID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_JukeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxCheckListForID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_JukeBox, nullptr, "SetJukeBoxCheckListForID", nullptr, nullptr, sizeof(SaveDataObject_JukeBox_eventSetJukeBoxCheckListForID_Parms), Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxCheckListForID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxCheckListForID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxCheckListForID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxCheckListForID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxCheckListForID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxCheckListForID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxPlayedListForID_Statics
	{
		struct SaveDataObject_JukeBox_eventSetJukeBoxPlayedListForID_Parms
		{
			int32 _targetId;
			bool _Enable;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetId;
		static void NewProp__Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxPlayedListForID_Statics::NewProp__targetId = { "_targetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_JukeBox_eventSetJukeBoxPlayedListForID_Parms, _targetId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxPlayedListForID_Statics::NewProp__Enable_SetBit(void* Obj)
	{
		((SaveDataObject_JukeBox_eventSetJukeBoxPlayedListForID_Parms*)Obj)->_Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxPlayedListForID_Statics::NewProp__Enable = { "_Enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_JukeBox_eventSetJukeBoxPlayedListForID_Parms), &Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxPlayedListForID_Statics::NewProp__Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxPlayedListForID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxPlayedListForID_Statics::NewProp__targetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxPlayedListForID_Statics::NewProp__Enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxPlayedListForID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_JukeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxPlayedListForID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_JukeBox, nullptr, "SetJukeBoxPlayedListForID", nullptr, nullptr, sizeof(SaveDataObject_JukeBox_eventSetJukeBoxPlayedListForID_Parms), Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxPlayedListForID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxPlayedListForID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxPlayedListForID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxPlayedListForID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxPlayedListForID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxPlayedListForID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxSortListForID_Statics
	{
		struct SaveDataObject_JukeBox_eventSetJukeBoxSortListForID_Parms
		{
			int32 _targetId;
			int32 _sortNo;
			bool _Enable;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sortNo;
		static void NewProp__Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxSortListForID_Statics::NewProp__targetId = { "_targetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_JukeBox_eventSetJukeBoxSortListForID_Parms, _targetId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxSortListForID_Statics::NewProp__sortNo = { "_sortNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_JukeBox_eventSetJukeBoxSortListForID_Parms, _sortNo), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxSortListForID_Statics::NewProp__Enable_SetBit(void* Obj)
	{
		((SaveDataObject_JukeBox_eventSetJukeBoxSortListForID_Parms*)Obj)->_Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxSortListForID_Statics::NewProp__Enable = { "_Enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_JukeBox_eventSetJukeBoxSortListForID_Parms), &Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxSortListForID_Statics::NewProp__Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxSortListForID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxSortListForID_Statics::NewProp__targetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxSortListForID_Statics::NewProp__sortNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxSortListForID_Statics::NewProp__Enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxSortListForID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_JukeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxSortListForID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_JukeBox, nullptr, "SetJukeBoxSortListForID", nullptr, nullptr, sizeof(SaveDataObject_JukeBox_eventSetJukeBoxSortListForID_Parms), Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxSortListForID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxSortListForID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxSortListForID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxSortListForID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxSortListForID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxSortListForID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_JukeBox_SetNextPlayID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_JukeBox_SetNextPlayID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_JukeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_JukeBox_SetNextPlayID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_JukeBox, nullptr, "SetNextPlayID", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_JukeBox_SetNextPlayID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_SetNextPlayID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_JukeBox_SetNextPlayID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_JukeBox_SetNextPlayID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_JukeBox_SetNextPlayIDForRandom_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_JukeBox_SetNextPlayIDForRandom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_JukeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_JukeBox_SetNextPlayIDForRandom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_JukeBox, nullptr, "SetNextPlayIDForRandom", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_JukeBox_SetNextPlayIDForRandom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_SetNextPlayIDForRandom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_JukeBox_SetNextPlayIDForRandom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_JukeBox_SetNextPlayIDForRandom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_JukeBox_SetRandomPlayback_Statics
	{
		struct SaveDataObject_JukeBox_eventSetRandomPlayback_Parms
		{
			bool _random;
		};
		static void NewProp__random_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__random;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveDataObject_JukeBox_SetRandomPlayback_Statics::NewProp__random_SetBit(void* Obj)
	{
		((SaveDataObject_JukeBox_eventSetRandomPlayback_Parms*)Obj)->_random = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_SetRandomPlayback_Statics::NewProp__random = { "_random", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_JukeBox_eventSetRandomPlayback_Parms), &Z_Construct_UFunction_USaveDataObject_JukeBox_SetRandomPlayback_Statics::NewProp__random_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_JukeBox_SetRandomPlayback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_SetRandomPlayback_Statics::NewProp__random,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_JukeBox_SetRandomPlayback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_JukeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_JukeBox_SetRandomPlayback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_JukeBox, nullptr, "SetRandomPlayback", nullptr, nullptr, sizeof(SaveDataObject_JukeBox_eventSetRandomPlayback_Parms), Z_Construct_UFunction_USaveDataObject_JukeBox_SetRandomPlayback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_SetRandomPlayback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_JukeBox_SetRandomPlayback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_SetRandomPlayback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_JukeBox_SetRandomPlayback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_JukeBox_SetRandomPlayback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_JukeBox_SetUpdated_Statics
	{
		struct SaveDataObject_JukeBox_eventSetUpdated_Parms
		{
			bool _update;
		};
		static void NewProp__update_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__update;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveDataObject_JukeBox_SetUpdated_Statics::NewProp__update_SetBit(void* Obj)
	{
		((SaveDataObject_JukeBox_eventSetUpdated_Parms*)Obj)->_update = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_SetUpdated_Statics::NewProp__update = { "_update", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_JukeBox_eventSetUpdated_Parms), &Z_Construct_UFunction_USaveDataObject_JukeBox_SetUpdated_Statics::NewProp__update_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_JukeBox_SetUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_SetUpdated_Statics::NewProp__update,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_JukeBox_SetUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_JukeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_JukeBox_SetUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_JukeBox, nullptr, "SetUpdated", nullptr, nullptr, sizeof(SaveDataObject_JukeBox_eventSetUpdated_Parms), Z_Construct_UFunction_USaveDataObject_JukeBox_SetUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_SetUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_JukeBox_SetUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_SetUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_JukeBox_SetUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_JukeBox_SetUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_JukeBox_UpdateSavedataForTmpData_Statics
	{
		struct SaveDataObject_JukeBox_eventUpdateSavedataForTmpData_Parms
		{
			FELTmpJukeboxSaveData _tmpData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__tmpData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_JukeBox_UpdateSavedataForTmpData_Statics::NewProp__tmpData = { "_tmpData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_JukeBox_eventUpdateSavedataForTmpData_Parms, _tmpData), Z_Construct_UScriptStruct_FELTmpJukeboxSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_JukeBox_UpdateSavedataForTmpData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_JukeBox_UpdateSavedataForTmpData_Statics::NewProp__tmpData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_JukeBox_UpdateSavedataForTmpData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_JukeBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_JukeBox_UpdateSavedataForTmpData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_JukeBox, nullptr, "UpdateSavedataForTmpData", nullptr, nullptr, sizeof(SaveDataObject_JukeBox_eventUpdateSavedataForTmpData_Parms), Z_Construct_UFunction_USaveDataObject_JukeBox_UpdateSavedataForTmpData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_UpdateSavedataForTmpData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_JukeBox_UpdateSavedataForTmpData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_JukeBox_UpdateSavedataForTmpData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_JukeBox_UpdateSavedataForTmpData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_JukeBox_UpdateSavedataForTmpData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USaveDataObject_JukeBox_NoRegister()
	{
		return USaveDataObject_JukeBox::StaticClass();
	}
	struct Z_Construct_UClass_USaveDataObject_JukeBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveDataObject_JukeBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveDataObjectBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveDataObject_JukeBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveDataObject_JukeBox_GetCurrentJukeBoxPlayCue, "GetCurrentJukeBoxPlayCue" }, // 1523069078
		{ &Z_Construct_UFunction_USaveDataObject_JukeBox_GetCurrentPlayID, "GetCurrentPlayID" }, // 2792971734
		{ &Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxCheckList, "GetJukeBoxCheckList" }, // 2307524681
		{ &Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxCheckListForID, "GetJukeBoxCheckListForID" }, // 304923511
		{ &Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayCue, "GetJukeBoxPlayCue" }, // 1979654366
		{ &Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayedList, "GetJukeBoxPlayedList" }, // 1961948595
		{ &Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayedListForID, "GetJukeBoxPlayedListForID" }, // 2185997333
		{ &Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxPlayList, "GetJukeBoxPlayList" }, // 1722922004
		{ &Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxSortList, "GetJukeBoxSortList" }, // 2050310104
		{ &Z_Construct_UFunction_USaveDataObject_JukeBox_GetJukeBoxSortListForID, "GetJukeBoxSortListForID" }, // 4020001407
		{ &Z_Construct_UFunction_USaveDataObject_JukeBox_GetNextJukeBoxPlayCue, "GetNextJukeBoxPlayCue" }, // 2551240503
		{ &Z_Construct_UFunction_USaveDataObject_JukeBox_GetNextPlayID, "GetNextPlayID" }, // 2041018958
		{ &Z_Construct_UFunction_USaveDataObject_JukeBox_InitJukeBoxPlayedList, "InitJukeBoxPlayedList" }, // 3481991597
		{ &Z_Construct_UFunction_USaveDataObject_JukeBox_InitJukeBoxSortList, "InitJukeBoxSortList" }, // 2493381343
		{ &Z_Construct_UFunction_USaveDataObject_JukeBox_IsCreateSavedata, "IsCreateSavedata" }, // 3698824720
		{ &Z_Construct_UFunction_USaveDataObject_JukeBox_IsRandomPlayback, "IsRandomPlayback" }, // 221701171
		{ &Z_Construct_UFunction_USaveDataObject_JukeBox_SetCreateSavedata, "SetCreateSavedata" }, // 2115115728
		{ &Z_Construct_UFunction_USaveDataObject_JukeBox_SetCurrentPlayID, "SetCurrentPlayID" }, // 3895441300
		{ &Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxCheckListForID, "SetJukeBoxCheckListForID" }, // 4164533852
		{ &Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxPlayedListForID, "SetJukeBoxPlayedListForID" }, // 2358947500
		{ &Z_Construct_UFunction_USaveDataObject_JukeBox_SetJukeBoxSortListForID, "SetJukeBoxSortListForID" }, // 821236930
		{ &Z_Construct_UFunction_USaveDataObject_JukeBox_SetNextPlayID, "SetNextPlayID" }, // 1591189282
		{ &Z_Construct_UFunction_USaveDataObject_JukeBox_SetNextPlayIDForRandom, "SetNextPlayIDForRandom" }, // 3594400942
		{ &Z_Construct_UFunction_USaveDataObject_JukeBox_SetRandomPlayback, "SetRandomPlayback" }, // 3101069244
		{ &Z_Construct_UFunction_USaveDataObject_JukeBox_SetUpdated, "SetUpdated" }, // 2864009175
		{ &Z_Construct_UFunction_USaveDataObject_JukeBox_UpdateSavedataForTmpData, "UpdateSavedataForTmpData" }, // 2738491078
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveDataObject_JukeBox_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveDataObject_JukeBox.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveDataObject_JukeBox.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveDataObject_JukeBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveDataObject_JukeBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveDataObject_JukeBox_Statics::ClassParams = {
		&USaveDataObject_JukeBox::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USaveDataObject_JukeBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveDataObject_JukeBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveDataObject_JukeBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveDataObject_JukeBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveDataObject_JukeBox, 3839884747);
	template<> ABP_200508_API UClass* StaticClass<USaveDataObject_JukeBox>()
	{
		return USaveDataObject_JukeBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveDataObject_JukeBox(Z_Construct_UClass_USaveDataObject_JukeBox, &USaveDataObject_JukeBox::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USaveDataObject_JukeBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveDataObject_JukeBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
