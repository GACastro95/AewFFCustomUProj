// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELMovieControlBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovieControlBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELMovieControlBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELMovieControlBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UELMoviePlayerBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMovieType();
// End Cross Module References
	DEFINE_FUNCTION(UELMovieControlBase::execChangeMovieResource)
	{
		P_GET_OBJECT_REF(UELMoviePlayerBase,Z_Param_Out_Player);
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotNo);
		P_GET_PROPERTY(FStrProperty,Z_Param_MoviePath);
		P_GET_UBOOL(Z_Param_IsLooping);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ChangeMovieResource(Z_Param_Out_Player,Z_Param_SlotNo,Z_Param_MoviePath,Z_Param_IsLooping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMovieControlBase::execCreateMovieControl)
	{
		P_GET_OBJECT(UELMovieControlBase,Z_Param_ELMovieControlBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELMovieControlBase::CreateMovieControl(Z_Param_ELMovieControlBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMovieControlBase::execDestroy)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Destroy(Z_Param_SlotNo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMovieControlBase::execDestroyAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DestroyAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMovieControlBase::execGetPlayer)
	{
		P_GET_OBJECT_REF(UELMoviePlayerBase,Z_Param_Out_Player);
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPlayer(Z_Param_Out_Player,Z_Param_SlotNo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMovieControlBase::execIsAlphaMovie)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MovieSlotID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAlphaMovie(Z_Param_MovieSlotID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMovieControlBase::execIsPreparedAll)
	{
		P_GET_TARRAY(int32,Z_Param_Excludes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPreparedAll(Z_Param_Excludes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMovieControlBase::execPlayAll)
	{
		P_GET_TARRAY(int32,Z_Param_Excludes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PlayAll(Z_Param_Excludes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMovieControlBase::execResumeAll)
	{
		P_GET_TARRAY(int32,Z_Param_Excludes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ResumeAll(Z_Param_Excludes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMovieControlBase::execSeekAll)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_TARRAY(int32,Z_Param_Excludes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SeekAll(Z_Param_Time,Z_Param_Excludes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMovieControlBase::execSetTextureList)
	{
		P_GET_TMAP(int32,UTexture*,Z_Param_Textures);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetTextureList(Z_Param_Textures);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMovieControlBase::execSetTexturePathList)
	{
		P_GET_TMAP(int32,FString,Z_Param_TexturePaths);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetTexturePathList(Z_Param_TexturePaths);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMovieControlBase::execSetup)
	{
		P_GET_OBJECT_REF(UELMoviePlayerBase,Z_Param_Out_Player);
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotNo);
		P_GET_UBOOL(Z_Param_IsLooping);
		P_GET_UBOOL(Z_Param_DropOldMovie);
		P_GET_ENUM(EMovieType,Z_Param_MovieType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Setup(Z_Param_Out_Player,Z_Param_SlotNo,Z_Param_IsLooping,Z_Param_DropOldMovie,EMovieType(Z_Param_MovieType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMovieControlBase::execSetupWithTexture)
	{
		P_GET_OBJECT_REF(UELMoviePlayerBase,Z_Param_Out_Player);
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotNo);
		P_GET_OBJECT(UTexture,Z_Param_Texture);
		P_GET_UBOOL(Z_Param_IsLooping);
		P_GET_UBOOL(Z_Param_DropOldMovie);
		P_GET_ENUM(EMovieType,Z_Param_MovieType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetupWithTexture(Z_Param_Out_Player,Z_Param_SlotNo,Z_Param_Texture,Z_Param_IsLooping,Z_Param_DropOldMovie,EMovieType(Z_Param_MovieType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMovieControlBase::execSetupWithTexturePath)
	{
		P_GET_OBJECT_REF(UELMoviePlayerBase,Z_Param_Out_Player);
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotNo);
		P_GET_PROPERTY(FStrProperty,Z_Param_TexturePath);
		P_GET_UBOOL(Z_Param_IsLooping);
		P_GET_UBOOL(Z_Param_DropOldMovie);
		P_GET_ENUM(EMovieType,Z_Param_MovieType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetupWithTexturePath(Z_Param_Out_Player,Z_Param_SlotNo,Z_Param_TexturePath,Z_Param_IsLooping,Z_Param_DropOldMovie,EMovieType(Z_Param_MovieType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMovieControlBase::execStartPrepare)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MovieSlotID);
		P_GET_PROPERTY(FNameProperty,Z_Param_MovieDataID);
		P_GET_UBOOL(Z_Param_Loop);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELMoviePlayerBase**)Z_Param__Result=P_THIS->StartPrepare(Z_Param_MovieSlotID,Z_Param_MovieDataID,Z_Param_Loop);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMovieControlBase::execStopAll)
	{
		P_GET_TARRAY(int32,Z_Param_Excludes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StopAll(Z_Param_Excludes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMovieControlBase::execSuspendAll)
	{
		P_GET_TARRAY(int32,Z_Param_Excludes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SuspendAll(Z_Param_Excludes);
		P_NATIVE_END;
	}
	static FName NAME_UELMovieControlBase_GetMovieFrames = FName(TEXT("GetMovieFrames"));
	bool UELMovieControlBase::GetMovieFrames(FName const& MovieDataID, float& FadeInTime, float& FadeOutTime, float& TotalTime)
	{
		ELMovieControlBase_eventGetMovieFrames_Parms Parms;
		Parms.MovieDataID=MovieDataID;
		Parms.FadeInTime=FadeInTime;
		Parms.FadeOutTime=FadeOutTime;
		Parms.TotalTime=TotalTime;
		ProcessEvent(FindFunctionChecked(NAME_UELMovieControlBase_GetMovieFrames),&Parms);
		FadeInTime=Parms.FadeInTime;
		FadeOutTime=Parms.FadeOutTime;
		TotalTime=Parms.TotalTime;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELMovieControlBase_GetMoviePath = FName(TEXT("GetMoviePath"));
	bool UELMovieControlBase::GetMoviePath(FName const& MovieDataID, FString& MoviePath)
	{
		ELMovieControlBase_eventGetMoviePath_Parms Parms;
		Parms.MovieDataID=MovieDataID;
		Parms.MoviePath=MoviePath;
		ProcessEvent(FindFunctionChecked(NAME_UELMovieControlBase_GetMoviePath),&Parms);
		MoviePath=Parms.MoviePath;
		return !!Parms.ReturnValue;
	}
	void UELMovieControlBase::StaticRegisterNativesUELMovieControlBase()
	{
		UClass* Class = UELMovieControlBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeMovieResource", &UELMovieControlBase::execChangeMovieResource },
			{ "CreateMovieControl", &UELMovieControlBase::execCreateMovieControl },
			{ "Destroy", &UELMovieControlBase::execDestroy },
			{ "DestroyAll", &UELMovieControlBase::execDestroyAll },
			{ "GetPlayer", &UELMovieControlBase::execGetPlayer },
			{ "IsAlphaMovie", &UELMovieControlBase::execIsAlphaMovie },
			{ "IsPreparedAll", &UELMovieControlBase::execIsPreparedAll },
			{ "PlayAll", &UELMovieControlBase::execPlayAll },
			{ "ResumeAll", &UELMovieControlBase::execResumeAll },
			{ "SeekAll", &UELMovieControlBase::execSeekAll },
			{ "SetTextureList", &UELMovieControlBase::execSetTextureList },
			{ "SetTexturePathList", &UELMovieControlBase::execSetTexturePathList },
			{ "Setup", &UELMovieControlBase::execSetup },
			{ "SetupWithTexture", &UELMovieControlBase::execSetupWithTexture },
			{ "SetupWithTexturePath", &UELMovieControlBase::execSetupWithTexturePath },
			{ "StartPrepare", &UELMovieControlBase::execStartPrepare },
			{ "StopAll", &UELMovieControlBase::execStopAll },
			{ "SuspendAll", &UELMovieControlBase::execSuspendAll },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELMovieControlBase_ChangeMovieResource_Statics
	{
		struct ELMovieControlBase_eventChangeMovieResource_Parms
		{
			UELMoviePlayerBase* Player;
			int32 SlotNo;
			FString MoviePath;
			bool IsLooping;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoviePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MoviePath;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMovieControlBase_ChangeMovieResource_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieControlBase_eventChangeMovieResource_Parms, Player), Z_Construct_UClass_UELMoviePlayerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMovieControlBase_ChangeMovieResource_Statics::NewProp_SlotNo = { "SlotNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieControlBase_eventChangeMovieResource_Parms, SlotNo), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovieControlBase_ChangeMovieResource_Statics::NewProp_MoviePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELMovieControlBase_ChangeMovieResource_Statics::NewProp_MoviePath = { "MoviePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieControlBase_eventChangeMovieResource_Parms, MoviePath), METADATA_PARAMS(Z_Construct_UFunction_UELMovieControlBase_ChangeMovieResource_Statics::NewProp_MoviePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_ChangeMovieResource_Statics::NewProp_MoviePath_MetaData)) };
	void Z_Construct_UFunction_UELMovieControlBase_ChangeMovieResource_Statics::NewProp_IsLooping_SetBit(void* Obj)
	{
		((ELMovieControlBase_eventChangeMovieResource_Parms*)Obj)->IsLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMovieControlBase_ChangeMovieResource_Statics::NewProp_IsLooping = { "IsLooping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieControlBase_eventChangeMovieResource_Parms), &Z_Construct_UFunction_UELMovieControlBase_ChangeMovieResource_Statics::NewProp_IsLooping_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMovieControlBase_ChangeMovieResource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMovieControlBase_eventChangeMovieResource_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMovieControlBase_ChangeMovieResource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieControlBase_eventChangeMovieResource_Parms), &Z_Construct_UFunction_UELMovieControlBase_ChangeMovieResource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMovieControlBase_ChangeMovieResource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_ChangeMovieResource_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_ChangeMovieResource_Statics::NewProp_SlotNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_ChangeMovieResource_Statics::NewProp_MoviePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_ChangeMovieResource_Statics::NewProp_IsLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_ChangeMovieResource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovieControlBase_ChangeMovieResource_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovieControlBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMovieControlBase_ChangeMovieResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMovieControlBase, nullptr, "ChangeMovieResource", nullptr, nullptr, sizeof(ELMovieControlBase_eventChangeMovieResource_Parms), Z_Construct_UFunction_UELMovieControlBase_ChangeMovieResource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_ChangeMovieResource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMovieControlBase_ChangeMovieResource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_ChangeMovieResource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMovieControlBase_ChangeMovieResource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMovieControlBase_ChangeMovieResource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMovieControlBase_CreateMovieControl_Statics
	{
		struct ELMovieControlBase_eventCreateMovieControl_Parms
		{
			UELMovieControlBase* ELMovieControlBase;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ELMovieControlBase;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMovieControlBase_CreateMovieControl_Statics::NewProp_ELMovieControlBase = { "ELMovieControlBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieControlBase_eventCreateMovieControl_Parms, ELMovieControlBase), Z_Construct_UClass_UELMovieControlBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMovieControlBase_CreateMovieControl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMovieControlBase_eventCreateMovieControl_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMovieControlBase_CreateMovieControl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieControlBase_eventCreateMovieControl_Parms), &Z_Construct_UFunction_UELMovieControlBase_CreateMovieControl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMovieControlBase_CreateMovieControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_CreateMovieControl_Statics::NewProp_ELMovieControlBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_CreateMovieControl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovieControlBase_CreateMovieControl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovieControlBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMovieControlBase_CreateMovieControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMovieControlBase, nullptr, "CreateMovieControl", nullptr, nullptr, sizeof(ELMovieControlBase_eventCreateMovieControl_Parms), Z_Construct_UFunction_UELMovieControlBase_CreateMovieControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_CreateMovieControl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMovieControlBase_CreateMovieControl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_CreateMovieControl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMovieControlBase_CreateMovieControl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMovieControlBase_CreateMovieControl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMovieControlBase_Destroy_Statics
	{
		struct ELMovieControlBase_eventDestroy_Parms
		{
			int32 SlotNo;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotNo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMovieControlBase_Destroy_Statics::NewProp_SlotNo = { "SlotNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieControlBase_eventDestroy_Parms, SlotNo), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMovieControlBase_Destroy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMovieControlBase_eventDestroy_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMovieControlBase_Destroy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieControlBase_eventDestroy_Parms), &Z_Construct_UFunction_UELMovieControlBase_Destroy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMovieControlBase_Destroy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_Destroy_Statics::NewProp_SlotNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_Destroy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovieControlBase_Destroy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovieControlBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMovieControlBase_Destroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMovieControlBase, nullptr, "Destroy", nullptr, nullptr, sizeof(ELMovieControlBase_eventDestroy_Parms), Z_Construct_UFunction_UELMovieControlBase_Destroy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_Destroy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMovieControlBase_Destroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_Destroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMovieControlBase_Destroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMovieControlBase_Destroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMovieControlBase_DestroyAll_Statics
	{
		struct ELMovieControlBase_eventDestroyAll_Parms
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
	void Z_Construct_UFunction_UELMovieControlBase_DestroyAll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMovieControlBase_eventDestroyAll_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMovieControlBase_DestroyAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieControlBase_eventDestroyAll_Parms), &Z_Construct_UFunction_UELMovieControlBase_DestroyAll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMovieControlBase_DestroyAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_DestroyAll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovieControlBase_DestroyAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovieControlBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMovieControlBase_DestroyAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMovieControlBase, nullptr, "DestroyAll", nullptr, nullptr, sizeof(ELMovieControlBase_eventDestroyAll_Parms), Z_Construct_UFunction_UELMovieControlBase_DestroyAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_DestroyAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMovieControlBase_DestroyAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_DestroyAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMovieControlBase_DestroyAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMovieControlBase_DestroyAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMovieControlBase_GetMovieFrames_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovieDataID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MovieDataID;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeInTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeOutTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovieControlBase_GetMovieFrames_Statics::NewProp_MovieDataID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELMovieControlBase_GetMovieFrames_Statics::NewProp_MovieDataID = { "MovieDataID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieControlBase_eventGetMovieFrames_Parms, MovieDataID), METADATA_PARAMS(Z_Construct_UFunction_UELMovieControlBase_GetMovieFrames_Statics::NewProp_MovieDataID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_GetMovieFrames_Statics::NewProp_MovieDataID_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELMovieControlBase_GetMovieFrames_Statics::NewProp_FadeInTime = { "FadeInTime", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieControlBase_eventGetMovieFrames_Parms, FadeInTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELMovieControlBase_GetMovieFrames_Statics::NewProp_FadeOutTime = { "FadeOutTime", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieControlBase_eventGetMovieFrames_Parms, FadeOutTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELMovieControlBase_GetMovieFrames_Statics::NewProp_TotalTime = { "TotalTime", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieControlBase_eventGetMovieFrames_Parms, TotalTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMovieControlBase_GetMovieFrames_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMovieControlBase_eventGetMovieFrames_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMovieControlBase_GetMovieFrames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieControlBase_eventGetMovieFrames_Parms), &Z_Construct_UFunction_UELMovieControlBase_GetMovieFrames_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMovieControlBase_GetMovieFrames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_GetMovieFrames_Statics::NewProp_MovieDataID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_GetMovieFrames_Statics::NewProp_FadeInTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_GetMovieFrames_Statics::NewProp_FadeOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_GetMovieFrames_Statics::NewProp_TotalTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_GetMovieFrames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovieControlBase_GetMovieFrames_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovieControlBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMovieControlBase_GetMovieFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMovieControlBase, nullptr, "GetMovieFrames", nullptr, nullptr, sizeof(ELMovieControlBase_eventGetMovieFrames_Parms), Z_Construct_UFunction_UELMovieControlBase_GetMovieFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_GetMovieFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMovieControlBase_GetMovieFrames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_GetMovieFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMovieControlBase_GetMovieFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMovieControlBase_GetMovieFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMovieControlBase_GetMoviePath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovieDataID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MovieDataID;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovieControlBase_GetMoviePath_Statics::NewProp_MovieDataID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELMovieControlBase_GetMoviePath_Statics::NewProp_MovieDataID = { "MovieDataID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieControlBase_eventGetMoviePath_Parms, MovieDataID), METADATA_PARAMS(Z_Construct_UFunction_UELMovieControlBase_GetMoviePath_Statics::NewProp_MovieDataID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_GetMoviePath_Statics::NewProp_MovieDataID_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELMovieControlBase_GetMoviePath_Statics::NewProp_MoviePath = { "MoviePath", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieControlBase_eventGetMoviePath_Parms, MoviePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMovieControlBase_GetMoviePath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMovieControlBase_eventGetMoviePath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMovieControlBase_GetMoviePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieControlBase_eventGetMoviePath_Parms), &Z_Construct_UFunction_UELMovieControlBase_GetMoviePath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMovieControlBase_GetMoviePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_GetMoviePath_Statics::NewProp_MovieDataID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_GetMoviePath_Statics::NewProp_MoviePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_GetMoviePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovieControlBase_GetMoviePath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovieControlBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMovieControlBase_GetMoviePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMovieControlBase, nullptr, "GetMoviePath", nullptr, nullptr, sizeof(ELMovieControlBase_eventGetMoviePath_Parms), Z_Construct_UFunction_UELMovieControlBase_GetMoviePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_GetMoviePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMovieControlBase_GetMoviePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_GetMoviePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMovieControlBase_GetMoviePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMovieControlBase_GetMoviePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMovieControlBase_GetPlayer_Statics
	{
		struct ELMovieControlBase_eventGetPlayer_Parms
		{
			UELMoviePlayerBase* Player;
			int32 SlotNo;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotNo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMovieControlBase_GetPlayer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieControlBase_eventGetPlayer_Parms, Player), Z_Construct_UClass_UELMoviePlayerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMovieControlBase_GetPlayer_Statics::NewProp_SlotNo = { "SlotNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieControlBase_eventGetPlayer_Parms, SlotNo), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMovieControlBase_GetPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMovieControlBase_eventGetPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMovieControlBase_GetPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieControlBase_eventGetPlayer_Parms), &Z_Construct_UFunction_UELMovieControlBase_GetPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMovieControlBase_GetPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_GetPlayer_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_GetPlayer_Statics::NewProp_SlotNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_GetPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovieControlBase_GetPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovieControlBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMovieControlBase_GetPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMovieControlBase, nullptr, "GetPlayer", nullptr, nullptr, sizeof(ELMovieControlBase_eventGetPlayer_Parms), Z_Construct_UFunction_UELMovieControlBase_GetPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_GetPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMovieControlBase_GetPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_GetPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMovieControlBase_GetPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMovieControlBase_GetPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMovieControlBase_IsAlphaMovie_Statics
	{
		struct ELMovieControlBase_eventIsAlphaMovie_Parms
		{
			int32 MovieSlotID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MovieSlotID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMovieControlBase_IsAlphaMovie_Statics::NewProp_MovieSlotID = { "MovieSlotID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieControlBase_eventIsAlphaMovie_Parms, MovieSlotID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMovieControlBase_IsAlphaMovie_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMovieControlBase_eventIsAlphaMovie_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMovieControlBase_IsAlphaMovie_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieControlBase_eventIsAlphaMovie_Parms), &Z_Construct_UFunction_UELMovieControlBase_IsAlphaMovie_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMovieControlBase_IsAlphaMovie_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_IsAlphaMovie_Statics::NewProp_MovieSlotID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_IsAlphaMovie_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovieControlBase_IsAlphaMovie_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovieControlBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMovieControlBase_IsAlphaMovie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMovieControlBase, nullptr, "IsAlphaMovie", nullptr, nullptr, sizeof(ELMovieControlBase_eventIsAlphaMovie_Parms), Z_Construct_UFunction_UELMovieControlBase_IsAlphaMovie_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_IsAlphaMovie_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMovieControlBase_IsAlphaMovie_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_IsAlphaMovie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMovieControlBase_IsAlphaMovie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMovieControlBase_IsAlphaMovie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMovieControlBase_IsPreparedAll_Statics
	{
		struct ELMovieControlBase_eventIsPreparedAll_Parms
		{
			TArray<int32> Excludes;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Excludes_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Excludes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMovieControlBase_IsPreparedAll_Statics::NewProp_Excludes_Inner = { "Excludes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELMovieControlBase_IsPreparedAll_Statics::NewProp_Excludes = { "Excludes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieControlBase_eventIsPreparedAll_Parms, Excludes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMovieControlBase_IsPreparedAll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMovieControlBase_eventIsPreparedAll_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMovieControlBase_IsPreparedAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieControlBase_eventIsPreparedAll_Parms), &Z_Construct_UFunction_UELMovieControlBase_IsPreparedAll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMovieControlBase_IsPreparedAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_IsPreparedAll_Statics::NewProp_Excludes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_IsPreparedAll_Statics::NewProp_Excludes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_IsPreparedAll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovieControlBase_IsPreparedAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovieControlBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMovieControlBase_IsPreparedAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMovieControlBase, nullptr, "IsPreparedAll", nullptr, nullptr, sizeof(ELMovieControlBase_eventIsPreparedAll_Parms), Z_Construct_UFunction_UELMovieControlBase_IsPreparedAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_IsPreparedAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMovieControlBase_IsPreparedAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_IsPreparedAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMovieControlBase_IsPreparedAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMovieControlBase_IsPreparedAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMovieControlBase_PlayAll_Statics
	{
		struct ELMovieControlBase_eventPlayAll_Parms
		{
			TArray<int32> Excludes;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Excludes_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Excludes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMovieControlBase_PlayAll_Statics::NewProp_Excludes_Inner = { "Excludes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELMovieControlBase_PlayAll_Statics::NewProp_Excludes = { "Excludes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieControlBase_eventPlayAll_Parms, Excludes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMovieControlBase_PlayAll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMovieControlBase_eventPlayAll_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMovieControlBase_PlayAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieControlBase_eventPlayAll_Parms), &Z_Construct_UFunction_UELMovieControlBase_PlayAll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMovieControlBase_PlayAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_PlayAll_Statics::NewProp_Excludes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_PlayAll_Statics::NewProp_Excludes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_PlayAll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovieControlBase_PlayAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovieControlBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMovieControlBase_PlayAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMovieControlBase, nullptr, "PlayAll", nullptr, nullptr, sizeof(ELMovieControlBase_eventPlayAll_Parms), Z_Construct_UFunction_UELMovieControlBase_PlayAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_PlayAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMovieControlBase_PlayAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_PlayAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMovieControlBase_PlayAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMovieControlBase_PlayAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMovieControlBase_ResumeAll_Statics
	{
		struct ELMovieControlBase_eventResumeAll_Parms
		{
			TArray<int32> Excludes;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Excludes_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Excludes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMovieControlBase_ResumeAll_Statics::NewProp_Excludes_Inner = { "Excludes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELMovieControlBase_ResumeAll_Statics::NewProp_Excludes = { "Excludes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieControlBase_eventResumeAll_Parms, Excludes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMovieControlBase_ResumeAll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMovieControlBase_eventResumeAll_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMovieControlBase_ResumeAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieControlBase_eventResumeAll_Parms), &Z_Construct_UFunction_UELMovieControlBase_ResumeAll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMovieControlBase_ResumeAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_ResumeAll_Statics::NewProp_Excludes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_ResumeAll_Statics::NewProp_Excludes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_ResumeAll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovieControlBase_ResumeAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovieControlBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMovieControlBase_ResumeAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMovieControlBase, nullptr, "ResumeAll", nullptr, nullptr, sizeof(ELMovieControlBase_eventResumeAll_Parms), Z_Construct_UFunction_UELMovieControlBase_ResumeAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_ResumeAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMovieControlBase_ResumeAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_ResumeAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMovieControlBase_ResumeAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMovieControlBase_ResumeAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMovieControlBase_SeekAll_Statics
	{
		struct ELMovieControlBase_eventSeekAll_Parms
		{
			float Time;
			TArray<int32> Excludes;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Excludes_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Excludes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELMovieControlBase_SeekAll_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieControlBase_eventSeekAll_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMovieControlBase_SeekAll_Statics::NewProp_Excludes_Inner = { "Excludes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELMovieControlBase_SeekAll_Statics::NewProp_Excludes = { "Excludes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieControlBase_eventSeekAll_Parms, Excludes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMovieControlBase_SeekAll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMovieControlBase_eventSeekAll_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMovieControlBase_SeekAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieControlBase_eventSeekAll_Parms), &Z_Construct_UFunction_UELMovieControlBase_SeekAll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMovieControlBase_SeekAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_SeekAll_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_SeekAll_Statics::NewProp_Excludes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_SeekAll_Statics::NewProp_Excludes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_SeekAll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovieControlBase_SeekAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovieControlBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMovieControlBase_SeekAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMovieControlBase, nullptr, "SeekAll", nullptr, nullptr, sizeof(ELMovieControlBase_eventSeekAll_Parms), Z_Construct_UFunction_UELMovieControlBase_SeekAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_SeekAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMovieControlBase_SeekAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_SeekAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMovieControlBase_SeekAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMovieControlBase_SeekAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMovieControlBase_SetTextureList_Statics
	{
		struct ELMovieControlBase_eventSetTextureList_Parms
		{
			TMap<int32,UTexture*> Textures;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Textures_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Textures_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Textures;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMovieControlBase_SetTextureList_Statics::NewProp_Textures_ValueProp = { "Textures", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMovieControlBase_SetTextureList_Statics::NewProp_Textures_Key_KeyProp = { "Textures_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UELMovieControlBase_SetTextureList_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieControlBase_eventSetTextureList_Parms, Textures), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMovieControlBase_SetTextureList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMovieControlBase_eventSetTextureList_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMovieControlBase_SetTextureList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieControlBase_eventSetTextureList_Parms), &Z_Construct_UFunction_UELMovieControlBase_SetTextureList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMovieControlBase_SetTextureList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_SetTextureList_Statics::NewProp_Textures_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_SetTextureList_Statics::NewProp_Textures_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_SetTextureList_Statics::NewProp_Textures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_SetTextureList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovieControlBase_SetTextureList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovieControlBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMovieControlBase_SetTextureList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMovieControlBase, nullptr, "SetTextureList", nullptr, nullptr, sizeof(ELMovieControlBase_eventSetTextureList_Parms), Z_Construct_UFunction_UELMovieControlBase_SetTextureList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_SetTextureList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMovieControlBase_SetTextureList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_SetTextureList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMovieControlBase_SetTextureList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMovieControlBase_SetTextureList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMovieControlBase_SetTexturePathList_Statics
	{
		struct ELMovieControlBase_eventSetTexturePathList_Parms
		{
			TMap<int32,FString> TexturePaths;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TexturePaths_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TexturePaths_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TexturePaths;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELMovieControlBase_SetTexturePathList_Statics::NewProp_TexturePaths_ValueProp = { "TexturePaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMovieControlBase_SetTexturePathList_Statics::NewProp_TexturePaths_Key_KeyProp = { "TexturePaths_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UELMovieControlBase_SetTexturePathList_Statics::NewProp_TexturePaths = { "TexturePaths", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieControlBase_eventSetTexturePathList_Parms, TexturePaths), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMovieControlBase_SetTexturePathList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMovieControlBase_eventSetTexturePathList_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMovieControlBase_SetTexturePathList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieControlBase_eventSetTexturePathList_Parms), &Z_Construct_UFunction_UELMovieControlBase_SetTexturePathList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMovieControlBase_SetTexturePathList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_SetTexturePathList_Statics::NewProp_TexturePaths_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_SetTexturePathList_Statics::NewProp_TexturePaths_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_SetTexturePathList_Statics::NewProp_TexturePaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_SetTexturePathList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovieControlBase_SetTexturePathList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovieControlBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMovieControlBase_SetTexturePathList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMovieControlBase, nullptr, "SetTexturePathList", nullptr, nullptr, sizeof(ELMovieControlBase_eventSetTexturePathList_Parms), Z_Construct_UFunction_UELMovieControlBase_SetTexturePathList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_SetTexturePathList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMovieControlBase_SetTexturePathList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_SetTexturePathList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMovieControlBase_SetTexturePathList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMovieControlBase_SetTexturePathList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMovieControlBase_Setup_Statics
	{
		struct ELMovieControlBase_eventSetup_Parms
		{
			UELMoviePlayerBase* Player;
			int32 SlotNo;
			bool IsLooping;
			bool DropOldMovie;
			EMovieType MovieType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotNo;
		static void NewProp_IsLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLooping;
		static void NewProp_DropOldMovie_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DropOldMovie;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovieType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovieType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMovieControlBase_Setup_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieControlBase_eventSetup_Parms, Player), Z_Construct_UClass_UELMoviePlayerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMovieControlBase_Setup_Statics::NewProp_SlotNo = { "SlotNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieControlBase_eventSetup_Parms, SlotNo), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMovieControlBase_Setup_Statics::NewProp_IsLooping_SetBit(void* Obj)
	{
		((ELMovieControlBase_eventSetup_Parms*)Obj)->IsLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMovieControlBase_Setup_Statics::NewProp_IsLooping = { "IsLooping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieControlBase_eventSetup_Parms), &Z_Construct_UFunction_UELMovieControlBase_Setup_Statics::NewProp_IsLooping_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMovieControlBase_Setup_Statics::NewProp_DropOldMovie_SetBit(void* Obj)
	{
		((ELMovieControlBase_eventSetup_Parms*)Obj)->DropOldMovie = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMovieControlBase_Setup_Statics::NewProp_DropOldMovie = { "DropOldMovie", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieControlBase_eventSetup_Parms), &Z_Construct_UFunction_UELMovieControlBase_Setup_Statics::NewProp_DropOldMovie_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELMovieControlBase_Setup_Statics::NewProp_MovieType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELMovieControlBase_Setup_Statics::NewProp_MovieType = { "MovieType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieControlBase_eventSetup_Parms, MovieType), Z_Construct_UEnum_ABP_200508_EMovieType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMovieControlBase_Setup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMovieControlBase_eventSetup_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMovieControlBase_Setup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieControlBase_eventSetup_Parms), &Z_Construct_UFunction_UELMovieControlBase_Setup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMovieControlBase_Setup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_Setup_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_Setup_Statics::NewProp_SlotNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_Setup_Statics::NewProp_IsLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_Setup_Statics::NewProp_DropOldMovie,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_Setup_Statics::NewProp_MovieType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_Setup_Statics::NewProp_MovieType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_Setup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovieControlBase_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovieControlBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMovieControlBase_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMovieControlBase, nullptr, "Setup", nullptr, nullptr, sizeof(ELMovieControlBase_eventSetup_Parms), Z_Construct_UFunction_UELMovieControlBase_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_Setup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMovieControlBase_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMovieControlBase_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMovieControlBase_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMovieControlBase_SetupWithTexture_Statics
	{
		struct ELMovieControlBase_eventSetupWithTexture_Parms
		{
			UELMoviePlayerBase* Player;
			int32 SlotNo;
			UTexture* Texture;
			bool IsLooping;
			bool DropOldMovie;
			EMovieType MovieType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotNo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static void NewProp_IsLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLooping;
		static void NewProp_DropOldMovie_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DropOldMovie;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovieType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovieType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMovieControlBase_SetupWithTexture_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieControlBase_eventSetupWithTexture_Parms, Player), Z_Construct_UClass_UELMoviePlayerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMovieControlBase_SetupWithTexture_Statics::NewProp_SlotNo = { "SlotNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieControlBase_eventSetupWithTexture_Parms, SlotNo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMovieControlBase_SetupWithTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieControlBase_eventSetupWithTexture_Parms, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMovieControlBase_SetupWithTexture_Statics::NewProp_IsLooping_SetBit(void* Obj)
	{
		((ELMovieControlBase_eventSetupWithTexture_Parms*)Obj)->IsLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMovieControlBase_SetupWithTexture_Statics::NewProp_IsLooping = { "IsLooping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieControlBase_eventSetupWithTexture_Parms), &Z_Construct_UFunction_UELMovieControlBase_SetupWithTexture_Statics::NewProp_IsLooping_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMovieControlBase_SetupWithTexture_Statics::NewProp_DropOldMovie_SetBit(void* Obj)
	{
		((ELMovieControlBase_eventSetupWithTexture_Parms*)Obj)->DropOldMovie = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMovieControlBase_SetupWithTexture_Statics::NewProp_DropOldMovie = { "DropOldMovie", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieControlBase_eventSetupWithTexture_Parms), &Z_Construct_UFunction_UELMovieControlBase_SetupWithTexture_Statics::NewProp_DropOldMovie_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELMovieControlBase_SetupWithTexture_Statics::NewProp_MovieType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELMovieControlBase_SetupWithTexture_Statics::NewProp_MovieType = { "MovieType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieControlBase_eventSetupWithTexture_Parms, MovieType), Z_Construct_UEnum_ABP_200508_EMovieType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMovieControlBase_SetupWithTexture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMovieControlBase_eventSetupWithTexture_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMovieControlBase_SetupWithTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieControlBase_eventSetupWithTexture_Parms), &Z_Construct_UFunction_UELMovieControlBase_SetupWithTexture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMovieControlBase_SetupWithTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_SetupWithTexture_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_SetupWithTexture_Statics::NewProp_SlotNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_SetupWithTexture_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_SetupWithTexture_Statics::NewProp_IsLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_SetupWithTexture_Statics::NewProp_DropOldMovie,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_SetupWithTexture_Statics::NewProp_MovieType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_SetupWithTexture_Statics::NewProp_MovieType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_SetupWithTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovieControlBase_SetupWithTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovieControlBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMovieControlBase_SetupWithTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMovieControlBase, nullptr, "SetupWithTexture", nullptr, nullptr, sizeof(ELMovieControlBase_eventSetupWithTexture_Parms), Z_Construct_UFunction_UELMovieControlBase_SetupWithTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_SetupWithTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMovieControlBase_SetupWithTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_SetupWithTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMovieControlBase_SetupWithTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMovieControlBase_SetupWithTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMovieControlBase_SetupWithTexturePath_Statics
	{
		struct ELMovieControlBase_eventSetupWithTexturePath_Parms
		{
			UELMoviePlayerBase* Player;
			int32 SlotNo;
			FString TexturePath;
			bool IsLooping;
			bool DropOldMovie;
			EMovieType MovieType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TexturePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TexturePath;
		static void NewProp_IsLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLooping;
		static void NewProp_DropOldMovie_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DropOldMovie;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovieType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovieType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMovieControlBase_SetupWithTexturePath_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieControlBase_eventSetupWithTexturePath_Parms, Player), Z_Construct_UClass_UELMoviePlayerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMovieControlBase_SetupWithTexturePath_Statics::NewProp_SlotNo = { "SlotNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieControlBase_eventSetupWithTexturePath_Parms, SlotNo), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovieControlBase_SetupWithTexturePath_Statics::NewProp_TexturePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELMovieControlBase_SetupWithTexturePath_Statics::NewProp_TexturePath = { "TexturePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieControlBase_eventSetupWithTexturePath_Parms, TexturePath), METADATA_PARAMS(Z_Construct_UFunction_UELMovieControlBase_SetupWithTexturePath_Statics::NewProp_TexturePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_SetupWithTexturePath_Statics::NewProp_TexturePath_MetaData)) };
	void Z_Construct_UFunction_UELMovieControlBase_SetupWithTexturePath_Statics::NewProp_IsLooping_SetBit(void* Obj)
	{
		((ELMovieControlBase_eventSetupWithTexturePath_Parms*)Obj)->IsLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMovieControlBase_SetupWithTexturePath_Statics::NewProp_IsLooping = { "IsLooping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieControlBase_eventSetupWithTexturePath_Parms), &Z_Construct_UFunction_UELMovieControlBase_SetupWithTexturePath_Statics::NewProp_IsLooping_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMovieControlBase_SetupWithTexturePath_Statics::NewProp_DropOldMovie_SetBit(void* Obj)
	{
		((ELMovieControlBase_eventSetupWithTexturePath_Parms*)Obj)->DropOldMovie = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMovieControlBase_SetupWithTexturePath_Statics::NewProp_DropOldMovie = { "DropOldMovie", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieControlBase_eventSetupWithTexturePath_Parms), &Z_Construct_UFunction_UELMovieControlBase_SetupWithTexturePath_Statics::NewProp_DropOldMovie_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELMovieControlBase_SetupWithTexturePath_Statics::NewProp_MovieType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELMovieControlBase_SetupWithTexturePath_Statics::NewProp_MovieType = { "MovieType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieControlBase_eventSetupWithTexturePath_Parms, MovieType), Z_Construct_UEnum_ABP_200508_EMovieType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMovieControlBase_SetupWithTexturePath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMovieControlBase_eventSetupWithTexturePath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMovieControlBase_SetupWithTexturePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieControlBase_eventSetupWithTexturePath_Parms), &Z_Construct_UFunction_UELMovieControlBase_SetupWithTexturePath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMovieControlBase_SetupWithTexturePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_SetupWithTexturePath_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_SetupWithTexturePath_Statics::NewProp_SlotNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_SetupWithTexturePath_Statics::NewProp_TexturePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_SetupWithTexturePath_Statics::NewProp_IsLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_SetupWithTexturePath_Statics::NewProp_DropOldMovie,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_SetupWithTexturePath_Statics::NewProp_MovieType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_SetupWithTexturePath_Statics::NewProp_MovieType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_SetupWithTexturePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovieControlBase_SetupWithTexturePath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovieControlBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMovieControlBase_SetupWithTexturePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMovieControlBase, nullptr, "SetupWithTexturePath", nullptr, nullptr, sizeof(ELMovieControlBase_eventSetupWithTexturePath_Parms), Z_Construct_UFunction_UELMovieControlBase_SetupWithTexturePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_SetupWithTexturePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMovieControlBase_SetupWithTexturePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_SetupWithTexturePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMovieControlBase_SetupWithTexturePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMovieControlBase_SetupWithTexturePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMovieControlBase_StartPrepare_Statics
	{
		struct ELMovieControlBase_eventStartPrepare_Parms
		{
			int32 MovieSlotID;
			FName MovieDataID;
			bool Loop;
			UELMoviePlayerBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MovieSlotID;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MovieDataID;
		static void NewProp_Loop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Loop;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMovieControlBase_StartPrepare_Statics::NewProp_MovieSlotID = { "MovieSlotID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieControlBase_eventStartPrepare_Parms, MovieSlotID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELMovieControlBase_StartPrepare_Statics::NewProp_MovieDataID = { "MovieDataID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieControlBase_eventStartPrepare_Parms, MovieDataID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMovieControlBase_StartPrepare_Statics::NewProp_Loop_SetBit(void* Obj)
	{
		((ELMovieControlBase_eventStartPrepare_Parms*)Obj)->Loop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMovieControlBase_StartPrepare_Statics::NewProp_Loop = { "Loop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieControlBase_eventStartPrepare_Parms), &Z_Construct_UFunction_UELMovieControlBase_StartPrepare_Statics::NewProp_Loop_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMovieControlBase_StartPrepare_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieControlBase_eventStartPrepare_Parms, ReturnValue), Z_Construct_UClass_UELMoviePlayerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMovieControlBase_StartPrepare_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_StartPrepare_Statics::NewProp_MovieSlotID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_StartPrepare_Statics::NewProp_MovieDataID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_StartPrepare_Statics::NewProp_Loop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_StartPrepare_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovieControlBase_StartPrepare_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovieControlBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMovieControlBase_StartPrepare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMovieControlBase, nullptr, "StartPrepare", nullptr, nullptr, sizeof(ELMovieControlBase_eventStartPrepare_Parms), Z_Construct_UFunction_UELMovieControlBase_StartPrepare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_StartPrepare_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMovieControlBase_StartPrepare_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_StartPrepare_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMovieControlBase_StartPrepare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMovieControlBase_StartPrepare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMovieControlBase_StopAll_Statics
	{
		struct ELMovieControlBase_eventStopAll_Parms
		{
			TArray<int32> Excludes;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Excludes_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Excludes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMovieControlBase_StopAll_Statics::NewProp_Excludes_Inner = { "Excludes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELMovieControlBase_StopAll_Statics::NewProp_Excludes = { "Excludes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieControlBase_eventStopAll_Parms, Excludes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMovieControlBase_StopAll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMovieControlBase_eventStopAll_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMovieControlBase_StopAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieControlBase_eventStopAll_Parms), &Z_Construct_UFunction_UELMovieControlBase_StopAll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMovieControlBase_StopAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_StopAll_Statics::NewProp_Excludes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_StopAll_Statics::NewProp_Excludes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_StopAll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovieControlBase_StopAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovieControlBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMovieControlBase_StopAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMovieControlBase, nullptr, "StopAll", nullptr, nullptr, sizeof(ELMovieControlBase_eventStopAll_Parms), Z_Construct_UFunction_UELMovieControlBase_StopAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_StopAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMovieControlBase_StopAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_StopAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMovieControlBase_StopAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMovieControlBase_StopAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMovieControlBase_SuspendAll_Statics
	{
		struct ELMovieControlBase_eventSuspendAll_Parms
		{
			TArray<int32> Excludes;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Excludes_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Excludes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMovieControlBase_SuspendAll_Statics::NewProp_Excludes_Inner = { "Excludes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELMovieControlBase_SuspendAll_Statics::NewProp_Excludes = { "Excludes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovieControlBase_eventSuspendAll_Parms, Excludes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMovieControlBase_SuspendAll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMovieControlBase_eventSuspendAll_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMovieControlBase_SuspendAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovieControlBase_eventSuspendAll_Parms), &Z_Construct_UFunction_UELMovieControlBase_SuspendAll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMovieControlBase_SuspendAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_SuspendAll_Statics::NewProp_Excludes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_SuspendAll_Statics::NewProp_Excludes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovieControlBase_SuspendAll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovieControlBase_SuspendAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovieControlBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMovieControlBase_SuspendAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMovieControlBase, nullptr, "SuspendAll", nullptr, nullptr, sizeof(ELMovieControlBase_eventSuspendAll_Parms), Z_Construct_UFunction_UELMovieControlBase_SuspendAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_SuspendAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMovieControlBase_SuspendAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovieControlBase_SuspendAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMovieControlBase_SuspendAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMovieControlBase_SuspendAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELMovieControlBase_NoRegister()
	{
		return UELMovieControlBase::StaticClass();
	}
	struct Z_Construct_UClass_UELMovieControlBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_cPlayers_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_cPlayers_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cPlayers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_cTextures_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_cTextures_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cTextures_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cTextures;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_cTexturePaths_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_cTexturePaths_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cTexturePaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cTexturePaths;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELMovieControlBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELMovieControlBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELMovieControlBase_ChangeMovieResource, "ChangeMovieResource" }, // 2484926740
		{ &Z_Construct_UFunction_UELMovieControlBase_CreateMovieControl, "CreateMovieControl" }, // 2066602898
		{ &Z_Construct_UFunction_UELMovieControlBase_Destroy, "Destroy" }, // 1375063709
		{ &Z_Construct_UFunction_UELMovieControlBase_DestroyAll, "DestroyAll" }, // 15989446
		{ &Z_Construct_UFunction_UELMovieControlBase_GetMovieFrames, "GetMovieFrames" }, // 1314007242
		{ &Z_Construct_UFunction_UELMovieControlBase_GetMoviePath, "GetMoviePath" }, // 3153205921
		{ &Z_Construct_UFunction_UELMovieControlBase_GetPlayer, "GetPlayer" }, // 3704241436
		{ &Z_Construct_UFunction_UELMovieControlBase_IsAlphaMovie, "IsAlphaMovie" }, // 4204063099
		{ &Z_Construct_UFunction_UELMovieControlBase_IsPreparedAll, "IsPreparedAll" }, // 2289230411
		{ &Z_Construct_UFunction_UELMovieControlBase_PlayAll, "PlayAll" }, // 1698484800
		{ &Z_Construct_UFunction_UELMovieControlBase_ResumeAll, "ResumeAll" }, // 2324540697
		{ &Z_Construct_UFunction_UELMovieControlBase_SeekAll, "SeekAll" }, // 1512046154
		{ &Z_Construct_UFunction_UELMovieControlBase_SetTextureList, "SetTextureList" }, // 1461659507
		{ &Z_Construct_UFunction_UELMovieControlBase_SetTexturePathList, "SetTexturePathList" }, // 2856986209
		{ &Z_Construct_UFunction_UELMovieControlBase_Setup, "Setup" }, // 453850864
		{ &Z_Construct_UFunction_UELMovieControlBase_SetupWithTexture, "SetupWithTexture" }, // 656904649
		{ &Z_Construct_UFunction_UELMovieControlBase_SetupWithTexturePath, "SetupWithTexturePath" }, // 3008610405
		{ &Z_Construct_UFunction_UELMovieControlBase_StartPrepare, "StartPrepare" }, // 1312488895
		{ &Z_Construct_UFunction_UELMovieControlBase_StopAll, "StopAll" }, // 812242959
		{ &Z_Construct_UFunction_UELMovieControlBase_SuspendAll, "SuspendAll" }, // 3406133502
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMovieControlBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELMovieControlBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELMovieControlBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELMovieControlBase_Statics::NewProp_m_cPlayers_ValueProp = { "m_cPlayers", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UELMoviePlayerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELMovieControlBase_Statics::NewProp_m_cPlayers_Key_KeyProp = { "m_cPlayers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMovieControlBase_Statics::NewProp_m_cPlayers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovieControlBase" },
		{ "ModuleRelativePath", "Public/ELMovieControlBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELMovieControlBase_Statics::NewProp_m_cPlayers = { "m_cPlayers", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELMovieControlBase, m_cPlayers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELMovieControlBase_Statics::NewProp_m_cPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMovieControlBase_Statics::NewProp_m_cPlayers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELMovieControlBase_Statics::NewProp_m_cTextures_ValueProp = { "m_cTextures", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELMovieControlBase_Statics::NewProp_m_cTextures_Key_KeyProp = { "m_cTextures_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMovieControlBase_Statics::NewProp_m_cTextures_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovieControlBase" },
		{ "ModuleRelativePath", "Public/ELMovieControlBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELMovieControlBase_Statics::NewProp_m_cTextures = { "m_cTextures", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELMovieControlBase, m_cTextures), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELMovieControlBase_Statics::NewProp_m_cTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMovieControlBase_Statics::NewProp_m_cTextures_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELMovieControlBase_Statics::NewProp_m_cTexturePaths_ValueProp = { "m_cTexturePaths", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELMovieControlBase_Statics::NewProp_m_cTexturePaths_Key_KeyProp = { "m_cTexturePaths_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMovieControlBase_Statics::NewProp_m_cTexturePaths_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovieControlBase" },
		{ "ModuleRelativePath", "Public/ELMovieControlBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELMovieControlBase_Statics::NewProp_m_cTexturePaths = { "m_cTexturePaths", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELMovieControlBase, m_cTexturePaths), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELMovieControlBase_Statics::NewProp_m_cTexturePaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMovieControlBase_Statics::NewProp_m_cTexturePaths_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELMovieControlBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMovieControlBase_Statics::NewProp_m_cPlayers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMovieControlBase_Statics::NewProp_m_cPlayers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMovieControlBase_Statics::NewProp_m_cPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMovieControlBase_Statics::NewProp_m_cTextures_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMovieControlBase_Statics::NewProp_m_cTextures_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMovieControlBase_Statics::NewProp_m_cTextures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMovieControlBase_Statics::NewProp_m_cTexturePaths_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMovieControlBase_Statics::NewProp_m_cTexturePaths_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMovieControlBase_Statics::NewProp_m_cTexturePaths,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELMovieControlBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELMovieControlBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELMovieControlBase_Statics::ClassParams = {
		&UELMovieControlBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELMovieControlBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELMovieControlBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELMovieControlBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELMovieControlBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELMovieControlBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELMovieControlBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELMovieControlBase, 335816034);
	template<> ABP_200508_API UClass* StaticClass<UELMovieControlBase>()
	{
		return UELMovieControlBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELMovieControlBase(Z_Construct_UClass_UELMovieControlBase, &UELMovieControlBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELMovieControlBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELMovieControlBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
