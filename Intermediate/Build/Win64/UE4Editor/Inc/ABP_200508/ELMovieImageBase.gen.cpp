// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELMovieImageBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovieImageBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELMovieImageBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELMovieImageBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UELMoviePlayerBase_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMoviePlayerEvent();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaTexture_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELMovieImageBase::execGetMoviePlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELMoviePlayerBase**)Z_Param__Result=P_THIS->GetMoviePlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMovieImageBase::execPlayerEventSetVisibleOnly)
	{
		P_GET_ENUM(EMoviePlayerEvent,Z_Param_EventType);
		P_GET_OBJECT(UELMoviePlayerBase,Z_Param_MoviePlayerBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerEventSetVisibleOnly(EMoviePlayerEvent(Z_Param_EventType),Z_Param_MoviePlayerBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMovieImageBase::execSetTextureList)
	{
		P_GET_TARRAY(UManaTexture*,Z_Param_InTextureList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTextureList(Z_Param_InTextureList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMovieImageBase::execSetupTexture_N)
	{
		P_GET_OBJECT(UImage,Z_Param_TargetImage);
		P_GET_PROPERTY(FIntProperty,Z_Param_MovieSlotID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupTexture_N(Z_Param_TargetImage,Z_Param_MovieSlotID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMovieImageBase::execSetupTextureSimple_N)
	{
		P_GET_OBJECT(UImage,Z_Param_TargetImage);
		P_GET_PROPERTY(FIntProperty,Z_Param_MovieSlotID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupTextureSimple_N(Z_Param_TargetImage,Z_Param_MovieSlotID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMovieImageBase::execStartPrepare_N)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MovieSlotID);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_MovieDataID);
		P_GET_UBOOL(Z_Param_Loop);
		P_GET_UBOOL(Z_Param_InAutoPlay);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_FadeInTime);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_FadeOutTime);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_TotalTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartPrepare_N(Z_Param_MovieSlotID,Z_Param_Out_MovieDataID,Z_Param_Loop,Z_Param_InAutoPlay,Z_Param_Out_FadeInTime,Z_Param_Out_FadeOutTime,Z_Param_Out_TotalTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMovieImageBase::execStopMovie_N)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopMovie_N();
		P_NATIVE_END;
	}
	static FName NAME_UELMovieImageBase_SetupTextureImpl = FName(TEXT("SetupTextureImpl"));
	void UELMovieImageBase::SetupTextureImpl(UImage* TargetImage, int32 SlotNo, bool Alpha)
	{
		ELMovieImageBase_eventSetupTextureImpl_Parms Parms;
		Parms.TargetImage=TargetImage;
		Parms.SlotNo=SlotNo;
		Parms.Alpha=Alpha ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELMovieImageBase_SetupTextureImpl),&Parms);
	}
	void UELMovieImageBase::StaticRegisterNativesUELMovieImageBase()
	{
		UClass* Class = UELMovieImageBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMoviePlayer", &UELMovieImageBase::execGetMoviePlayer },
			{ "PlayerEventSetVisibleOnly", &UELMovieImageBase::execPlayerEventSetVisibleOnly },
			{ "SetTextureList", &UELMovieImageBase::execSetTextureList },
			{ "SetupTexture_N", &UELMovieImageBase::execSetupTexture_N },
			{ "SetupTextureSimple_N", &UELMovieImageBase::execSetupTextureSimple_N },
			{ "StartPrepare_N", &UELMovieImageBase::execStartPrepare_N },
			{ "StopMovie_N", &UELMovieImageBase::execStopMovie_N },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELMovieImageBase_GetMoviePlayer_Statics
	{
		struct ELMovieImageBase_eventGetMoviePlayer_Parms
		{
			UELMoviePlayerBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMovieImageBase_GetMoviePlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieImageBase_eventGetMoviePlayer_Parms, ReturnValue), Z_Construct_UClass_UELMoviePlayerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMovieImageBase_GetMoviePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieImageBase_GetMoviePlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovieImageBase_GetMoviePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovieImageBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMovieImageBase_GetMoviePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMovieImageBase, nullptr, "GetMoviePlayer", nullptr, nullptr, sizeof(ELMovieImageBase_eventGetMoviePlayer_Parms), Z_Construct_UFunction_UELMovieImageBase_GetMoviePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieImageBase_GetMoviePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMovieImageBase_GetMoviePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieImageBase_GetMoviePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMovieImageBase_GetMoviePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMovieImageBase_GetMoviePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMovieImageBase_PlayerEventSetVisibleOnly_Statics
	{
		struct ELMovieImageBase_eventPlayerEventSetVisibleOnly_Parms
		{
			EMoviePlayerEvent EventType;
			UELMoviePlayerBase* MoviePlayerBase;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EventType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EventType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoviePlayerBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELMovieImageBase_PlayerEventSetVisibleOnly_Statics::NewProp_EventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELMovieImageBase_PlayerEventSetVisibleOnly_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieImageBase_eventPlayerEventSetVisibleOnly_Parms, EventType), Z_Construct_UEnum_ABP_200508_EMoviePlayerEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMovieImageBase_PlayerEventSetVisibleOnly_Statics::NewProp_MoviePlayerBase = { "MoviePlayerBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieImageBase_eventPlayerEventSetVisibleOnly_Parms, MoviePlayerBase), Z_Construct_UClass_UELMoviePlayerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMovieImageBase_PlayerEventSetVisibleOnly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieImageBase_PlayerEventSetVisibleOnly_Statics::NewProp_EventType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieImageBase_PlayerEventSetVisibleOnly_Statics::NewProp_EventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieImageBase_PlayerEventSetVisibleOnly_Statics::NewProp_MoviePlayerBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovieImageBase_PlayerEventSetVisibleOnly_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovieImageBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMovieImageBase_PlayerEventSetVisibleOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMovieImageBase, nullptr, "PlayerEventSetVisibleOnly", nullptr, nullptr, sizeof(ELMovieImageBase_eventPlayerEventSetVisibleOnly_Parms), Z_Construct_UFunction_UELMovieImageBase_PlayerEventSetVisibleOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieImageBase_PlayerEventSetVisibleOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMovieImageBase_PlayerEventSetVisibleOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieImageBase_PlayerEventSetVisibleOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMovieImageBase_PlayerEventSetVisibleOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMovieImageBase_PlayerEventSetVisibleOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMovieImageBase_SetTextureList_Statics
	{
		struct ELMovieImageBase_eventSetTextureList_Parms
		{
			TArray<UManaTexture*> InTextureList;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InTextureList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InTextureList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMovieImageBase_SetTextureList_Statics::NewProp_InTextureList_Inner = { "InTextureList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UManaTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELMovieImageBase_SetTextureList_Statics::NewProp_InTextureList = { "InTextureList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieImageBase_eventSetTextureList_Parms, InTextureList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMovieImageBase_SetTextureList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieImageBase_SetTextureList_Statics::NewProp_InTextureList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieImageBase_SetTextureList_Statics::NewProp_InTextureList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovieImageBase_SetTextureList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovieImageBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMovieImageBase_SetTextureList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMovieImageBase, nullptr, "SetTextureList", nullptr, nullptr, sizeof(ELMovieImageBase_eventSetTextureList_Parms), Z_Construct_UFunction_UELMovieImageBase_SetTextureList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieImageBase_SetTextureList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMovieImageBase_SetTextureList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieImageBase_SetTextureList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMovieImageBase_SetTextureList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMovieImageBase_SetTextureList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMovieImageBase_SetupTexture_N_Statics
	{
		struct ELMovieImageBase_eventSetupTexture_N_Parms
		{
			UImage* TargetImage;
			int32 MovieSlotID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetImage;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MovieSlotID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovieImageBase_SetupTexture_N_Statics::NewProp_TargetImage_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMovieImageBase_SetupTexture_N_Statics::NewProp_TargetImage = { "TargetImage", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieImageBase_eventSetupTexture_N_Parms, TargetImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELMovieImageBase_SetupTexture_N_Statics::NewProp_TargetImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieImageBase_SetupTexture_N_Statics::NewProp_TargetImage_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMovieImageBase_SetupTexture_N_Statics::NewProp_MovieSlotID = { "MovieSlotID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieImageBase_eventSetupTexture_N_Parms, MovieSlotID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMovieImageBase_SetupTexture_N_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieImageBase_SetupTexture_N_Statics::NewProp_TargetImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieImageBase_SetupTexture_N_Statics::NewProp_MovieSlotID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovieImageBase_SetupTexture_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovieImageBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMovieImageBase_SetupTexture_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMovieImageBase, nullptr, "SetupTexture_N", nullptr, nullptr, sizeof(ELMovieImageBase_eventSetupTexture_N_Parms), Z_Construct_UFunction_UELMovieImageBase_SetupTexture_N_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieImageBase_SetupTexture_N_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMovieImageBase_SetupTexture_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieImageBase_SetupTexture_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMovieImageBase_SetupTexture_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMovieImageBase_SetupTexture_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMovieImageBase_SetupTextureImpl_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetImage;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotNo;
		static void NewProp_Alpha_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Alpha;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovieImageBase_SetupTextureImpl_Statics::NewProp_TargetImage_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMovieImageBase_SetupTextureImpl_Statics::NewProp_TargetImage = { "TargetImage", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieImageBase_eventSetupTextureImpl_Parms, TargetImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELMovieImageBase_SetupTextureImpl_Statics::NewProp_TargetImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieImageBase_SetupTextureImpl_Statics::NewProp_TargetImage_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMovieImageBase_SetupTextureImpl_Statics::NewProp_SlotNo = { "SlotNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieImageBase_eventSetupTextureImpl_Parms, SlotNo), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMovieImageBase_SetupTextureImpl_Statics::NewProp_Alpha_SetBit(void* Obj)
	{
		((ELMovieImageBase_eventSetupTextureImpl_Parms*)Obj)->Alpha = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMovieImageBase_SetupTextureImpl_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieImageBase_eventSetupTextureImpl_Parms), &Z_Construct_UFunction_UELMovieImageBase_SetupTextureImpl_Statics::NewProp_Alpha_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMovieImageBase_SetupTextureImpl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieImageBase_SetupTextureImpl_Statics::NewProp_TargetImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieImageBase_SetupTextureImpl_Statics::NewProp_SlotNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieImageBase_SetupTextureImpl_Statics::NewProp_Alpha,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovieImageBase_SetupTextureImpl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovieImageBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMovieImageBase_SetupTextureImpl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMovieImageBase, nullptr, "SetupTextureImpl", nullptr, nullptr, sizeof(ELMovieImageBase_eventSetupTextureImpl_Parms), Z_Construct_UFunction_UELMovieImageBase_SetupTextureImpl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieImageBase_SetupTextureImpl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMovieImageBase_SetupTextureImpl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieImageBase_SetupTextureImpl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMovieImageBase_SetupTextureImpl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMovieImageBase_SetupTextureImpl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMovieImageBase_SetupTextureSimple_N_Statics
	{
		struct ELMovieImageBase_eventSetupTextureSimple_N_Parms
		{
			UImage* TargetImage;
			int32 MovieSlotID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetImage;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MovieSlotID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovieImageBase_SetupTextureSimple_N_Statics::NewProp_TargetImage_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMovieImageBase_SetupTextureSimple_N_Statics::NewProp_TargetImage = { "TargetImage", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieImageBase_eventSetupTextureSimple_N_Parms, TargetImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELMovieImageBase_SetupTextureSimple_N_Statics::NewProp_TargetImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieImageBase_SetupTextureSimple_N_Statics::NewProp_TargetImage_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMovieImageBase_SetupTextureSimple_N_Statics::NewProp_MovieSlotID = { "MovieSlotID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieImageBase_eventSetupTextureSimple_N_Parms, MovieSlotID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMovieImageBase_SetupTextureSimple_N_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieImageBase_SetupTextureSimple_N_Statics::NewProp_TargetImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieImageBase_SetupTextureSimple_N_Statics::NewProp_MovieSlotID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovieImageBase_SetupTextureSimple_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovieImageBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMovieImageBase_SetupTextureSimple_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMovieImageBase, nullptr, "SetupTextureSimple_N", nullptr, nullptr, sizeof(ELMovieImageBase_eventSetupTextureSimple_N_Parms), Z_Construct_UFunction_UELMovieImageBase_SetupTextureSimple_N_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieImageBase_SetupTextureSimple_N_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMovieImageBase_SetupTextureSimple_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieImageBase_SetupTextureSimple_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMovieImageBase_SetupTextureSimple_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMovieImageBase_SetupTextureSimple_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMovieImageBase_StartPrepare_N_Statics
	{
		struct ELMovieImageBase_eventStartPrepare_N_Parms
		{
			int32 MovieSlotID;
			FName MovieDataID;
			bool Loop;
			bool InAutoPlay;
			float FadeInTime;
			float FadeOutTime;
			float TotalTime;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MovieSlotID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovieDataID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MovieDataID;
		static void NewProp_Loop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Loop;
		static void NewProp_InAutoPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InAutoPlay;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeInTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeOutTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMovieImageBase_StartPrepare_N_Statics::NewProp_MovieSlotID = { "MovieSlotID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieImageBase_eventStartPrepare_N_Parms, MovieSlotID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovieImageBase_StartPrepare_N_Statics::NewProp_MovieDataID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELMovieImageBase_StartPrepare_N_Statics::NewProp_MovieDataID = { "MovieDataID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieImageBase_eventStartPrepare_N_Parms, MovieDataID), METADATA_PARAMS(Z_Construct_UFunction_UELMovieImageBase_StartPrepare_N_Statics::NewProp_MovieDataID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieImageBase_StartPrepare_N_Statics::NewProp_MovieDataID_MetaData)) };
	void Z_Construct_UFunction_UELMovieImageBase_StartPrepare_N_Statics::NewProp_Loop_SetBit(void* Obj)
	{
		((ELMovieImageBase_eventStartPrepare_N_Parms*)Obj)->Loop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMovieImageBase_StartPrepare_N_Statics::NewProp_Loop = { "Loop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieImageBase_eventStartPrepare_N_Parms), &Z_Construct_UFunction_UELMovieImageBase_StartPrepare_N_Statics::NewProp_Loop_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMovieImageBase_StartPrepare_N_Statics::NewProp_InAutoPlay_SetBit(void* Obj)
	{
		((ELMovieImageBase_eventStartPrepare_N_Parms*)Obj)->InAutoPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMovieImageBase_StartPrepare_N_Statics::NewProp_InAutoPlay = { "InAutoPlay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieImageBase_eventStartPrepare_N_Parms), &Z_Construct_UFunction_UELMovieImageBase_StartPrepare_N_Statics::NewProp_InAutoPlay_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELMovieImageBase_StartPrepare_N_Statics::NewProp_FadeInTime = { "FadeInTime", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieImageBase_eventStartPrepare_N_Parms, FadeInTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELMovieImageBase_StartPrepare_N_Statics::NewProp_FadeOutTime = { "FadeOutTime", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieImageBase_eventStartPrepare_N_Parms, FadeOutTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELMovieImageBase_StartPrepare_N_Statics::NewProp_TotalTime = { "TotalTime", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieImageBase_eventStartPrepare_N_Parms, TotalTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMovieImageBase_StartPrepare_N_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieImageBase_StartPrepare_N_Statics::NewProp_MovieSlotID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieImageBase_StartPrepare_N_Statics::NewProp_MovieDataID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieImageBase_StartPrepare_N_Statics::NewProp_Loop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieImageBase_StartPrepare_N_Statics::NewProp_InAutoPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieImageBase_StartPrepare_N_Statics::NewProp_FadeInTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieImageBase_StartPrepare_N_Statics::NewProp_FadeOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieImageBase_StartPrepare_N_Statics::NewProp_TotalTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovieImageBase_StartPrepare_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovieImageBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMovieImageBase_StartPrepare_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMovieImageBase, nullptr, "StartPrepare_N", nullptr, nullptr, sizeof(ELMovieImageBase_eventStartPrepare_N_Parms), Z_Construct_UFunction_UELMovieImageBase_StartPrepare_N_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieImageBase_StartPrepare_N_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMovieImageBase_StartPrepare_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieImageBase_StartPrepare_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMovieImageBase_StartPrepare_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMovieImageBase_StartPrepare_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMovieImageBase_StopMovie_N_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovieImageBase_StopMovie_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovieImageBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMovieImageBase_StopMovie_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMovieImageBase, nullptr, "StopMovie_N", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMovieImageBase_StopMovie_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieImageBase_StopMovie_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMovieImageBase_StopMovie_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMovieImageBase_StopMovie_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELMovieImageBase_NoRegister()
	{
		return UELMovieImageBase::StaticClass();
	}
	struct Z_Construct_UClass_UELMovieImageBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELMovieImageBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELMovieImageBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELMovieImageBase_GetMoviePlayer, "GetMoviePlayer" }, // 4289906562
		{ &Z_Construct_UFunction_UELMovieImageBase_PlayerEventSetVisibleOnly, "PlayerEventSetVisibleOnly" }, // 4090613443
		{ &Z_Construct_UFunction_UELMovieImageBase_SetTextureList, "SetTextureList" }, // 2477422081
		{ &Z_Construct_UFunction_UELMovieImageBase_SetupTexture_N, "SetupTexture_N" }, // 664088061
		{ &Z_Construct_UFunction_UELMovieImageBase_SetupTextureImpl, "SetupTextureImpl" }, // 3459875360
		{ &Z_Construct_UFunction_UELMovieImageBase_SetupTextureSimple_N, "SetupTextureSimple_N" }, // 4274805481
		{ &Z_Construct_UFunction_UELMovieImageBase_StartPrepare_N, "StartPrepare_N" }, // 3693115216
		{ &Z_Construct_UFunction_UELMovieImageBase_StopMovie_N, "StopMovie_N" }, // 2485213679
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMovieImageBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELMovieImageBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELMovieImageBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELMovieImageBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELMovieImageBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELMovieImageBase_Statics::ClassParams = {
		&UELMovieImageBase::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELMovieImageBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELMovieImageBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELMovieImageBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELMovieImageBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELMovieImageBase, 1437686542);
	template<> ABP_200508_API UClass* StaticClass<UELMovieImageBase>()
	{
		return UELMovieImageBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELMovieImageBase(Z_Construct_UClass_UELMovieImageBase, &UELMovieImageBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELMovieImageBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELMovieImageBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
