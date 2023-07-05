// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerSnapshot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerSnapshot() {}
// Cross Module References
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinish__DelegateSignature();
	ABP_200508_API UClass* Z_Construct_UClass_UCareerSnapshot();
	ABP_200508_API UClass* Z_Construct_UClass_UCareerSnapshot_NoRegister();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinishMulti__DelegateSignature();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_AccessorBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESaveDataAccessorEvent();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2DDynamic_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerSnapshotParam();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinish__DelegateSignature_Statics
	{
		struct CareerSnapshot_eventOnFinish_Parms
		{
			UCareerSnapshot* Sender;
			ESaveDataProcResult Result;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sender;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinish__DelegateSignature_Statics::NewProp_Sender = { "Sender", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshot_eventOnFinish_Parms, Sender), Z_Construct_UClass_UCareerSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinish__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinish__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshot_eventOnFinish_Parms, Result), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinish__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinish__DelegateSignature_Statics::NewProp_Sender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinish__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinish__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinish__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinish__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshot, nullptr, "OnFinish__DelegateSignature", nullptr, nullptr, sizeof(CareerSnapshot_eventOnFinish_Parms), Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinish__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinish__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinish__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinish__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinish__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinish__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinishMulti__DelegateSignature_Statics
	{
		struct CareerSnapshot_eventOnFinishMulti_Parms
		{
			UCareerSnapshot* Sender;
			USaveData_AccessorBase* Accessor;
			ESaveDataProcResult Result;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sender;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Accessor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinishMulti__DelegateSignature_Statics::NewProp_Sender = { "Sender", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshot_eventOnFinishMulti_Parms, Sender), Z_Construct_UClass_UCareerSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinishMulti__DelegateSignature_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshot_eventOnFinishMulti_Parms, Accessor), Z_Construct_UClass_USaveData_AccessorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinishMulti__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinishMulti__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshot_eventOnFinishMulti_Parms, Result), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinishMulti__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinishMulti__DelegateSignature_Statics::NewProp_Sender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinishMulti__DelegateSignature_Statics::NewProp_Accessor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinishMulti__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinishMulti__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinishMulti__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinishMulti__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshot, nullptr, "OnFinishMulti__DelegateSignature", nullptr, nullptr, sizeof(CareerSnapshot_eventOnFinishMulti_Parms), Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinishMulti__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinishMulti__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinishMulti__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinishMulti__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinishMulti__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinishMulti__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UCareerSnapshot::execCallback_DeleteEnd)
	{
		P_GET_ENUM(ESaveDataAccessorEvent,Z_Param_Event);
		P_GET_OBJECT(USaveData_AccessorBase,Z_Param_SaveDataAccessor);
		P_GET_ENUM(ESaveDataProcResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Callback_DeleteEnd(ESaveDataAccessorEvent(Z_Param_Event),Z_Param_SaveDataAccessor,ESaveDataProcResult(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshot::execCallback_LoadEnd)
	{
		P_GET_ENUM(ESaveDataAccessorEvent,Z_Param_Event);
		P_GET_OBJECT(USaveData_AccessorBase,Z_Param_SaveDataAccessor);
		P_GET_ENUM(ESaveDataProcResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Callback_LoadEnd(ESaveDataAccessorEvent(Z_Param_Event),Z_Param_SaveDataAccessor,ESaveDataProcResult(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshot::execCallback_LoadEndMulti)
	{
		P_GET_ENUM(ESaveDataAccessorEvent,Z_Param_Event);
		P_GET_OBJECT(USaveData_AccessorBase,Z_Param_SaveDataAccessor);
		P_GET_ENUM(ESaveDataProcResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Callback_LoadEndMulti(ESaveDataAccessorEvent(Z_Param_Event),Z_Param_SaveDataAccessor,ESaveDataProcResult(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshot::execCallback_SaveEnd)
	{
		P_GET_ENUM(ESaveDataAccessorEvent,Z_Param_Event);
		P_GET_OBJECT(USaveData_AccessorBase,Z_Param_SaveDataAccessor);
		P_GET_ENUM(ESaveDataProcResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Callback_SaveEnd(ESaveDataAccessorEvent(Z_Param_Event),Z_Param_SaveDataAccessor,ESaveDataProcResult(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshot::execClearBuffer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearBuffer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshot::execConvertToImage)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConvertToImage(Z_Param_RenderTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshot::execDeleteImage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeleteImage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshot::execDeleteParamOnLost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeleteParamOnLost();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshot::execGetDateTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetDateTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshot::execGetImage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2DDynamic**)Z_Param__Result=P_THIS->GetImage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshot::execGetSnapshotParam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCareerSnapshotParam*)Z_Param__Result=P_THIS->GetSnapshotParam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshot::execGetTitleText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetTitleText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshot::execGetTurnNo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTurnNo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshot::execGetWeekText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetWeekText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshot::execGetWreslterNameText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetWreslterNameText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshot::execHasImage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasImage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshot::execInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshot::execIsBusy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBusy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshot::execIsExists)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsExists();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshot::execLoadImageData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadImageData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshot::execLoadImageDataMulti)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadImageDataMulti();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshot::execLoadParam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadParam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshot::execReleaseImage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleaseImage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshot::execSaveImage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SaveImage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshot::execSaveImageMulti)
	{
		P_GET_OBJECT(USaveData_AccessorBase,Z_Param_SaveDataAccessor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SaveImageMulti(Z_Param_SaveDataAccessor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshot::execSetIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCareerSnapshot::execSetSnapshotParam)
	{
		P_GET_STRUCT_REF(FCareerSnapshotParam,Z_Param_Out_NewParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSnapshotParam(Z_Param_Out_NewParam);
		P_NATIVE_END;
	}
	void UCareerSnapshot::StaticRegisterNativesUCareerSnapshot()
	{
		UClass* Class = UCareerSnapshot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Callback_DeleteEnd", &UCareerSnapshot::execCallback_DeleteEnd },
			{ "Callback_LoadEnd", &UCareerSnapshot::execCallback_LoadEnd },
			{ "Callback_LoadEndMulti", &UCareerSnapshot::execCallback_LoadEndMulti },
			{ "Callback_SaveEnd", &UCareerSnapshot::execCallback_SaveEnd },
			{ "ClearBuffer", &UCareerSnapshot::execClearBuffer },
			{ "ConvertToImage", &UCareerSnapshot::execConvertToImage },
			{ "DeleteImage", &UCareerSnapshot::execDeleteImage },
			{ "DeleteParamOnLost", &UCareerSnapshot::execDeleteParamOnLost },
			{ "GetDateTime", &UCareerSnapshot::execGetDateTime },
			{ "GetImage", &UCareerSnapshot::execGetImage },
			{ "GetSnapshotParam", &UCareerSnapshot::execGetSnapshotParam },
			{ "GetTitleText", &UCareerSnapshot::execGetTitleText },
			{ "GetTurnNo", &UCareerSnapshot::execGetTurnNo },
			{ "GetWeekText", &UCareerSnapshot::execGetWeekText },
			{ "GetWreslterNameText", &UCareerSnapshot::execGetWreslterNameText },
			{ "HasImage", &UCareerSnapshot::execHasImage },
			{ "Init", &UCareerSnapshot::execInit },
			{ "IsBusy", &UCareerSnapshot::execIsBusy },
			{ "IsExists", &UCareerSnapshot::execIsExists },
			{ "LoadImageData", &UCareerSnapshot::execLoadImageData },
			{ "LoadImageDataMulti", &UCareerSnapshot::execLoadImageDataMulti },
			{ "LoadParam", &UCareerSnapshot::execLoadParam },
			{ "ReleaseImage", &UCareerSnapshot::execReleaseImage },
			{ "SaveImage", &UCareerSnapshot::execSaveImage },
			{ "SaveImageMulti", &UCareerSnapshot::execSaveImageMulti },
			{ "SetIndex", &UCareerSnapshot::execSetIndex },
			{ "SetSnapshotParam", &UCareerSnapshot::execSetSnapshotParam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCareerSnapshot_Callback_DeleteEnd_Statics
	{
		struct CareerSnapshot_eventCallback_DeleteEnd_Parms
		{
			ESaveDataAccessorEvent Event;
			USaveData_AccessorBase* SaveDataAccessor;
			ESaveDataProcResult Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Event_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Event;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveDataAccessor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCareerSnapshot_Callback_DeleteEnd_Statics::NewProp_Event_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCareerSnapshot_Callback_DeleteEnd_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshot_eventCallback_DeleteEnd_Parms, Event), Z_Construct_UEnum_ABP_200508_ESaveDataAccessorEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCareerSnapshot_Callback_DeleteEnd_Statics::NewProp_SaveDataAccessor = { "SaveDataAccessor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshot_eventCallback_DeleteEnd_Parms, SaveDataAccessor), Z_Construct_UClass_USaveData_AccessorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCareerSnapshot_Callback_DeleteEnd_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCareerSnapshot_Callback_DeleteEnd_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshot_eventCallback_DeleteEnd_Parms, Result), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshot_Callback_DeleteEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_Callback_DeleteEnd_Statics::NewProp_Event_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_Callback_DeleteEnd_Statics::NewProp_Event,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_Callback_DeleteEnd_Statics::NewProp_SaveDataAccessor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_Callback_DeleteEnd_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_Callback_DeleteEnd_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshot_Callback_DeleteEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshot_Callback_DeleteEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshot, nullptr, "Callback_DeleteEnd", nullptr, nullptr, sizeof(CareerSnapshot_eventCallback_DeleteEnd_Parms), Z_Construct_UFunction_UCareerSnapshot_Callback_DeleteEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_Callback_DeleteEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshot_Callback_DeleteEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_Callback_DeleteEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshot_Callback_DeleteEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshot_Callback_DeleteEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEnd_Statics
	{
		struct CareerSnapshot_eventCallback_LoadEnd_Parms
		{
			ESaveDataAccessorEvent Event;
			USaveData_AccessorBase* SaveDataAccessor;
			ESaveDataProcResult Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Event_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Event;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveDataAccessor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEnd_Statics::NewProp_Event_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEnd_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshot_eventCallback_LoadEnd_Parms, Event), Z_Construct_UEnum_ABP_200508_ESaveDataAccessorEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEnd_Statics::NewProp_SaveDataAccessor = { "SaveDataAccessor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshot_eventCallback_LoadEnd_Parms, SaveDataAccessor), Z_Construct_UClass_USaveData_AccessorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEnd_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEnd_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshot_eventCallback_LoadEnd_Parms, Result), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEnd_Statics::NewProp_Event_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEnd_Statics::NewProp_Event,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEnd_Statics::NewProp_SaveDataAccessor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEnd_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEnd_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshot, nullptr, "Callback_LoadEnd", nullptr, nullptr, sizeof(CareerSnapshot_eventCallback_LoadEnd_Parms), Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEndMulti_Statics
	{
		struct CareerSnapshot_eventCallback_LoadEndMulti_Parms
		{
			ESaveDataAccessorEvent Event;
			USaveData_AccessorBase* SaveDataAccessor;
			ESaveDataProcResult Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Event_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Event;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveDataAccessor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEndMulti_Statics::NewProp_Event_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEndMulti_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshot_eventCallback_LoadEndMulti_Parms, Event), Z_Construct_UEnum_ABP_200508_ESaveDataAccessorEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEndMulti_Statics::NewProp_SaveDataAccessor = { "SaveDataAccessor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshot_eventCallback_LoadEndMulti_Parms, SaveDataAccessor), Z_Construct_UClass_USaveData_AccessorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEndMulti_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEndMulti_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshot_eventCallback_LoadEndMulti_Parms, Result), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEndMulti_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEndMulti_Statics::NewProp_Event_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEndMulti_Statics::NewProp_Event,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEndMulti_Statics::NewProp_SaveDataAccessor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEndMulti_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEndMulti_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEndMulti_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEndMulti_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshot, nullptr, "Callback_LoadEndMulti", nullptr, nullptr, sizeof(CareerSnapshot_eventCallback_LoadEndMulti_Parms), Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEndMulti_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEndMulti_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEndMulti_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEndMulti_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEndMulti()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEndMulti_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshot_Callback_SaveEnd_Statics
	{
		struct CareerSnapshot_eventCallback_SaveEnd_Parms
		{
			ESaveDataAccessorEvent Event;
			USaveData_AccessorBase* SaveDataAccessor;
			ESaveDataProcResult Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Event_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Event;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveDataAccessor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCareerSnapshot_Callback_SaveEnd_Statics::NewProp_Event_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCareerSnapshot_Callback_SaveEnd_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshot_eventCallback_SaveEnd_Parms, Event), Z_Construct_UEnum_ABP_200508_ESaveDataAccessorEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCareerSnapshot_Callback_SaveEnd_Statics::NewProp_SaveDataAccessor = { "SaveDataAccessor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshot_eventCallback_SaveEnd_Parms, SaveDataAccessor), Z_Construct_UClass_USaveData_AccessorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCareerSnapshot_Callback_SaveEnd_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCareerSnapshot_Callback_SaveEnd_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshot_eventCallback_SaveEnd_Parms, Result), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshot_Callback_SaveEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_Callback_SaveEnd_Statics::NewProp_Event_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_Callback_SaveEnd_Statics::NewProp_Event,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_Callback_SaveEnd_Statics::NewProp_SaveDataAccessor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_Callback_SaveEnd_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_Callback_SaveEnd_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshot_Callback_SaveEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshot_Callback_SaveEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshot, nullptr, "Callback_SaveEnd", nullptr, nullptr, sizeof(CareerSnapshot_eventCallback_SaveEnd_Parms), Z_Construct_UFunction_UCareerSnapshot_Callback_SaveEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_Callback_SaveEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshot_Callback_SaveEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_Callback_SaveEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshot_Callback_SaveEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshot_Callback_SaveEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshot_ClearBuffer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshot_ClearBuffer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshot_ClearBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshot, nullptr, "ClearBuffer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshot_ClearBuffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_ClearBuffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshot_ClearBuffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshot_ClearBuffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshot_ConvertToImage_Statics
	{
		struct CareerSnapshot_eventConvertToImage_Parms
		{
			UTextureRenderTarget2D* RenderTarget;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCareerSnapshot_ConvertToImage_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshot_eventConvertToImage_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCareerSnapshot_ConvertToImage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CareerSnapshot_eventConvertToImage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCareerSnapshot_ConvertToImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CareerSnapshot_eventConvertToImage_Parms), &Z_Construct_UFunction_UCareerSnapshot_ConvertToImage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshot_ConvertToImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_ConvertToImage_Statics::NewProp_RenderTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_ConvertToImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshot_ConvertToImage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshot_ConvertToImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshot, nullptr, "ConvertToImage", nullptr, nullptr, sizeof(CareerSnapshot_eventConvertToImage_Parms), Z_Construct_UFunction_UCareerSnapshot_ConvertToImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_ConvertToImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshot_ConvertToImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_ConvertToImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshot_ConvertToImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshot_ConvertToImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshot_DeleteImage_Statics
	{
		struct CareerSnapshot_eventDeleteImage_Parms
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
	void Z_Construct_UFunction_UCareerSnapshot_DeleteImage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CareerSnapshot_eventDeleteImage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCareerSnapshot_DeleteImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CareerSnapshot_eventDeleteImage_Parms), &Z_Construct_UFunction_UCareerSnapshot_DeleteImage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshot_DeleteImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_DeleteImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshot_DeleteImage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshot_DeleteImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshot, nullptr, "DeleteImage", nullptr, nullptr, sizeof(CareerSnapshot_eventDeleteImage_Parms), Z_Construct_UFunction_UCareerSnapshot_DeleteImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_DeleteImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshot_DeleteImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_DeleteImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshot_DeleteImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshot_DeleteImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshot_DeleteParamOnLost_Statics
	{
		struct CareerSnapshot_eventDeleteParamOnLost_Parms
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
	void Z_Construct_UFunction_UCareerSnapshot_DeleteParamOnLost_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CareerSnapshot_eventDeleteParamOnLost_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCareerSnapshot_DeleteParamOnLost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CareerSnapshot_eventDeleteParamOnLost_Parms), &Z_Construct_UFunction_UCareerSnapshot_DeleteParamOnLost_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshot_DeleteParamOnLost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_DeleteParamOnLost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshot_DeleteParamOnLost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshot_DeleteParamOnLost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshot, nullptr, "DeleteParamOnLost", nullptr, nullptr, sizeof(CareerSnapshot_eventDeleteParamOnLost_Parms), Z_Construct_UFunction_UCareerSnapshot_DeleteParamOnLost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_DeleteParamOnLost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshot_DeleteParamOnLost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_DeleteParamOnLost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshot_DeleteParamOnLost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshot_DeleteParamOnLost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshot_GetDateTime_Statics
	{
		struct CareerSnapshot_eventGetDateTime_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCareerSnapshot_GetDateTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshot_eventGetDateTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshot_GetDateTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_GetDateTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshot_GetDateTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshot_GetDateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshot, nullptr, "GetDateTime", nullptr, nullptr, sizeof(CareerSnapshot_eventGetDateTime_Parms), Z_Construct_UFunction_UCareerSnapshot_GetDateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_GetDateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshot_GetDateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_GetDateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshot_GetDateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshot_GetDateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshot_GetImage_Statics
	{
		struct CareerSnapshot_eventGetImage_Parms
		{
			UTexture2DDynamic* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCareerSnapshot_GetImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshot_eventGetImage_Parms, ReturnValue), Z_Construct_UClass_UTexture2DDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshot_GetImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_GetImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshot_GetImage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshot_GetImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshot, nullptr, "GetImage", nullptr, nullptr, sizeof(CareerSnapshot_eventGetImage_Parms), Z_Construct_UFunction_UCareerSnapshot_GetImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_GetImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshot_GetImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_GetImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshot_GetImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshot_GetImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshot_GetSnapshotParam_Statics
	{
		struct CareerSnapshot_eventGetSnapshotParam_Parms
		{
			FCareerSnapshotParam ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCareerSnapshot_GetSnapshotParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshot_eventGetSnapshotParam_Parms, ReturnValue), Z_Construct_UScriptStruct_FCareerSnapshotParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshot_GetSnapshotParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_GetSnapshotParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshot_GetSnapshotParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshot_GetSnapshotParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshot, nullptr, "GetSnapshotParam", nullptr, nullptr, sizeof(CareerSnapshot_eventGetSnapshotParam_Parms), Z_Construct_UFunction_UCareerSnapshot_GetSnapshotParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_GetSnapshotParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshot_GetSnapshotParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_GetSnapshotParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshot_GetSnapshotParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshot_GetSnapshotParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshot_GetTitleText_Statics
	{
		struct CareerSnapshot_eventGetTitleText_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCareerSnapshot_GetTitleText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshot_eventGetTitleText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshot_GetTitleText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_GetTitleText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshot_GetTitleText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshot_GetTitleText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshot, nullptr, "GetTitleText", nullptr, nullptr, sizeof(CareerSnapshot_eventGetTitleText_Parms), Z_Construct_UFunction_UCareerSnapshot_GetTitleText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_GetTitleText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshot_GetTitleText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_GetTitleText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshot_GetTitleText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshot_GetTitleText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshot_GetTurnNo_Statics
	{
		struct CareerSnapshot_eventGetTurnNo_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCareerSnapshot_GetTurnNo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshot_eventGetTurnNo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshot_GetTurnNo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_GetTurnNo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshot_GetTurnNo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshot_GetTurnNo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshot, nullptr, "GetTurnNo", nullptr, nullptr, sizeof(CareerSnapshot_eventGetTurnNo_Parms), Z_Construct_UFunction_UCareerSnapshot_GetTurnNo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_GetTurnNo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshot_GetTurnNo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_GetTurnNo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshot_GetTurnNo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshot_GetTurnNo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshot_GetWeekText_Statics
	{
		struct CareerSnapshot_eventGetWeekText_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCareerSnapshot_GetWeekText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshot_eventGetWeekText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshot_GetWeekText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_GetWeekText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshot_GetWeekText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshot_GetWeekText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshot, nullptr, "GetWeekText", nullptr, nullptr, sizeof(CareerSnapshot_eventGetWeekText_Parms), Z_Construct_UFunction_UCareerSnapshot_GetWeekText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_GetWeekText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshot_GetWeekText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_GetWeekText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshot_GetWeekText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshot_GetWeekText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshot_GetWreslterNameText_Statics
	{
		struct CareerSnapshot_eventGetWreslterNameText_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCareerSnapshot_GetWreslterNameText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshot_eventGetWreslterNameText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshot_GetWreslterNameText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_GetWreslterNameText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshot_GetWreslterNameText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshot_GetWreslterNameText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshot, nullptr, "GetWreslterNameText", nullptr, nullptr, sizeof(CareerSnapshot_eventGetWreslterNameText_Parms), Z_Construct_UFunction_UCareerSnapshot_GetWreslterNameText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_GetWreslterNameText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshot_GetWreslterNameText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_GetWreslterNameText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshot_GetWreslterNameText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshot_GetWreslterNameText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshot_HasImage_Statics
	{
		struct CareerSnapshot_eventHasImage_Parms
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
	void Z_Construct_UFunction_UCareerSnapshot_HasImage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CareerSnapshot_eventHasImage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCareerSnapshot_HasImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CareerSnapshot_eventHasImage_Parms), &Z_Construct_UFunction_UCareerSnapshot_HasImage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshot_HasImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_HasImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshot_HasImage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshot_HasImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshot, nullptr, "HasImage", nullptr, nullptr, sizeof(CareerSnapshot_eventHasImage_Parms), Z_Construct_UFunction_UCareerSnapshot_HasImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_HasImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshot_HasImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_HasImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshot_HasImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshot_HasImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshot_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshot_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshot_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshot, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshot_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshot_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshot_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshot_IsBusy_Statics
	{
		struct CareerSnapshot_eventIsBusy_Parms
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
	void Z_Construct_UFunction_UCareerSnapshot_IsBusy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CareerSnapshot_eventIsBusy_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCareerSnapshot_IsBusy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CareerSnapshot_eventIsBusy_Parms), &Z_Construct_UFunction_UCareerSnapshot_IsBusy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshot_IsBusy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_IsBusy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshot_IsBusy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshot_IsBusy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshot, nullptr, "IsBusy", nullptr, nullptr, sizeof(CareerSnapshot_eventIsBusy_Parms), Z_Construct_UFunction_UCareerSnapshot_IsBusy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_IsBusy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshot_IsBusy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_IsBusy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshot_IsBusy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshot_IsBusy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshot_IsExists_Statics
	{
		struct CareerSnapshot_eventIsExists_Parms
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
	void Z_Construct_UFunction_UCareerSnapshot_IsExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CareerSnapshot_eventIsExists_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCareerSnapshot_IsExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CareerSnapshot_eventIsExists_Parms), &Z_Construct_UFunction_UCareerSnapshot_IsExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshot_IsExists_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_IsExists_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshot_IsExists_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshot_IsExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshot, nullptr, "IsExists", nullptr, nullptr, sizeof(CareerSnapshot_eventIsExists_Parms), Z_Construct_UFunction_UCareerSnapshot_IsExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_IsExists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshot_IsExists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_IsExists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshot_IsExists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshot_IsExists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshot_LoadImageData_Statics
	{
		struct CareerSnapshot_eventLoadImageData_Parms
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
	void Z_Construct_UFunction_UCareerSnapshot_LoadImageData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CareerSnapshot_eventLoadImageData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCareerSnapshot_LoadImageData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CareerSnapshot_eventLoadImageData_Parms), &Z_Construct_UFunction_UCareerSnapshot_LoadImageData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshot_LoadImageData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_LoadImageData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshot_LoadImageData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshot_LoadImageData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshot, nullptr, "LoadImageData", nullptr, nullptr, sizeof(CareerSnapshot_eventLoadImageData_Parms), Z_Construct_UFunction_UCareerSnapshot_LoadImageData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_LoadImageData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshot_LoadImageData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_LoadImageData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshot_LoadImageData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshot_LoadImageData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshot_LoadImageDataMulti_Statics
	{
		struct CareerSnapshot_eventLoadImageDataMulti_Parms
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
	void Z_Construct_UFunction_UCareerSnapshot_LoadImageDataMulti_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CareerSnapshot_eventLoadImageDataMulti_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCareerSnapshot_LoadImageDataMulti_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CareerSnapshot_eventLoadImageDataMulti_Parms), &Z_Construct_UFunction_UCareerSnapshot_LoadImageDataMulti_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshot_LoadImageDataMulti_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_LoadImageDataMulti_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshot_LoadImageDataMulti_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshot_LoadImageDataMulti_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshot, nullptr, "LoadImageDataMulti", nullptr, nullptr, sizeof(CareerSnapshot_eventLoadImageDataMulti_Parms), Z_Construct_UFunction_UCareerSnapshot_LoadImageDataMulti_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_LoadImageDataMulti_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshot_LoadImageDataMulti_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_LoadImageDataMulti_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshot_LoadImageDataMulti()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshot_LoadImageDataMulti_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshot_LoadParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshot_LoadParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshot_LoadParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshot, nullptr, "LoadParam", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshot_LoadParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_LoadParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshot_LoadParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshot_LoadParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshot_ReleaseImage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshot_ReleaseImage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshot_ReleaseImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshot, nullptr, "ReleaseImage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshot_ReleaseImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_ReleaseImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshot_ReleaseImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshot_ReleaseImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshot_SaveImage_Statics
	{
		struct CareerSnapshot_eventSaveImage_Parms
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
	void Z_Construct_UFunction_UCareerSnapshot_SaveImage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CareerSnapshot_eventSaveImage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCareerSnapshot_SaveImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CareerSnapshot_eventSaveImage_Parms), &Z_Construct_UFunction_UCareerSnapshot_SaveImage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshot_SaveImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_SaveImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshot_SaveImage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshot_SaveImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshot, nullptr, "SaveImage", nullptr, nullptr, sizeof(CareerSnapshot_eventSaveImage_Parms), Z_Construct_UFunction_UCareerSnapshot_SaveImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_SaveImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshot_SaveImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_SaveImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshot_SaveImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshot_SaveImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshot_SaveImageMulti_Statics
	{
		struct CareerSnapshot_eventSaveImageMulti_Parms
		{
			USaveData_AccessorBase* SaveDataAccessor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveDataAccessor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCareerSnapshot_SaveImageMulti_Statics::NewProp_SaveDataAccessor = { "SaveDataAccessor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshot_eventSaveImageMulti_Parms, SaveDataAccessor), Z_Construct_UClass_USaveData_AccessorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCareerSnapshot_SaveImageMulti_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CareerSnapshot_eventSaveImageMulti_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCareerSnapshot_SaveImageMulti_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CareerSnapshot_eventSaveImageMulti_Parms), &Z_Construct_UFunction_UCareerSnapshot_SaveImageMulti_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshot_SaveImageMulti_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_SaveImageMulti_Statics::NewProp_SaveDataAccessor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_SaveImageMulti_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshot_SaveImageMulti_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshot_SaveImageMulti_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshot, nullptr, "SaveImageMulti", nullptr, nullptr, sizeof(CareerSnapshot_eventSaveImageMulti_Parms), Z_Construct_UFunction_UCareerSnapshot_SaveImageMulti_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_SaveImageMulti_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshot_SaveImageMulti_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_SaveImageMulti_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshot_SaveImageMulti()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshot_SaveImageMulti_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshot_SetIndex_Statics
	{
		struct CareerSnapshot_eventSetIndex_Parms
		{
			int32 Index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCareerSnapshot_SetIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshot_eventSetIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshot_SetIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_SetIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshot_SetIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshot_SetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshot, nullptr, "SetIndex", nullptr, nullptr, sizeof(CareerSnapshot_eventSetIndex_Parms), Z_Construct_UFunction_UCareerSnapshot_SetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_SetIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshot_SetIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_SetIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshot_SetIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshot_SetIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCareerSnapshot_SetSnapshotParam_Statics
	{
		struct CareerSnapshot_eventSetSnapshotParam_Parms
		{
			FCareerSnapshotParam NewParam;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshot_SetSnapshotParam_Statics::NewProp_NewParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCareerSnapshot_SetSnapshotParam_Statics::NewProp_NewParam = { "NewParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CareerSnapshot_eventSetSnapshotParam_Parms, NewParam), Z_Construct_UScriptStruct_FCareerSnapshotParam, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshot_SetSnapshotParam_Statics::NewProp_NewParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_SetSnapshotParam_Statics::NewProp_NewParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCareerSnapshot_SetSnapshotParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCareerSnapshot_SetSnapshotParam_Statics::NewProp_NewParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCareerSnapshot_SetSnapshotParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CareerSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCareerSnapshot_SetSnapshotParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCareerSnapshot, nullptr, "SetSnapshotParam", nullptr, nullptr, sizeof(CareerSnapshot_eventSetSnapshotParam_Parms), Z_Construct_UFunction_UCareerSnapshot_SetSnapshotParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_SetSnapshotParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCareerSnapshot_SetSnapshotParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCareerSnapshot_SetSnapshotParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCareerSnapshot_SetSnapshotParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCareerSnapshot_SetSnapshotParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCareerSnapshot_NoRegister()
	{
		return UCareerSnapshot::StaticClass();
	}
	struct Z_Construct_UClass_UCareerSnapshot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFinishedLoad_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinishedLoad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFinishedSave_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinishedSave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFinishedDelete_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinishedDelete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFinishedLoadMulti_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinishedLoadMulti;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Buffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Buffer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCareerSnapshot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCareerSnapshot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCareerSnapshot_Callback_DeleteEnd, "Callback_DeleteEnd" }, // 674313943
		{ &Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEnd, "Callback_LoadEnd" }, // 827922484
		{ &Z_Construct_UFunction_UCareerSnapshot_Callback_LoadEndMulti, "Callback_LoadEndMulti" }, // 2170675689
		{ &Z_Construct_UFunction_UCareerSnapshot_Callback_SaveEnd, "Callback_SaveEnd" }, // 4193509485
		{ &Z_Construct_UFunction_UCareerSnapshot_ClearBuffer, "ClearBuffer" }, // 2486162932
		{ &Z_Construct_UFunction_UCareerSnapshot_ConvertToImage, "ConvertToImage" }, // 265388541
		{ &Z_Construct_UFunction_UCareerSnapshot_DeleteImage, "DeleteImage" }, // 4277971203
		{ &Z_Construct_UFunction_UCareerSnapshot_DeleteParamOnLost, "DeleteParamOnLost" }, // 3554845587
		{ &Z_Construct_UFunction_UCareerSnapshot_GetDateTime, "GetDateTime" }, // 1061128258
		{ &Z_Construct_UFunction_UCareerSnapshot_GetImage, "GetImage" }, // 239785098
		{ &Z_Construct_UFunction_UCareerSnapshot_GetSnapshotParam, "GetSnapshotParam" }, // 1578442828
		{ &Z_Construct_UFunction_UCareerSnapshot_GetTitleText, "GetTitleText" }, // 2928064525
		{ &Z_Construct_UFunction_UCareerSnapshot_GetTurnNo, "GetTurnNo" }, // 2406396738
		{ &Z_Construct_UFunction_UCareerSnapshot_GetWeekText, "GetWeekText" }, // 59181788
		{ &Z_Construct_UFunction_UCareerSnapshot_GetWreslterNameText, "GetWreslterNameText" }, // 2098902571
		{ &Z_Construct_UFunction_UCareerSnapshot_HasImage, "HasImage" }, // 1634615578
		{ &Z_Construct_UFunction_UCareerSnapshot_Init, "Init" }, // 1134584656
		{ &Z_Construct_UFunction_UCareerSnapshot_IsBusy, "IsBusy" }, // 3803136045
		{ &Z_Construct_UFunction_UCareerSnapshot_IsExists, "IsExists" }, // 2789718769
		{ &Z_Construct_UFunction_UCareerSnapshot_LoadImageData, "LoadImageData" }, // 1077705044
		{ &Z_Construct_UFunction_UCareerSnapshot_LoadImageDataMulti, "LoadImageDataMulti" }, // 2426997663
		{ &Z_Construct_UFunction_UCareerSnapshot_LoadParam, "LoadParam" }, // 1520898220
		{ &Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinish__DelegateSignature, "OnFinish__DelegateSignature" }, // 4142746026
		{ &Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinishMulti__DelegateSignature, "OnFinishMulti__DelegateSignature" }, // 564296950
		{ &Z_Construct_UFunction_UCareerSnapshot_ReleaseImage, "ReleaseImage" }, // 729406564
		{ &Z_Construct_UFunction_UCareerSnapshot_SaveImage, "SaveImage" }, // 3153268158
		{ &Z_Construct_UFunction_UCareerSnapshot_SaveImageMulti, "SaveImageMulti" }, // 2090975474
		{ &Z_Construct_UFunction_UCareerSnapshot_SetIndex, "SetIndex" }, // 2519503705
		{ &Z_Construct_UFunction_UCareerSnapshot_SetSnapshotParam, "SetSnapshotParam" }, // 1040652570
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCareerSnapshot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CareerSnapshot.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CareerSnapshot.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCareerSnapshot_Statics::NewProp_OnFinishedLoad_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSnapshot" },
		{ "ModuleRelativePath", "Public/CareerSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCareerSnapshot_Statics::NewProp_OnFinishedLoad = { "OnFinishedLoad", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCareerSnapshot, OnFinishedLoad), Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinish__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCareerSnapshot_Statics::NewProp_OnFinishedLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCareerSnapshot_Statics::NewProp_OnFinishedLoad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCareerSnapshot_Statics::NewProp_OnFinishedSave_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSnapshot" },
		{ "ModuleRelativePath", "Public/CareerSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCareerSnapshot_Statics::NewProp_OnFinishedSave = { "OnFinishedSave", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCareerSnapshot, OnFinishedSave), Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinish__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCareerSnapshot_Statics::NewProp_OnFinishedSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCareerSnapshot_Statics::NewProp_OnFinishedSave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCareerSnapshot_Statics::NewProp_OnFinishedDelete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSnapshot" },
		{ "ModuleRelativePath", "Public/CareerSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCareerSnapshot_Statics::NewProp_OnFinishedDelete = { "OnFinishedDelete", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCareerSnapshot, OnFinishedDelete), Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinish__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCareerSnapshot_Statics::NewProp_OnFinishedDelete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCareerSnapshot_Statics::NewProp_OnFinishedDelete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCareerSnapshot_Statics::NewProp_OnFinishedLoadMulti_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSnapshot" },
		{ "ModuleRelativePath", "Public/CareerSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCareerSnapshot_Statics::NewProp_OnFinishedLoadMulti = { "OnFinishedLoadMulti", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCareerSnapshot, OnFinishedLoadMulti), Z_Construct_UDelegateFunction_UCareerSnapshot_OnFinishMulti__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCareerSnapshot_Statics::NewProp_OnFinishedLoadMulti_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCareerSnapshot_Statics::NewProp_OnFinishedLoadMulti_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCareerSnapshot_Statics::NewProp_Image_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSnapshot" },
		{ "ModuleRelativePath", "Public/CareerSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCareerSnapshot_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCareerSnapshot, Image), Z_Construct_UClass_UTexture2DDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCareerSnapshot_Statics::NewProp_Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCareerSnapshot_Statics::NewProp_Image_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCareerSnapshot_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCareerSnapshot_Statics::NewProp_Buffer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSnapshot" },
		{ "ModuleRelativePath", "Public/CareerSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCareerSnapshot_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCareerSnapshot, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCareerSnapshot_Statics::NewProp_Buffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCareerSnapshot_Statics::NewProp_Buffer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCareerSnapshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCareerSnapshot_Statics::NewProp_OnFinishedLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCareerSnapshot_Statics::NewProp_OnFinishedSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCareerSnapshot_Statics::NewProp_OnFinishedDelete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCareerSnapshot_Statics::NewProp_OnFinishedLoadMulti,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCareerSnapshot_Statics::NewProp_Image,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCareerSnapshot_Statics::NewProp_Buffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCareerSnapshot_Statics::NewProp_Buffer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCareerSnapshot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCareerSnapshot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCareerSnapshot_Statics::ClassParams = {
		&UCareerSnapshot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCareerSnapshot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCareerSnapshot_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCareerSnapshot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCareerSnapshot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCareerSnapshot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCareerSnapshot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCareerSnapshot, 3311476860);
	template<> ABP_200508_API UClass* StaticClass<UCareerSnapshot>()
	{
		return UCareerSnapshot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCareerSnapshot(Z_Construct_UClass_UCareerSnapshot, &UCareerSnapshot::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UCareerSnapshot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCareerSnapshot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
