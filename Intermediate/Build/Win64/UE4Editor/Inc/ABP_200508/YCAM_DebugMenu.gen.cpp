// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/YCAM_DebugMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYCAM_DebugMenu() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UYCAM_DebugMenu_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UYCAM_DebugMenu();
	ABP_200508_API UClass* Z_Construct_UClass_UYCreate_DebugMenuBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UYCAM_DebugMenu::execConvertTexture2DToBuffer)
	{
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UTexture2D>,Z_Param_Out_Texture);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_OutBuffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConvertTexture2DToBuffer(Z_Param_Out_Texture,Z_Param_Out_OutBuffer);
		P_NATIVE_END;
	}
	static FName NAME_UYCAM_DebugMenu_ApplyPreviewIdx = FName(TEXT("ApplyPreviewIdx"));
	void UYCAM_DebugMenu::ApplyPreviewIdx()
	{
		ProcessEvent(FindFunctionChecked(NAME_UYCAM_DebugMenu_ApplyPreviewIdx),NULL);
	}
	static FName NAME_UYCAM_DebugMenu_EnableCAMMode = FName(TEXT("EnableCAMMode"));
	bool UYCAM_DebugMenu::EnableCAMMode()
	{
		YCAM_DebugMenu_eventEnableCAMMode_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UYCAM_DebugMenu_EnableCAMMode),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UYCAM_DebugMenu_EnableCanStartPreview = FName(TEXT("EnableCanStartPreview"));
	bool UYCAM_DebugMenu::EnableCanStartPreview()
	{
		YCAM_DebugMenu_eventEnableCanStartPreview_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UYCAM_DebugMenu_EnableCanStartPreview),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UYCAM_DebugMenu_EnablePlayingPreview = FName(TEXT("EnablePlayingPreview"));
	bool UYCAM_DebugMenu::EnablePlayingPreview()
	{
		YCAM_DebugMenu_eventEnablePlayingPreview_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UYCAM_DebugMenu_EnablePlayingPreview),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UYCAM_DebugMenu_PushStartAllTest = FName(TEXT("PushStartAllTest"));
	void UYCAM_DebugMenu::PushStartAllTest()
	{
		ProcessEvent(FindFunctionChecked(NAME_UYCAM_DebugMenu_PushStartAllTest),NULL);
	}
	static FName NAME_UYCAM_DebugMenu_PushStartDistanceTest = FName(TEXT("PushStartDistanceTest"));
	void UYCAM_DebugMenu::PushStartDistanceTest()
	{
		ProcessEvent(FindFunctionChecked(NAME_UYCAM_DebugMenu_PushStartDistanceTest),NULL);
	}
	static FName NAME_UYCAM_DebugMenu_PushStartDivingDistanceTest = FName(TEXT("PushStartDivingDistanceTest"));
	void UYCAM_DebugMenu::PushStartDivingDistanceTest()
	{
		ProcessEvent(FindFunctionChecked(NAME_UYCAM_DebugMenu_PushStartDivingDistanceTest),NULL);
	}
	static FName NAME_UYCAM_DebugMenu_PushStartPreview = FName(TEXT("PushStartPreview"));
	void UYCAM_DebugMenu::PushStartPreview()
	{
		ProcessEvent(FindFunctionChecked(NAME_UYCAM_DebugMenu_PushStartPreview),NULL);
	}
	static FName NAME_UYCAM_DebugMenu_PushStartStrikeDistanceTest = FName(TEXT("PushStartStrikeDistanceTest"));
	void UYCAM_DebugMenu::PushStartStrikeDistanceTest()
	{
		ProcessEvent(FindFunctionChecked(NAME_UYCAM_DebugMenu_PushStartStrikeDistanceTest),NULL);
	}
	static FName NAME_UYCAM_DebugMenu_PushStopPreview = FName(TEXT("PushStopPreview"));
	void UYCAM_DebugMenu::PushStopPreview()
	{
		ProcessEvent(FindFunctionChecked(NAME_UYCAM_DebugMenu_PushStopPreview),NULL);
	}
	static FName NAME_UYCAM_DebugMenu_ReleaseActor = FName(TEXT("ReleaseActor"));
	void UYCAM_DebugMenu::ReleaseActor()
	{
		ProcessEvent(FindFunctionChecked(NAME_UYCAM_DebugMenu_ReleaseActor),NULL);
	}
	static FName NAME_UYCAM_DebugMenu_UpdateIsDeleteDuplicateCategory = FName(TEXT("UpdateIsDeleteDuplicateCategory"));
	void UYCAM_DebugMenu::UpdateIsDeleteDuplicateCategory()
	{
		ProcessEvent(FindFunctionChecked(NAME_UYCAM_DebugMenu_UpdateIsDeleteDuplicateCategory),NULL);
	}
	static FName NAME_UYCAM_DebugMenu_UpdateIsEndless = FName(TEXT("UpdateIsEndless"));
	void UYCAM_DebugMenu::UpdateIsEndless()
	{
		ProcessEvent(FindFunctionChecked(NAME_UYCAM_DebugMenu_UpdateIsEndless),NULL);
	}
	static FName NAME_UYCAM_DebugMenu_UpdateIsNotThreadTickAsyncPlayer = FName(TEXT("UpdateIsNotThreadTickAsyncPlayer"));
	void UYCAM_DebugMenu::UpdateIsNotThreadTickAsyncPlayer()
	{
		ProcessEvent(FindFunctionChecked(NAME_UYCAM_DebugMenu_UpdateIsNotThreadTickAsyncPlayer),NULL);
	}
	static FName NAME_UYCAM_DebugMenu_UpdateIsScreenShot = FName(TEXT("UpdateIsScreenShot"));
	void UYCAM_DebugMenu::UpdateIsScreenShot()
	{
		ProcessEvent(FindFunctionChecked(NAME_UYCAM_DebugMenu_UpdateIsScreenShot),NULL);
	}
	void UYCAM_DebugMenu::StaticRegisterNativesUYCAM_DebugMenu()
	{
		UClass* Class = UYCAM_DebugMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertTexture2DToBuffer", &UYCAM_DebugMenu::execConvertTexture2DToBuffer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYCAM_DebugMenu_ApplyPreviewIdx_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAM_DebugMenu_ApplyPreviewIdx_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYCAM_DebugMenu_ApplyPreviewIdx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYCAM_DebugMenu, nullptr, "ApplyPreviewIdx", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYCAM_DebugMenu_ApplyPreviewIdx_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_DebugMenu_ApplyPreviewIdx_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYCAM_DebugMenu_ApplyPreviewIdx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYCAM_DebugMenu_ApplyPreviewIdx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYCAM_DebugMenu_ConvertTexture2DToBuffer_Statics
	{
		struct YCAM_DebugMenu_eventConvertTexture2DToBuffer_Parms
		{
			TSoftObjectPtr<UTexture2D> Texture;
			TArray<uint8> OutBuffer;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutBuffer_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutBuffer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAM_DebugMenu_ConvertTexture2DToBuffer_Statics::NewProp_Texture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UYCAM_DebugMenu_ConvertTexture2DToBuffer_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000008000182, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YCAM_DebugMenu_eventConvertTexture2DToBuffer_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UYCAM_DebugMenu_ConvertTexture2DToBuffer_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_DebugMenu_ConvertTexture2DToBuffer_Statics::NewProp_Texture_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYCAM_DebugMenu_ConvertTexture2DToBuffer_Statics::NewProp_OutBuffer_Inner = { "OutBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UYCAM_DebugMenu_ConvertTexture2DToBuffer_Statics::NewProp_OutBuffer = { "OutBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YCAM_DebugMenu_eventConvertTexture2DToBuffer_Parms, OutBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYCAM_DebugMenu_ConvertTexture2DToBuffer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYCAM_DebugMenu_ConvertTexture2DToBuffer_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYCAM_DebugMenu_ConvertTexture2DToBuffer_Statics::NewProp_OutBuffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYCAM_DebugMenu_ConvertTexture2DToBuffer_Statics::NewProp_OutBuffer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAM_DebugMenu_ConvertTexture2DToBuffer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYCAM_DebugMenu_ConvertTexture2DToBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYCAM_DebugMenu, nullptr, "ConvertTexture2DToBuffer", nullptr, nullptr, sizeof(YCAM_DebugMenu_eventConvertTexture2DToBuffer_Parms), Z_Construct_UFunction_UYCAM_DebugMenu_ConvertTexture2DToBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_DebugMenu_ConvertTexture2DToBuffer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYCAM_DebugMenu_ConvertTexture2DToBuffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_DebugMenu_ConvertTexture2DToBuffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYCAM_DebugMenu_ConvertTexture2DToBuffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYCAM_DebugMenu_ConvertTexture2DToBuffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYCAM_DebugMenu_EnableCAMMode_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYCAM_DebugMenu_EnableCAMMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YCAM_DebugMenu_eventEnableCAMMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYCAM_DebugMenu_EnableCAMMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YCAM_DebugMenu_eventEnableCAMMode_Parms), &Z_Construct_UFunction_UYCAM_DebugMenu_EnableCAMMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYCAM_DebugMenu_EnableCAMMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYCAM_DebugMenu_EnableCAMMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAM_DebugMenu_EnableCAMMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYCAM_DebugMenu_EnableCAMMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYCAM_DebugMenu, nullptr, "EnableCAMMode", nullptr, nullptr, sizeof(YCAM_DebugMenu_eventEnableCAMMode_Parms), Z_Construct_UFunction_UYCAM_DebugMenu_EnableCAMMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_DebugMenu_EnableCAMMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYCAM_DebugMenu_EnableCAMMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_DebugMenu_EnableCAMMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYCAM_DebugMenu_EnableCAMMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYCAM_DebugMenu_EnableCAMMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYCAM_DebugMenu_EnableCanStartPreview_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYCAM_DebugMenu_EnableCanStartPreview_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YCAM_DebugMenu_eventEnableCanStartPreview_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYCAM_DebugMenu_EnableCanStartPreview_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YCAM_DebugMenu_eventEnableCanStartPreview_Parms), &Z_Construct_UFunction_UYCAM_DebugMenu_EnableCanStartPreview_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYCAM_DebugMenu_EnableCanStartPreview_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYCAM_DebugMenu_EnableCanStartPreview_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAM_DebugMenu_EnableCanStartPreview_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYCAM_DebugMenu_EnableCanStartPreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYCAM_DebugMenu, nullptr, "EnableCanStartPreview", nullptr, nullptr, sizeof(YCAM_DebugMenu_eventEnableCanStartPreview_Parms), Z_Construct_UFunction_UYCAM_DebugMenu_EnableCanStartPreview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_DebugMenu_EnableCanStartPreview_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYCAM_DebugMenu_EnableCanStartPreview_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_DebugMenu_EnableCanStartPreview_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYCAM_DebugMenu_EnableCanStartPreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYCAM_DebugMenu_EnableCanStartPreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYCAM_DebugMenu_EnablePlayingPreview_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYCAM_DebugMenu_EnablePlayingPreview_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YCAM_DebugMenu_eventEnablePlayingPreview_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYCAM_DebugMenu_EnablePlayingPreview_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YCAM_DebugMenu_eventEnablePlayingPreview_Parms), &Z_Construct_UFunction_UYCAM_DebugMenu_EnablePlayingPreview_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYCAM_DebugMenu_EnablePlayingPreview_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYCAM_DebugMenu_EnablePlayingPreview_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAM_DebugMenu_EnablePlayingPreview_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYCAM_DebugMenu_EnablePlayingPreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYCAM_DebugMenu, nullptr, "EnablePlayingPreview", nullptr, nullptr, sizeof(YCAM_DebugMenu_eventEnablePlayingPreview_Parms), Z_Construct_UFunction_UYCAM_DebugMenu_EnablePlayingPreview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_DebugMenu_EnablePlayingPreview_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYCAM_DebugMenu_EnablePlayingPreview_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_DebugMenu_EnablePlayingPreview_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYCAM_DebugMenu_EnablePlayingPreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYCAM_DebugMenu_EnablePlayingPreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYCAM_DebugMenu_PushStartAllTest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAM_DebugMenu_PushStartAllTest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYCAM_DebugMenu_PushStartAllTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYCAM_DebugMenu, nullptr, "PushStartAllTest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYCAM_DebugMenu_PushStartAllTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_DebugMenu_PushStartAllTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYCAM_DebugMenu_PushStartAllTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYCAM_DebugMenu_PushStartAllTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYCAM_DebugMenu_PushStartDistanceTest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAM_DebugMenu_PushStartDistanceTest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYCAM_DebugMenu_PushStartDistanceTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYCAM_DebugMenu, nullptr, "PushStartDistanceTest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYCAM_DebugMenu_PushStartDistanceTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_DebugMenu_PushStartDistanceTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYCAM_DebugMenu_PushStartDistanceTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYCAM_DebugMenu_PushStartDistanceTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYCAM_DebugMenu_PushStartDivingDistanceTest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAM_DebugMenu_PushStartDivingDistanceTest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYCAM_DebugMenu_PushStartDivingDistanceTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYCAM_DebugMenu, nullptr, "PushStartDivingDistanceTest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYCAM_DebugMenu_PushStartDivingDistanceTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_DebugMenu_PushStartDivingDistanceTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYCAM_DebugMenu_PushStartDivingDistanceTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYCAM_DebugMenu_PushStartDivingDistanceTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYCAM_DebugMenu_PushStartPreview_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAM_DebugMenu_PushStartPreview_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYCAM_DebugMenu_PushStartPreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYCAM_DebugMenu, nullptr, "PushStartPreview", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYCAM_DebugMenu_PushStartPreview_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_DebugMenu_PushStartPreview_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYCAM_DebugMenu_PushStartPreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYCAM_DebugMenu_PushStartPreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYCAM_DebugMenu_PushStartStrikeDistanceTest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAM_DebugMenu_PushStartStrikeDistanceTest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYCAM_DebugMenu_PushStartStrikeDistanceTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYCAM_DebugMenu, nullptr, "PushStartStrikeDistanceTest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYCAM_DebugMenu_PushStartStrikeDistanceTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_DebugMenu_PushStartStrikeDistanceTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYCAM_DebugMenu_PushStartStrikeDistanceTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYCAM_DebugMenu_PushStartStrikeDistanceTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYCAM_DebugMenu_PushStopPreview_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAM_DebugMenu_PushStopPreview_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYCAM_DebugMenu_PushStopPreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYCAM_DebugMenu, nullptr, "PushStopPreview", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYCAM_DebugMenu_PushStopPreview_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_DebugMenu_PushStopPreview_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYCAM_DebugMenu_PushStopPreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYCAM_DebugMenu_PushStopPreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYCAM_DebugMenu_ReleaseActor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAM_DebugMenu_ReleaseActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYCAM_DebugMenu_ReleaseActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYCAM_DebugMenu, nullptr, "ReleaseActor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYCAM_DebugMenu_ReleaseActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_DebugMenu_ReleaseActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYCAM_DebugMenu_ReleaseActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYCAM_DebugMenu_ReleaseActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYCAM_DebugMenu_UpdateIsDeleteDuplicateCategory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAM_DebugMenu_UpdateIsDeleteDuplicateCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYCAM_DebugMenu_UpdateIsDeleteDuplicateCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYCAM_DebugMenu, nullptr, "UpdateIsDeleteDuplicateCategory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYCAM_DebugMenu_UpdateIsDeleteDuplicateCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_DebugMenu_UpdateIsDeleteDuplicateCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYCAM_DebugMenu_UpdateIsDeleteDuplicateCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYCAM_DebugMenu_UpdateIsDeleteDuplicateCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYCAM_DebugMenu_UpdateIsEndless_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAM_DebugMenu_UpdateIsEndless_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYCAM_DebugMenu_UpdateIsEndless_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYCAM_DebugMenu, nullptr, "UpdateIsEndless", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYCAM_DebugMenu_UpdateIsEndless_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_DebugMenu_UpdateIsEndless_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYCAM_DebugMenu_UpdateIsEndless()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYCAM_DebugMenu_UpdateIsEndless_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYCAM_DebugMenu_UpdateIsNotThreadTickAsyncPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAM_DebugMenu_UpdateIsNotThreadTickAsyncPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYCAM_DebugMenu_UpdateIsNotThreadTickAsyncPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYCAM_DebugMenu, nullptr, "UpdateIsNotThreadTickAsyncPlayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYCAM_DebugMenu_UpdateIsNotThreadTickAsyncPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_DebugMenu_UpdateIsNotThreadTickAsyncPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYCAM_DebugMenu_UpdateIsNotThreadTickAsyncPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYCAM_DebugMenu_UpdateIsNotThreadTickAsyncPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYCAM_DebugMenu_UpdateIsScreenShot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYCAM_DebugMenu_UpdateIsScreenShot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YCAM_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYCAM_DebugMenu_UpdateIsScreenShot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYCAM_DebugMenu, nullptr, "UpdateIsScreenShot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYCAM_DebugMenu_UpdateIsScreenShot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYCAM_DebugMenu_UpdateIsScreenShot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYCAM_DebugMenu_UpdateIsScreenShot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYCAM_DebugMenu_UpdateIsScreenShot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYCAM_DebugMenu_NoRegister()
	{
		return UYCAM_DebugMenu::StaticClass();
	}
	struct Z_Construct_UClass_UYCAM_DebugMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_menuId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_menuId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewIdxNow_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreviewIdxNow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPreview_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPreview;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewIdxJump_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreviewIdxJump;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isDeleteDuplicateCategory_MetaData[];
#endif
		static void NewProp_isDeleteDuplicateCategory_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDeleteDuplicateCategory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isEndless_MetaData[];
#endif
		static void NewProp_isEndless_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isEndless;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isScreenShot_MetaData[];
#endif
		static void NewProp_isScreenShot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isScreenShot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isNotThreadTickAsyncPlayer_MetaData[];
#endif
		static void NewProp_isNotThreadTickAsyncPlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isNotThreadTickAsyncPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYCAM_DebugMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UYCreate_DebugMenuBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYCAM_DebugMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYCAM_DebugMenu_ApplyPreviewIdx, "ApplyPreviewIdx" }, // 3402040586
		{ &Z_Construct_UFunction_UYCAM_DebugMenu_ConvertTexture2DToBuffer, "ConvertTexture2DToBuffer" }, // 2767715720
		{ &Z_Construct_UFunction_UYCAM_DebugMenu_EnableCAMMode, "EnableCAMMode" }, // 2809183233
		{ &Z_Construct_UFunction_UYCAM_DebugMenu_EnableCanStartPreview, "EnableCanStartPreview" }, // 3309706436
		{ &Z_Construct_UFunction_UYCAM_DebugMenu_EnablePlayingPreview, "EnablePlayingPreview" }, // 1258265690
		{ &Z_Construct_UFunction_UYCAM_DebugMenu_PushStartAllTest, "PushStartAllTest" }, // 4047759625
		{ &Z_Construct_UFunction_UYCAM_DebugMenu_PushStartDistanceTest, "PushStartDistanceTest" }, // 2615612257
		{ &Z_Construct_UFunction_UYCAM_DebugMenu_PushStartDivingDistanceTest, "PushStartDivingDistanceTest" }, // 2493719241
		{ &Z_Construct_UFunction_UYCAM_DebugMenu_PushStartPreview, "PushStartPreview" }, // 246219048
		{ &Z_Construct_UFunction_UYCAM_DebugMenu_PushStartStrikeDistanceTest, "PushStartStrikeDistanceTest" }, // 1046145658
		{ &Z_Construct_UFunction_UYCAM_DebugMenu_PushStopPreview, "PushStopPreview" }, // 1744026875
		{ &Z_Construct_UFunction_UYCAM_DebugMenu_ReleaseActor, "ReleaseActor" }, // 1962674457
		{ &Z_Construct_UFunction_UYCAM_DebugMenu_UpdateIsDeleteDuplicateCategory, "UpdateIsDeleteDuplicateCategory" }, // 2045260547
		{ &Z_Construct_UFunction_UYCAM_DebugMenu_UpdateIsEndless, "UpdateIsEndless" }, // 3879244593
		{ &Z_Construct_UFunction_UYCAM_DebugMenu_UpdateIsNotThreadTickAsyncPlayer, "UpdateIsNotThreadTickAsyncPlayer" }, // 566358741
		{ &Z_Construct_UFunction_UYCAM_DebugMenu_UpdateIsScreenShot, "UpdateIsScreenShot" }, // 1372660085
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYCAM_DebugMenu_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YCAM_DebugMenu.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YCAM_DebugMenu.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_menuId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YCAM_DebugMenu" },
		{ "ModuleRelativePath", "Public/YCAM_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_menuId = { "menuId", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYCAM_DebugMenu, menuId), METADATA_PARAMS(Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_menuId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_menuId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_PreviewIdxNow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YCAM_DebugMenu" },
		{ "ModuleRelativePath", "Public/YCAM_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_PreviewIdxNow = { "PreviewIdxNow", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYCAM_DebugMenu, PreviewIdxNow), METADATA_PARAMS(Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_PreviewIdxNow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_PreviewIdxNow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_MaxPreview_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YCAM_DebugMenu" },
		{ "ModuleRelativePath", "Public/YCAM_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_MaxPreview = { "MaxPreview", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYCAM_DebugMenu, MaxPreview), METADATA_PARAMS(Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_MaxPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_MaxPreview_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_PreviewIdxJump_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YCAM_DebugMenu" },
		{ "ModuleRelativePath", "Public/YCAM_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_PreviewIdxJump = { "PreviewIdxJump", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYCAM_DebugMenu, PreviewIdxJump), METADATA_PARAMS(Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_PreviewIdxJump_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_PreviewIdxJump_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_isDeleteDuplicateCategory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YCAM_DebugMenu" },
		{ "ModuleRelativePath", "Public/YCAM_DebugMenu.h" },
	};
#endif
	void Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_isDeleteDuplicateCategory_SetBit(void* Obj)
	{
		((UYCAM_DebugMenu*)Obj)->isDeleteDuplicateCategory = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_isDeleteDuplicateCategory = { "isDeleteDuplicateCategory", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UYCAM_DebugMenu), &Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_isDeleteDuplicateCategory_SetBit, METADATA_PARAMS(Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_isDeleteDuplicateCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_isDeleteDuplicateCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_isEndless_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YCAM_DebugMenu" },
		{ "ModuleRelativePath", "Public/YCAM_DebugMenu.h" },
	};
#endif
	void Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_isEndless_SetBit(void* Obj)
	{
		((UYCAM_DebugMenu*)Obj)->isEndless = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_isEndless = { "isEndless", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UYCAM_DebugMenu), &Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_isEndless_SetBit, METADATA_PARAMS(Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_isEndless_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_isEndless_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_isScreenShot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YCAM_DebugMenu" },
		{ "ModuleRelativePath", "Public/YCAM_DebugMenu.h" },
	};
#endif
	void Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_isScreenShot_SetBit(void* Obj)
	{
		((UYCAM_DebugMenu*)Obj)->isScreenShot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_isScreenShot = { "isScreenShot", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UYCAM_DebugMenu), &Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_isScreenShot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_isScreenShot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_isScreenShot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_isNotThreadTickAsyncPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YCAM_DebugMenu" },
		{ "ModuleRelativePath", "Public/YCAM_DebugMenu.h" },
	};
#endif
	void Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_isNotThreadTickAsyncPlayer_SetBit(void* Obj)
	{
		((UYCAM_DebugMenu*)Obj)->isNotThreadTickAsyncPlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_isNotThreadTickAsyncPlayer = { "isNotThreadTickAsyncPlayer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UYCAM_DebugMenu), &Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_isNotThreadTickAsyncPlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_isNotThreadTickAsyncPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_isNotThreadTickAsyncPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYCAM_DebugMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_menuId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_PreviewIdxNow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_MaxPreview,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_PreviewIdxJump,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_isDeleteDuplicateCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_isEndless,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_isScreenShot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYCAM_DebugMenu_Statics::NewProp_isNotThreadTickAsyncPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYCAM_DebugMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYCAM_DebugMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYCAM_DebugMenu_Statics::ClassParams = {
		&UYCAM_DebugMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UYCAM_DebugMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UYCAM_DebugMenu_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UYCAM_DebugMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYCAM_DebugMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYCAM_DebugMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYCAM_DebugMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYCAM_DebugMenu, 3730819727);
	template<> ABP_200508_API UClass* StaticClass<UYCAM_DebugMenu>()
	{
		return UYCAM_DebugMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYCAM_DebugMenu(Z_Construct_UClass_UYCAM_DebugMenu, &UYCAM_DebugMenu::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UYCAM_DebugMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYCAM_DebugMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
