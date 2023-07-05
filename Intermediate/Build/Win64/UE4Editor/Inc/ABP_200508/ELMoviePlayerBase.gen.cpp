// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELMoviePlayerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMoviePlayerBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELMoviePlayerBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELMoviePlayerBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMoviePlayerStatus();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_MoviePlayerEvent__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UELMoviePlayerBase::execChangeMovieResource)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MoviePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ChangeMovieResource(Z_Param_MoviePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMoviePlayerBase::execDestroy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Destroy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMoviePlayerBase::execGetAudioVolume)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAudioVolume(Z_Param_Out_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMoviePlayerBase::execGetDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMoviePlayerBase::execGetFrames)
	{
		P_GET_UBOOL(Z_Param_ByTotalPlayingTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFrames(Z_Param_ByTotalPlayingTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMoviePlayerBase::execGetMoviePath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetMoviePath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMoviePlayerBase::execGetMovieTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMovieTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMoviePlayerBase::execGetSlotNo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSlotNo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMoviePlayerBase::execGetStatus)
	{
		P_GET_ENUM_REF(EMoviePlayerStatus,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetStatus((EMoviePlayerStatus&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMoviePlayerBase::execGetTexturePath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetTexturePath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMoviePlayerBase::execIsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMoviePlayerBase::execIsAlpha)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAlpha();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMoviePlayerBase::execIsDebugOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDebugOn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMoviePlayerBase::execIsPaused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPaused();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMoviePlayerBase::execIsPrepared)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPrepared();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMoviePlayerBase::execPause)
	{
		P_GET_UBOOL(Z_Param_StartPause);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Pause(Z_Param_StartPause);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMoviePlayerBase::execPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Play();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMoviePlayerBase::execPrepare)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Prepare();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMoviePlayerBase::execSeek)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Seek(Z_Param_TimeSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMoviePlayerBase::execSetAudioVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetAudioVolume(Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMoviePlayerBase::execSetDebugOff)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDebugOff();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMoviePlayerBase::execSetDebugOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDebugOn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMoviePlayerBase::execSetLooping)
	{
		P_GET_UBOOL(Z_Param_Looping);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetLooping(Z_Param_Looping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMoviePlayerBase::execSetup)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotNo);
		P_GET_OBJECT(UTexture,Z_Param_Texture);
		P_GET_UBOOL(Z_Param_IsLooping);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Setup(Z_Param_SlotNo,Z_Param_Texture,Z_Param_IsLooping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMoviePlayerBase::execSetupWithTexturePath)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotID);
		P_GET_PROPERTY(FStrProperty,Z_Param_TexturePath);
		P_GET_UBOOL(Z_Param_IsLooping);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetupWithTexturePath(Z_Param_SlotID,Z_Param_TexturePath,Z_Param_IsLooping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMoviePlayerBase::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Stop();
		P_NATIVE_END;
	}
	void UELMoviePlayerBase::StaticRegisterNativesUELMoviePlayerBase()
	{
		UClass* Class = UELMoviePlayerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeMovieResource", &UELMoviePlayerBase::execChangeMovieResource },
			{ "Destroy", &UELMoviePlayerBase::execDestroy },
			{ "GetAudioVolume", &UELMoviePlayerBase::execGetAudioVolume },
			{ "GetDuration", &UELMoviePlayerBase::execGetDuration },
			{ "GetFrames", &UELMoviePlayerBase::execGetFrames },
			{ "GetMoviePath", &UELMoviePlayerBase::execGetMoviePath },
			{ "GetMovieTime", &UELMoviePlayerBase::execGetMovieTime },
			{ "GetSlotNo", &UELMoviePlayerBase::execGetSlotNo },
			{ "GetStatus", &UELMoviePlayerBase::execGetStatus },
			{ "GetTexturePath", &UELMoviePlayerBase::execGetTexturePath },
			{ "IsActive", &UELMoviePlayerBase::execIsActive },
			{ "IsAlpha", &UELMoviePlayerBase::execIsAlpha },
			{ "IsDebugOn", &UELMoviePlayerBase::execIsDebugOn },
			{ "IsPaused", &UELMoviePlayerBase::execIsPaused },
			{ "IsPrepared", &UELMoviePlayerBase::execIsPrepared },
			{ "Pause", &UELMoviePlayerBase::execPause },
			{ "Play", &UELMoviePlayerBase::execPlay },
			{ "Prepare", &UELMoviePlayerBase::execPrepare },
			{ "Seek", &UELMoviePlayerBase::execSeek },
			{ "SetAudioVolume", &UELMoviePlayerBase::execSetAudioVolume },
			{ "SetDebugOff", &UELMoviePlayerBase::execSetDebugOff },
			{ "SetDebugOn", &UELMoviePlayerBase::execSetDebugOn },
			{ "SetLooping", &UELMoviePlayerBase::execSetLooping },
			{ "Setup", &UELMoviePlayerBase::execSetup },
			{ "SetupWithTexturePath", &UELMoviePlayerBase::execSetupWithTexturePath },
			{ "Stop", &UELMoviePlayerBase::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELMoviePlayerBase_ChangeMovieResource_Statics
	{
		struct ELMoviePlayerBase_eventChangeMovieResource_Parms
		{
			FString MoviePath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoviePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MoviePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMoviePlayerBase_ChangeMovieResource_Statics::NewProp_MoviePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELMoviePlayerBase_ChangeMovieResource_Statics::NewProp_MoviePath = { "MoviePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMoviePlayerBase_eventChangeMovieResource_Parms, MoviePath), METADATA_PARAMS(Z_Construct_UFunction_UELMoviePlayerBase_ChangeMovieResource_Statics::NewProp_MoviePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_ChangeMovieResource_Statics::NewProp_MoviePath_MetaData)) };
	void Z_Construct_UFunction_UELMoviePlayerBase_ChangeMovieResource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMoviePlayerBase_eventChangeMovieResource_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMoviePlayerBase_ChangeMovieResource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMoviePlayerBase_eventChangeMovieResource_Parms), &Z_Construct_UFunction_UELMoviePlayerBase_ChangeMovieResource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMoviePlayerBase_ChangeMovieResource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_ChangeMovieResource_Statics::NewProp_MoviePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_ChangeMovieResource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMoviePlayerBase_ChangeMovieResource_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMoviePlayerBase_ChangeMovieResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMoviePlayerBase, nullptr, "ChangeMovieResource", nullptr, nullptr, sizeof(ELMoviePlayerBase_eventChangeMovieResource_Parms), Z_Construct_UFunction_UELMoviePlayerBase_ChangeMovieResource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_ChangeMovieResource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMoviePlayerBase_ChangeMovieResource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_ChangeMovieResource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMoviePlayerBase_ChangeMovieResource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMoviePlayerBase_ChangeMovieResource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMoviePlayerBase_Destroy_Statics
	{
		struct ELMoviePlayerBase_eventDestroy_Parms
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
	void Z_Construct_UFunction_UELMoviePlayerBase_Destroy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMoviePlayerBase_eventDestroy_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMoviePlayerBase_Destroy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMoviePlayerBase_eventDestroy_Parms), &Z_Construct_UFunction_UELMoviePlayerBase_Destroy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMoviePlayerBase_Destroy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_Destroy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMoviePlayerBase_Destroy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMoviePlayerBase_Destroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMoviePlayerBase, nullptr, "Destroy", nullptr, nullptr, sizeof(ELMoviePlayerBase_eventDestroy_Parms), Z_Construct_UFunction_UELMoviePlayerBase_Destroy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_Destroy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMoviePlayerBase_Destroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_Destroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMoviePlayerBase_Destroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMoviePlayerBase_Destroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMoviePlayerBase_GetAudioVolume_Statics
	{
		struct ELMoviePlayerBase_eventGetAudioVolume_Parms
		{
			float Volume;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELMoviePlayerBase_GetAudioVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMoviePlayerBase_eventGetAudioVolume_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMoviePlayerBase_GetAudioVolume_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMoviePlayerBase_eventGetAudioVolume_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMoviePlayerBase_GetAudioVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMoviePlayerBase_eventGetAudioVolume_Parms), &Z_Construct_UFunction_UELMoviePlayerBase_GetAudioVolume_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMoviePlayerBase_GetAudioVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_GetAudioVolume_Statics::NewProp_Volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_GetAudioVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMoviePlayerBase_GetAudioVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMoviePlayerBase_GetAudioVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMoviePlayerBase, nullptr, "GetAudioVolume", nullptr, nullptr, sizeof(ELMoviePlayerBase_eventGetAudioVolume_Parms), Z_Construct_UFunction_UELMoviePlayerBase_GetAudioVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_GetAudioVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMoviePlayerBase_GetAudioVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_GetAudioVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMoviePlayerBase_GetAudioVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMoviePlayerBase_GetAudioVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMoviePlayerBase_GetDuration_Statics
	{
		struct ELMoviePlayerBase_eventGetDuration_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELMoviePlayerBase_GetDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMoviePlayerBase_eventGetDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMoviePlayerBase_GetDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_GetDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMoviePlayerBase_GetDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMoviePlayerBase_GetDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMoviePlayerBase, nullptr, "GetDuration", nullptr, nullptr, sizeof(ELMoviePlayerBase_eventGetDuration_Parms), Z_Construct_UFunction_UELMoviePlayerBase_GetDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_GetDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMoviePlayerBase_GetDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_GetDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMoviePlayerBase_GetDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMoviePlayerBase_GetDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMoviePlayerBase_GetFrames_Statics
	{
		struct ELMoviePlayerBase_eventGetFrames_Parms
		{
			bool ByTotalPlayingTime;
			int32 ReturnValue;
		};
		static void NewProp_ByTotalPlayingTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ByTotalPlayingTime;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELMoviePlayerBase_GetFrames_Statics::NewProp_ByTotalPlayingTime_SetBit(void* Obj)
	{
		((ELMoviePlayerBase_eventGetFrames_Parms*)Obj)->ByTotalPlayingTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMoviePlayerBase_GetFrames_Statics::NewProp_ByTotalPlayingTime = { "ByTotalPlayingTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMoviePlayerBase_eventGetFrames_Parms), &Z_Construct_UFunction_UELMoviePlayerBase_GetFrames_Statics::NewProp_ByTotalPlayingTime_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMoviePlayerBase_GetFrames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMoviePlayerBase_eventGetFrames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMoviePlayerBase_GetFrames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_GetFrames_Statics::NewProp_ByTotalPlayingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_GetFrames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMoviePlayerBase_GetFrames_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMoviePlayerBase_GetFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMoviePlayerBase, nullptr, "GetFrames", nullptr, nullptr, sizeof(ELMoviePlayerBase_eventGetFrames_Parms), Z_Construct_UFunction_UELMoviePlayerBase_GetFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_GetFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMoviePlayerBase_GetFrames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_GetFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMoviePlayerBase_GetFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMoviePlayerBase_GetFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMoviePlayerBase_GetMoviePath_Statics
	{
		struct ELMoviePlayerBase_eventGetMoviePath_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELMoviePlayerBase_GetMoviePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMoviePlayerBase_eventGetMoviePath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMoviePlayerBase_GetMoviePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_GetMoviePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMoviePlayerBase_GetMoviePath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMoviePlayerBase_GetMoviePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMoviePlayerBase, nullptr, "GetMoviePath", nullptr, nullptr, sizeof(ELMoviePlayerBase_eventGetMoviePath_Parms), Z_Construct_UFunction_UELMoviePlayerBase_GetMoviePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_GetMoviePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMoviePlayerBase_GetMoviePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_GetMoviePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMoviePlayerBase_GetMoviePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMoviePlayerBase_GetMoviePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMoviePlayerBase_GetMovieTime_Statics
	{
		struct ELMoviePlayerBase_eventGetMovieTime_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELMoviePlayerBase_GetMovieTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMoviePlayerBase_eventGetMovieTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMoviePlayerBase_GetMovieTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_GetMovieTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMoviePlayerBase_GetMovieTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMoviePlayerBase_GetMovieTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMoviePlayerBase, nullptr, "GetMovieTime", nullptr, nullptr, sizeof(ELMoviePlayerBase_eventGetMovieTime_Parms), Z_Construct_UFunction_UELMoviePlayerBase_GetMovieTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_GetMovieTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMoviePlayerBase_GetMovieTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_GetMovieTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMoviePlayerBase_GetMovieTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMoviePlayerBase_GetMovieTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMoviePlayerBase_GetSlotNo_Statics
	{
		struct ELMoviePlayerBase_eventGetSlotNo_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMoviePlayerBase_GetSlotNo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMoviePlayerBase_eventGetSlotNo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMoviePlayerBase_GetSlotNo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_GetSlotNo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMoviePlayerBase_GetSlotNo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMoviePlayerBase_GetSlotNo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMoviePlayerBase, nullptr, "GetSlotNo", nullptr, nullptr, sizeof(ELMoviePlayerBase_eventGetSlotNo_Parms), Z_Construct_UFunction_UELMoviePlayerBase_GetSlotNo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_GetSlotNo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMoviePlayerBase_GetSlotNo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_GetSlotNo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMoviePlayerBase_GetSlotNo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMoviePlayerBase_GetSlotNo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMoviePlayerBase_GetStatus_Statics
	{
		struct ELMoviePlayerBase_eventGetStatus_Parms
		{
			EMoviePlayerStatus Result;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELMoviePlayerBase_GetStatus_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELMoviePlayerBase_GetStatus_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMoviePlayerBase_eventGetStatus_Parms, Result), Z_Construct_UEnum_ABP_200508_EMoviePlayerStatus, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMoviePlayerBase_GetStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMoviePlayerBase_eventGetStatus_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMoviePlayerBase_GetStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMoviePlayerBase_eventGetStatus_Parms), &Z_Construct_UFunction_UELMoviePlayerBase_GetStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMoviePlayerBase_GetStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_GetStatus_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_GetStatus_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_GetStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMoviePlayerBase_GetStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMoviePlayerBase_GetStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMoviePlayerBase, nullptr, "GetStatus", nullptr, nullptr, sizeof(ELMoviePlayerBase_eventGetStatus_Parms), Z_Construct_UFunction_UELMoviePlayerBase_GetStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_GetStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMoviePlayerBase_GetStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_GetStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMoviePlayerBase_GetStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMoviePlayerBase_GetStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMoviePlayerBase_GetTexturePath_Statics
	{
		struct ELMoviePlayerBase_eventGetTexturePath_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELMoviePlayerBase_GetTexturePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMoviePlayerBase_eventGetTexturePath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMoviePlayerBase_GetTexturePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_GetTexturePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMoviePlayerBase_GetTexturePath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMoviePlayerBase_GetTexturePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMoviePlayerBase, nullptr, "GetTexturePath", nullptr, nullptr, sizeof(ELMoviePlayerBase_eventGetTexturePath_Parms), Z_Construct_UFunction_UELMoviePlayerBase_GetTexturePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_GetTexturePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMoviePlayerBase_GetTexturePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_GetTexturePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMoviePlayerBase_GetTexturePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMoviePlayerBase_GetTexturePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMoviePlayerBase_IsActive_Statics
	{
		struct ELMoviePlayerBase_eventIsActive_Parms
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
	void Z_Construct_UFunction_UELMoviePlayerBase_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMoviePlayerBase_eventIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMoviePlayerBase_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMoviePlayerBase_eventIsActive_Parms), &Z_Construct_UFunction_UELMoviePlayerBase_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMoviePlayerBase_IsActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_IsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMoviePlayerBase_IsActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMoviePlayerBase_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMoviePlayerBase, nullptr, "IsActive", nullptr, nullptr, sizeof(ELMoviePlayerBase_eventIsActive_Parms), Z_Construct_UFunction_UELMoviePlayerBase_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_IsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMoviePlayerBase_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMoviePlayerBase_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMoviePlayerBase_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMoviePlayerBase_IsAlpha_Statics
	{
		struct ELMoviePlayerBase_eventIsAlpha_Parms
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
	void Z_Construct_UFunction_UELMoviePlayerBase_IsAlpha_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMoviePlayerBase_eventIsAlpha_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMoviePlayerBase_IsAlpha_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMoviePlayerBase_eventIsAlpha_Parms), &Z_Construct_UFunction_UELMoviePlayerBase_IsAlpha_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMoviePlayerBase_IsAlpha_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_IsAlpha_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMoviePlayerBase_IsAlpha_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMoviePlayerBase_IsAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMoviePlayerBase, nullptr, "IsAlpha", nullptr, nullptr, sizeof(ELMoviePlayerBase_eventIsAlpha_Parms), Z_Construct_UFunction_UELMoviePlayerBase_IsAlpha_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_IsAlpha_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMoviePlayerBase_IsAlpha_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_IsAlpha_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMoviePlayerBase_IsAlpha()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMoviePlayerBase_IsAlpha_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMoviePlayerBase_IsDebugOn_Statics
	{
		struct ELMoviePlayerBase_eventIsDebugOn_Parms
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
	void Z_Construct_UFunction_UELMoviePlayerBase_IsDebugOn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMoviePlayerBase_eventIsDebugOn_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMoviePlayerBase_IsDebugOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMoviePlayerBase_eventIsDebugOn_Parms), &Z_Construct_UFunction_UELMoviePlayerBase_IsDebugOn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMoviePlayerBase_IsDebugOn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_IsDebugOn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMoviePlayerBase_IsDebugOn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMoviePlayerBase_IsDebugOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMoviePlayerBase, nullptr, "IsDebugOn", nullptr, nullptr, sizeof(ELMoviePlayerBase_eventIsDebugOn_Parms), Z_Construct_UFunction_UELMoviePlayerBase_IsDebugOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_IsDebugOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMoviePlayerBase_IsDebugOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_IsDebugOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMoviePlayerBase_IsDebugOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMoviePlayerBase_IsDebugOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMoviePlayerBase_IsPaused_Statics
	{
		struct ELMoviePlayerBase_eventIsPaused_Parms
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
	void Z_Construct_UFunction_UELMoviePlayerBase_IsPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMoviePlayerBase_eventIsPaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMoviePlayerBase_IsPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMoviePlayerBase_eventIsPaused_Parms), &Z_Construct_UFunction_UELMoviePlayerBase_IsPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMoviePlayerBase_IsPaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_IsPaused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMoviePlayerBase_IsPaused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMoviePlayerBase_IsPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMoviePlayerBase, nullptr, "IsPaused", nullptr, nullptr, sizeof(ELMoviePlayerBase_eventIsPaused_Parms), Z_Construct_UFunction_UELMoviePlayerBase_IsPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_IsPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMoviePlayerBase_IsPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_IsPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMoviePlayerBase_IsPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMoviePlayerBase_IsPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMoviePlayerBase_IsPrepared_Statics
	{
		struct ELMoviePlayerBase_eventIsPrepared_Parms
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
	void Z_Construct_UFunction_UELMoviePlayerBase_IsPrepared_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMoviePlayerBase_eventIsPrepared_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMoviePlayerBase_IsPrepared_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMoviePlayerBase_eventIsPrepared_Parms), &Z_Construct_UFunction_UELMoviePlayerBase_IsPrepared_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMoviePlayerBase_IsPrepared_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_IsPrepared_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMoviePlayerBase_IsPrepared_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMoviePlayerBase_IsPrepared_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMoviePlayerBase, nullptr, "IsPrepared", nullptr, nullptr, sizeof(ELMoviePlayerBase_eventIsPrepared_Parms), Z_Construct_UFunction_UELMoviePlayerBase_IsPrepared_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_IsPrepared_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMoviePlayerBase_IsPrepared_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_IsPrepared_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMoviePlayerBase_IsPrepared()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMoviePlayerBase_IsPrepared_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMoviePlayerBase_Pause_Statics
	{
		struct ELMoviePlayerBase_eventPause_Parms
		{
			bool StartPause;
			bool ReturnValue;
		};
		static void NewProp_StartPause_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StartPause;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELMoviePlayerBase_Pause_Statics::NewProp_StartPause_SetBit(void* Obj)
	{
		((ELMoviePlayerBase_eventPause_Parms*)Obj)->StartPause = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMoviePlayerBase_Pause_Statics::NewProp_StartPause = { "StartPause", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMoviePlayerBase_eventPause_Parms), &Z_Construct_UFunction_UELMoviePlayerBase_Pause_Statics::NewProp_StartPause_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMoviePlayerBase_Pause_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMoviePlayerBase_eventPause_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMoviePlayerBase_Pause_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMoviePlayerBase_eventPause_Parms), &Z_Construct_UFunction_UELMoviePlayerBase_Pause_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMoviePlayerBase_Pause_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_Pause_Statics::NewProp_StartPause,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_Pause_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMoviePlayerBase_Pause_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMoviePlayerBase_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMoviePlayerBase, nullptr, "Pause", nullptr, nullptr, sizeof(ELMoviePlayerBase_eventPause_Parms), Z_Construct_UFunction_UELMoviePlayerBase_Pause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_Pause_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMoviePlayerBase_Pause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_Pause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMoviePlayerBase_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMoviePlayerBase_Pause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMoviePlayerBase_Play_Statics
	{
		struct ELMoviePlayerBase_eventPlay_Parms
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
	void Z_Construct_UFunction_UELMoviePlayerBase_Play_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMoviePlayerBase_eventPlay_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMoviePlayerBase_Play_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMoviePlayerBase_eventPlay_Parms), &Z_Construct_UFunction_UELMoviePlayerBase_Play_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMoviePlayerBase_Play_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_Play_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMoviePlayerBase_Play_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMoviePlayerBase_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMoviePlayerBase, nullptr, "Play", nullptr, nullptr, sizeof(ELMoviePlayerBase_eventPlay_Parms), Z_Construct_UFunction_UELMoviePlayerBase_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_Play_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMoviePlayerBase_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMoviePlayerBase_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMoviePlayerBase_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMoviePlayerBase_Prepare_Statics
	{
		struct ELMoviePlayerBase_eventPrepare_Parms
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
	void Z_Construct_UFunction_UELMoviePlayerBase_Prepare_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMoviePlayerBase_eventPrepare_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMoviePlayerBase_Prepare_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMoviePlayerBase_eventPrepare_Parms), &Z_Construct_UFunction_UELMoviePlayerBase_Prepare_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMoviePlayerBase_Prepare_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_Prepare_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMoviePlayerBase_Prepare_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMoviePlayerBase_Prepare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMoviePlayerBase, nullptr, "Prepare", nullptr, nullptr, sizeof(ELMoviePlayerBase_eventPrepare_Parms), Z_Construct_UFunction_UELMoviePlayerBase_Prepare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_Prepare_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMoviePlayerBase_Prepare_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_Prepare_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMoviePlayerBase_Prepare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMoviePlayerBase_Prepare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMoviePlayerBase_Seek_Statics
	{
		struct ELMoviePlayerBase_eventSeek_Parms
		{
			float TimeSeconds;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeSeconds;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELMoviePlayerBase_Seek_Statics::NewProp_TimeSeconds = { "TimeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMoviePlayerBase_eventSeek_Parms, TimeSeconds), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMoviePlayerBase_Seek_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMoviePlayerBase_eventSeek_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMoviePlayerBase_Seek_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMoviePlayerBase_eventSeek_Parms), &Z_Construct_UFunction_UELMoviePlayerBase_Seek_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMoviePlayerBase_Seek_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_Seek_Statics::NewProp_TimeSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_Seek_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMoviePlayerBase_Seek_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMoviePlayerBase_Seek_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMoviePlayerBase, nullptr, "Seek", nullptr, nullptr, sizeof(ELMoviePlayerBase_eventSeek_Parms), Z_Construct_UFunction_UELMoviePlayerBase_Seek_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_Seek_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMoviePlayerBase_Seek_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_Seek_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMoviePlayerBase_Seek()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMoviePlayerBase_Seek_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMoviePlayerBase_SetAudioVolume_Statics
	{
		struct ELMoviePlayerBase_eventSetAudioVolume_Parms
		{
			float Volume;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELMoviePlayerBase_SetAudioVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMoviePlayerBase_eventSetAudioVolume_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMoviePlayerBase_SetAudioVolume_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMoviePlayerBase_eventSetAudioVolume_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMoviePlayerBase_SetAudioVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMoviePlayerBase_eventSetAudioVolume_Parms), &Z_Construct_UFunction_UELMoviePlayerBase_SetAudioVolume_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMoviePlayerBase_SetAudioVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_SetAudioVolume_Statics::NewProp_Volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_SetAudioVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMoviePlayerBase_SetAudioVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMoviePlayerBase_SetAudioVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMoviePlayerBase, nullptr, "SetAudioVolume", nullptr, nullptr, sizeof(ELMoviePlayerBase_eventSetAudioVolume_Parms), Z_Construct_UFunction_UELMoviePlayerBase_SetAudioVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_SetAudioVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMoviePlayerBase_SetAudioVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_SetAudioVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMoviePlayerBase_SetAudioVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMoviePlayerBase_SetAudioVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMoviePlayerBase_SetDebugOff_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMoviePlayerBase_SetDebugOff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMoviePlayerBase_SetDebugOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMoviePlayerBase, nullptr, "SetDebugOff", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMoviePlayerBase_SetDebugOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_SetDebugOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMoviePlayerBase_SetDebugOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMoviePlayerBase_SetDebugOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMoviePlayerBase_SetDebugOn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMoviePlayerBase_SetDebugOn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMoviePlayerBase_SetDebugOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMoviePlayerBase, nullptr, "SetDebugOn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMoviePlayerBase_SetDebugOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_SetDebugOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMoviePlayerBase_SetDebugOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMoviePlayerBase_SetDebugOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMoviePlayerBase_SetLooping_Statics
	{
		struct ELMoviePlayerBase_eventSetLooping_Parms
		{
			bool Looping;
			bool ReturnValue;
		};
		static void NewProp_Looping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Looping;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELMoviePlayerBase_SetLooping_Statics::NewProp_Looping_SetBit(void* Obj)
	{
		((ELMoviePlayerBase_eventSetLooping_Parms*)Obj)->Looping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMoviePlayerBase_SetLooping_Statics::NewProp_Looping = { "Looping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMoviePlayerBase_eventSetLooping_Parms), &Z_Construct_UFunction_UELMoviePlayerBase_SetLooping_Statics::NewProp_Looping_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMoviePlayerBase_SetLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMoviePlayerBase_eventSetLooping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMoviePlayerBase_SetLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMoviePlayerBase_eventSetLooping_Parms), &Z_Construct_UFunction_UELMoviePlayerBase_SetLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMoviePlayerBase_SetLooping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_SetLooping_Statics::NewProp_Looping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_SetLooping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMoviePlayerBase_SetLooping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMoviePlayerBase_SetLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMoviePlayerBase, nullptr, "SetLooping", nullptr, nullptr, sizeof(ELMoviePlayerBase_eventSetLooping_Parms), Z_Construct_UFunction_UELMoviePlayerBase_SetLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_SetLooping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMoviePlayerBase_SetLooping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_SetLooping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMoviePlayerBase_SetLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMoviePlayerBase_SetLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMoviePlayerBase_Setup_Statics
	{
		struct ELMoviePlayerBase_eventSetup_Parms
		{
			int32 SlotNo;
			UTexture* Texture;
			bool IsLooping;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotNo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static void NewProp_IsLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLooping;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMoviePlayerBase_Setup_Statics::NewProp_SlotNo = { "SlotNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMoviePlayerBase_eventSetup_Parms, SlotNo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMoviePlayerBase_Setup_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMoviePlayerBase_eventSetup_Parms, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMoviePlayerBase_Setup_Statics::NewProp_IsLooping_SetBit(void* Obj)
	{
		((ELMoviePlayerBase_eventSetup_Parms*)Obj)->IsLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMoviePlayerBase_Setup_Statics::NewProp_IsLooping = { "IsLooping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMoviePlayerBase_eventSetup_Parms), &Z_Construct_UFunction_UELMoviePlayerBase_Setup_Statics::NewProp_IsLooping_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMoviePlayerBase_Setup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMoviePlayerBase_eventSetup_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMoviePlayerBase_Setup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMoviePlayerBase_eventSetup_Parms), &Z_Construct_UFunction_UELMoviePlayerBase_Setup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMoviePlayerBase_Setup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_Setup_Statics::NewProp_SlotNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_Setup_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_Setup_Statics::NewProp_IsLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_Setup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMoviePlayerBase_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMoviePlayerBase_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMoviePlayerBase, nullptr, "Setup", nullptr, nullptr, sizeof(ELMoviePlayerBase_eventSetup_Parms), Z_Construct_UFunction_UELMoviePlayerBase_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_Setup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMoviePlayerBase_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMoviePlayerBase_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMoviePlayerBase_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMoviePlayerBase_SetupWithTexturePath_Statics
	{
		struct ELMoviePlayerBase_eventSetupWithTexturePath_Parms
		{
			int32 SlotID;
			FString TexturePath;
			bool IsLooping;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TexturePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TexturePath;
		static void NewProp_IsLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLooping;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMoviePlayerBase_SetupWithTexturePath_Statics::NewProp_SlotID = { "SlotID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMoviePlayerBase_eventSetupWithTexturePath_Parms, SlotID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMoviePlayerBase_SetupWithTexturePath_Statics::NewProp_TexturePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELMoviePlayerBase_SetupWithTexturePath_Statics::NewProp_TexturePath = { "TexturePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMoviePlayerBase_eventSetupWithTexturePath_Parms, TexturePath), METADATA_PARAMS(Z_Construct_UFunction_UELMoviePlayerBase_SetupWithTexturePath_Statics::NewProp_TexturePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_SetupWithTexturePath_Statics::NewProp_TexturePath_MetaData)) };
	void Z_Construct_UFunction_UELMoviePlayerBase_SetupWithTexturePath_Statics::NewProp_IsLooping_SetBit(void* Obj)
	{
		((ELMoviePlayerBase_eventSetupWithTexturePath_Parms*)Obj)->IsLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMoviePlayerBase_SetupWithTexturePath_Statics::NewProp_IsLooping = { "IsLooping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMoviePlayerBase_eventSetupWithTexturePath_Parms), &Z_Construct_UFunction_UELMoviePlayerBase_SetupWithTexturePath_Statics::NewProp_IsLooping_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMoviePlayerBase_SetupWithTexturePath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMoviePlayerBase_eventSetupWithTexturePath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMoviePlayerBase_SetupWithTexturePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMoviePlayerBase_eventSetupWithTexturePath_Parms), &Z_Construct_UFunction_UELMoviePlayerBase_SetupWithTexturePath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMoviePlayerBase_SetupWithTexturePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_SetupWithTexturePath_Statics::NewProp_SlotID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_SetupWithTexturePath_Statics::NewProp_TexturePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_SetupWithTexturePath_Statics::NewProp_IsLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_SetupWithTexturePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMoviePlayerBase_SetupWithTexturePath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMoviePlayerBase_SetupWithTexturePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMoviePlayerBase, nullptr, "SetupWithTexturePath", nullptr, nullptr, sizeof(ELMoviePlayerBase_eventSetupWithTexturePath_Parms), Z_Construct_UFunction_UELMoviePlayerBase_SetupWithTexturePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_SetupWithTexturePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMoviePlayerBase_SetupWithTexturePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_SetupWithTexturePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMoviePlayerBase_SetupWithTexturePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMoviePlayerBase_SetupWithTexturePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMoviePlayerBase_Stop_Statics
	{
		struct ELMoviePlayerBase_eventStop_Parms
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
	void Z_Construct_UFunction_UELMoviePlayerBase_Stop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMoviePlayerBase_eventStop_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMoviePlayerBase_Stop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMoviePlayerBase_eventStop_Parms), &Z_Construct_UFunction_UELMoviePlayerBase_Stop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMoviePlayerBase_Stop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMoviePlayerBase_Stop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMoviePlayerBase_Stop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMoviePlayerBase_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMoviePlayerBase, nullptr, "Stop", nullptr, nullptr, sizeof(ELMoviePlayerBase_eventStop_Parms), Z_Construct_UFunction_UELMoviePlayerBase_Stop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_Stop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMoviePlayerBase_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMoviePlayerBase_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMoviePlayerBase_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMoviePlayerBase_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELMoviePlayerBase_NoRegister()
	{
		return UELMoviePlayerBase::StaticClass();
	}
	struct Z_Construct_UClass_UELMoviePlayerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMoviePlayerEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMoviePlayerEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELMoviePlayerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELMoviePlayerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELMoviePlayerBase_ChangeMovieResource, "ChangeMovieResource" }, // 3361467522
		{ &Z_Construct_UFunction_UELMoviePlayerBase_Destroy, "Destroy" }, // 1671658804
		{ &Z_Construct_UFunction_UELMoviePlayerBase_GetAudioVolume, "GetAudioVolume" }, // 2392777310
		{ &Z_Construct_UFunction_UELMoviePlayerBase_GetDuration, "GetDuration" }, // 1101164835
		{ &Z_Construct_UFunction_UELMoviePlayerBase_GetFrames, "GetFrames" }, // 1077193267
		{ &Z_Construct_UFunction_UELMoviePlayerBase_GetMoviePath, "GetMoviePath" }, // 3059000227
		{ &Z_Construct_UFunction_UELMoviePlayerBase_GetMovieTime, "GetMovieTime" }, // 3259167417
		{ &Z_Construct_UFunction_UELMoviePlayerBase_GetSlotNo, "GetSlotNo" }, // 798598764
		{ &Z_Construct_UFunction_UELMoviePlayerBase_GetStatus, "GetStatus" }, // 172817385
		{ &Z_Construct_UFunction_UELMoviePlayerBase_GetTexturePath, "GetTexturePath" }, // 3571879232
		{ &Z_Construct_UFunction_UELMoviePlayerBase_IsActive, "IsActive" }, // 1418645466
		{ &Z_Construct_UFunction_UELMoviePlayerBase_IsAlpha, "IsAlpha" }, // 1807012659
		{ &Z_Construct_UFunction_UELMoviePlayerBase_IsDebugOn, "IsDebugOn" }, // 3714429749
		{ &Z_Construct_UFunction_UELMoviePlayerBase_IsPaused, "IsPaused" }, // 3458460729
		{ &Z_Construct_UFunction_UELMoviePlayerBase_IsPrepared, "IsPrepared" }, // 1322748603
		{ &Z_Construct_UFunction_UELMoviePlayerBase_Pause, "Pause" }, // 674902011
		{ &Z_Construct_UFunction_UELMoviePlayerBase_Play, "Play" }, // 2289989132
		{ &Z_Construct_UFunction_UELMoviePlayerBase_Prepare, "Prepare" }, // 435707025
		{ &Z_Construct_UFunction_UELMoviePlayerBase_Seek, "Seek" }, // 1705529828
		{ &Z_Construct_UFunction_UELMoviePlayerBase_SetAudioVolume, "SetAudioVolume" }, // 3089555644
		{ &Z_Construct_UFunction_UELMoviePlayerBase_SetDebugOff, "SetDebugOff" }, // 1641161459
		{ &Z_Construct_UFunction_UELMoviePlayerBase_SetDebugOn, "SetDebugOn" }, // 2033175211
		{ &Z_Construct_UFunction_UELMoviePlayerBase_SetLooping, "SetLooping" }, // 2382689552
		{ &Z_Construct_UFunction_UELMoviePlayerBase_Setup, "Setup" }, // 1834384422
		{ &Z_Construct_UFunction_UELMoviePlayerBase_SetupWithTexturePath, "SetupWithTexturePath" }, // 505400117
		{ &Z_Construct_UFunction_UELMoviePlayerBase_Stop, "Stop" }, // 3231964895
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMoviePlayerBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELMoviePlayerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELMoviePlayerBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMoviePlayerBase_Statics::NewProp_OnMoviePlayerEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoviePlayerBase" },
		{ "ModuleRelativePath", "Public/ELMoviePlayerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELMoviePlayerBase_Statics::NewProp_OnMoviePlayerEvent = { "OnMoviePlayerEvent", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELMoviePlayerBase, OnMoviePlayerEvent), Z_Construct_UDelegateFunction_ABP_200508_MoviePlayerEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELMoviePlayerBase_Statics::NewProp_OnMoviePlayerEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMoviePlayerBase_Statics::NewProp_OnMoviePlayerEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELMoviePlayerBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMoviePlayerBase_Statics::NewProp_OnMoviePlayerEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELMoviePlayerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELMoviePlayerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELMoviePlayerBase_Statics::ClassParams = {
		&UELMoviePlayerBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELMoviePlayerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELMoviePlayerBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELMoviePlayerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELMoviePlayerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELMoviePlayerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELMoviePlayerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELMoviePlayerBase, 3805870268);
	template<> ABP_200508_API UClass* StaticClass<UELMoviePlayerBase>()
	{
		return UELMoviePlayerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELMoviePlayerBase(Z_Construct_UClass_UELMoviePlayerBase, &UELMoviePlayerBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELMoviePlayerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELMoviePlayerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
