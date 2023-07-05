// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerEventMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerEventMessage() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerEventMessage();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerEventCamera();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerScreenEffect();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerProp();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerEventTarget();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerSEType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerBGMType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerEventActionMember();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerEventDisp();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerChoicesSelectionResult();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerStoryResultCondition();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerEventMessage>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerEventMessage cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerEventMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerEventMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerEventMessage, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerEventMessage"), sizeof(FCareerEventMessage), Get_Z_Construct_UScriptStruct_FCareerEventMessage_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerEventMessage>()
{
	return FCareerEventMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerEventMessage(FCareerEventMessage::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerEventMessage"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerEventMessage
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerEventMessage()
	{
		UScriptStruct::DeferCppStructOps<FCareerEventMessage>(FName(TEXT("CareerEventMessage")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerEventMessage;
	struct Z_Construct_UScriptStruct_FCareerEventMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_TextID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Title_TextID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Camera;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScreenEffect_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScreenEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemA_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemA_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemA_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemA_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemA_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemA_TalkAnim;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemA_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemA_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemA_Prop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemA_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemA_PropAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemA_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MemA_Yaw;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemA_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemA_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemA_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemB_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemB_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemB_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemB_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemB_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemB_TalkAnim;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemB_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemB_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemB_Prop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemB_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemB_PropAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemB_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MemB_Yaw;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemB_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemB_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemB_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemC_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemC_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemC_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemC_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemC_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemC_TalkAnim;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemC_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemC_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemC_Prop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemC_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemC_PropAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemC_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MemC_Yaw;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemC_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemC_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemC_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemD_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemD_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemD_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemD_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemD_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemD_TalkAnim;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemD_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemD_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemD_Prop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemD_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemD_PropAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemD_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MemD_Yaw;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemD_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemD_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemD_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act0_SE_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act0_SE_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act0_SE;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act0_BGM_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act0_BGM_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act0_BGM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act0_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Act0_Camera;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act0_ScreenEffect_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act0_ScreenEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act0_ScreenEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act0_TextID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act0_TextID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act0_TalkMem_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act0_TalkMem_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act0_TalkMem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act0_MemA_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act0_MemA_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act0_MemB_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act0_MemB_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act0_MemC_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act0_MemC_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act0_MemD_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act0_MemD_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act0_MemA_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act0_MemA_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act0_MemB_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act0_MemB_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act0_MemC_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act0_MemC_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act0_MemD_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act0_MemD_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act0_MemA_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act0_MemA_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act0_MemB_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act0_MemB_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act0_MemC_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act0_MemC_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act0_MemD_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act0_MemD_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act0_MemA_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act0_MemA_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act0_MemB_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act0_MemB_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act0_MemC_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act0_MemC_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act0_MemD_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act0_MemD_Yaw;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act0_MemA_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act0_MemA_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act0_MemA_Prop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act0_MemB_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act0_MemB_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act0_MemB_Prop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act0_MemC_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act0_MemC_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act0_MemC_Prop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act0_MemD_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act0_MemD_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act0_MemD_Prop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act0_MemA_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act0_MemA_PropAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act0_MemB_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act0_MemB_PropAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act0_MemC_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act0_MemC_PropAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act0_MemD_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act0_MemD_PropAnim;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act0_MemA_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act0_MemA_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act0_MemA_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act0_MemB_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act0_MemB_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act0_MemB_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act0_MemC_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act0_MemC_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act0_MemC_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act0_MemD_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act0_MemD_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act0_MemD_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act0_MemA_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act0_MemA_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act0_MemA_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act0_MemB_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act0_MemB_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act0_MemB_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act0_MemC_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act0_MemC_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act0_MemC_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act0_MemD_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act0_MemD_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act0_MemD_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act1_SE_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act1_SE_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act1_SE;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act1_BGM_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act1_BGM_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act1_BGM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act1_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Act1_Camera;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act1_ScreenEffect_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act1_ScreenEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act1_ScreenEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act1_TextID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act1_TextID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act1_TalkMem_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act1_TalkMem_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act1_TalkMem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act1_MemA_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act1_MemA_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act1_MemB_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act1_MemB_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act1_MemC_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act1_MemC_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act1_MemD_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act1_MemD_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act1_MemA_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act1_MemA_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act1_MemB_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act1_MemB_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act1_MemC_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act1_MemC_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act1_MemD_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act1_MemD_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act1_MemA_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act1_MemA_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act1_MemB_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act1_MemB_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act1_MemC_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act1_MemC_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act1_MemD_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act1_MemD_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act1_MemA_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act1_MemA_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act1_MemB_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act1_MemB_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act1_MemC_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act1_MemC_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act1_MemD_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act1_MemD_Yaw;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act1_MemA_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act1_MemA_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act1_MemA_Prop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act1_MemB_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act1_MemB_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act1_MemB_Prop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act1_MemC_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act1_MemC_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act1_MemC_Prop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act1_MemD_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act1_MemD_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act1_MemD_Prop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act1_MemA_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act1_MemA_PropAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act1_MemB_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act1_MemB_PropAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act1_MemC_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act1_MemC_PropAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act1_MemD_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act1_MemD_PropAnim;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act1_MemA_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act1_MemA_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act1_MemA_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act1_MemB_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act1_MemB_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act1_MemB_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act1_MemC_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act1_MemC_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act1_MemC_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act1_MemD_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act1_MemD_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act1_MemD_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act1_MemA_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act1_MemA_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act1_MemA_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act1_MemB_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act1_MemB_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act1_MemB_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act1_MemC_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act1_MemC_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act1_MemC_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act1_MemD_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act1_MemD_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act1_MemD_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act2_SE_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act2_SE_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act2_SE;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act2_BGM_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act2_BGM_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act2_BGM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act2_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Act2_Camera;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act2_ScreenEffect_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act2_ScreenEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act2_ScreenEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act2_TextID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act2_TextID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act2_TalkMem_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act2_TalkMem_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act2_TalkMem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act2_MemA_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act2_MemA_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act2_MemB_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act2_MemB_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act2_MemC_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act2_MemC_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act2_MemD_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act2_MemD_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act2_MemA_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act2_MemA_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act2_MemB_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act2_MemB_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act2_MemC_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act2_MemC_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act2_MemD_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act2_MemD_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act2_MemA_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act2_MemA_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act2_MemB_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act2_MemB_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act2_MemC_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act2_MemC_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act2_MemD_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act2_MemD_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act2_MemA_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act2_MemA_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act2_MemB_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act2_MemB_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act2_MemC_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act2_MemC_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act2_MemD_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act2_MemD_Yaw;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act2_MemA_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act2_MemA_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act2_MemA_Prop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act2_MemB_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act2_MemB_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act2_MemB_Prop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act2_MemC_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act2_MemC_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act2_MemC_Prop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act2_MemD_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act2_MemD_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act2_MemD_Prop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act2_MemA_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act2_MemA_PropAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act2_MemB_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act2_MemB_PropAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act2_MemC_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act2_MemC_PropAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act2_MemD_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act2_MemD_PropAnim;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act2_MemA_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act2_MemA_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act2_MemA_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act2_MemB_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act2_MemB_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act2_MemB_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act2_MemC_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act2_MemC_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act2_MemC_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act2_MemD_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act2_MemD_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act2_MemD_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act2_MemA_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act2_MemA_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act2_MemA_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act2_MemB_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act2_MemB_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act2_MemB_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act2_MemC_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act2_MemC_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act2_MemC_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act2_MemD_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act2_MemD_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act2_MemD_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act3_SE_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act3_SE_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act3_SE;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act3_BGM_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act3_BGM_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act3_BGM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act3_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Act3_Camera;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act3_ScreenEffect_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act3_ScreenEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act3_ScreenEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act3_TextID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act3_TextID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act3_TalkMem_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act3_TalkMem_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act3_TalkMem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act3_MemA_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act3_MemA_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act3_MemB_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act3_MemB_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act3_MemC_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act3_MemC_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act3_MemD_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act3_MemD_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act3_MemA_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act3_MemA_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act3_MemB_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act3_MemB_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act3_MemC_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act3_MemC_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act3_MemD_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act3_MemD_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act3_MemA_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act3_MemA_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act3_MemB_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act3_MemB_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act3_MemC_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act3_MemC_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act3_MemD_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act3_MemD_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act3_MemA_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act3_MemA_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act3_MemB_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act3_MemB_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act3_MemC_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act3_MemC_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act3_MemD_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act3_MemD_Yaw;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act3_MemA_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act3_MemA_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act3_MemA_Prop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act3_MemB_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act3_MemB_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act3_MemB_Prop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act3_MemC_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act3_MemC_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act3_MemC_Prop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act3_MemD_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act3_MemD_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act3_MemD_Prop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act3_MemA_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act3_MemA_PropAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act3_MemB_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act3_MemB_PropAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act3_MemC_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act3_MemC_PropAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act3_MemD_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act3_MemD_PropAnim;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act3_MemA_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act3_MemA_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act3_MemA_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act3_MemB_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act3_MemB_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act3_MemB_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act3_MemC_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act3_MemC_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act3_MemC_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act3_MemD_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act3_MemD_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act3_MemD_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act3_MemA_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act3_MemA_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act3_MemA_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act3_MemB_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act3_MemB_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act3_MemB_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act3_MemC_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act3_MemC_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act3_MemC_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act3_MemD_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act3_MemD_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act3_MemD_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act4_SE_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act4_SE_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act4_SE;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act4_BGM_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act4_BGM_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act4_BGM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act4_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Act4_Camera;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act4_ScreenEffect_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act4_ScreenEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act4_ScreenEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act4_TextID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act4_TextID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act4_TalkMem_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act4_TalkMem_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act4_TalkMem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act4_MemA_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act4_MemA_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act4_MemB_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act4_MemB_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act4_MemC_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act4_MemC_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act4_MemD_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act4_MemD_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act4_MemA_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act4_MemA_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act4_MemB_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act4_MemB_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act4_MemC_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act4_MemC_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act4_MemD_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act4_MemD_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act4_MemA_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act4_MemA_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act4_MemB_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act4_MemB_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act4_MemC_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act4_MemC_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act4_MemD_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act4_MemD_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act4_MemA_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act4_MemA_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act4_MemB_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act4_MemB_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act4_MemC_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act4_MemC_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act4_MemD_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act4_MemD_Yaw;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act4_MemA_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act4_MemA_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act4_MemA_Prop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act4_MemB_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act4_MemB_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act4_MemB_Prop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act4_MemC_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act4_MemC_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act4_MemC_Prop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act4_MemD_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act4_MemD_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act4_MemD_Prop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act4_MemA_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act4_MemA_PropAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act4_MemB_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act4_MemB_PropAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act4_MemC_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act4_MemC_PropAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act4_MemD_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act4_MemD_PropAnim;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act4_MemA_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act4_MemA_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act4_MemA_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act4_MemB_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act4_MemB_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act4_MemB_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act4_MemC_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act4_MemC_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act4_MemC_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act4_MemD_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act4_MemD_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act4_MemD_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act4_MemA_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act4_MemA_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act4_MemA_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act4_MemB_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act4_MemB_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act4_MemB_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act4_MemC_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act4_MemC_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act4_MemC_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act4_MemD_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act4_MemD_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act4_MemD_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act5_SE_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act5_SE_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act5_SE;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act5_BGM_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act5_BGM_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act5_BGM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act5_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Act5_Camera;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act5_ScreenEffect_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act5_ScreenEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act5_ScreenEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act5_TextID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act5_TextID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act5_TalkMem_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act5_TalkMem_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act5_TalkMem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act5_MemA_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act5_MemA_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act5_MemB_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act5_MemB_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act5_MemC_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act5_MemC_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act5_MemD_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act5_MemD_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act5_MemA_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act5_MemA_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act5_MemB_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act5_MemB_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act5_MemC_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act5_MemC_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act5_MemD_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act5_MemD_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act5_MemA_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act5_MemA_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act5_MemB_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act5_MemB_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act5_MemC_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act5_MemC_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act5_MemD_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act5_MemD_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act5_MemA_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act5_MemA_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act5_MemB_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act5_MemB_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act5_MemC_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act5_MemC_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act5_MemD_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act5_MemD_Yaw;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act5_MemA_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act5_MemA_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act5_MemA_Prop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act5_MemB_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act5_MemB_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act5_MemB_Prop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act5_MemC_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act5_MemC_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act5_MemC_Prop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act5_MemD_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act5_MemD_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act5_MemD_Prop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act5_MemA_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act5_MemA_PropAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act5_MemB_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act5_MemB_PropAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act5_MemC_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act5_MemC_PropAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act5_MemD_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act5_MemD_PropAnim;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act5_MemA_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act5_MemA_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act5_MemA_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act5_MemB_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act5_MemB_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act5_MemB_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act5_MemC_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act5_MemC_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act5_MemC_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act5_MemD_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act5_MemD_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act5_MemD_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act5_MemA_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act5_MemA_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act5_MemA_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act5_MemB_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act5_MemB_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act5_MemB_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act5_MemC_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act5_MemC_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act5_MemC_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act5_MemD_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act5_MemD_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act5_MemD_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act6_SE_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act6_SE_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act6_SE;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act6_BGM_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act6_BGM_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act6_BGM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act6_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Act6_Camera;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act6_ScreenEffect_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act6_ScreenEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act6_ScreenEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act6_TextID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act6_TextID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act6_TalkMem_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act6_TalkMem_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act6_TalkMem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act6_MemA_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act6_MemA_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act6_MemB_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act6_MemB_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act6_MemC_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act6_MemC_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act6_MemD_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act6_MemD_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act6_MemA_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act6_MemA_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act6_MemB_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act6_MemB_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act6_MemC_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act6_MemC_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act6_MemD_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act6_MemD_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act6_MemA_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act6_MemA_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act6_MemB_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act6_MemB_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act6_MemC_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act6_MemC_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act6_MemD_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act6_MemD_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act6_MemA_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act6_MemA_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act6_MemB_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act6_MemB_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act6_MemC_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act6_MemC_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act6_MemD_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act6_MemD_Yaw;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act6_MemA_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act6_MemA_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act6_MemA_Prop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act6_MemB_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act6_MemB_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act6_MemB_Prop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act6_MemC_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act6_MemC_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act6_MemC_Prop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act6_MemD_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act6_MemD_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act6_MemD_Prop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act6_MemA_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act6_MemA_PropAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act6_MemB_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act6_MemB_PropAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act6_MemC_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act6_MemC_PropAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act6_MemD_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act6_MemD_PropAnim;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act6_MemA_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act6_MemA_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act6_MemA_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act6_MemB_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act6_MemB_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act6_MemB_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act6_MemC_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act6_MemC_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act6_MemC_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act6_MemD_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act6_MemD_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act6_MemD_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act6_MemA_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act6_MemA_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act6_MemA_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act6_MemB_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act6_MemB_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act6_MemB_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act6_MemC_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act6_MemC_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act6_MemC_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act6_MemD_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act6_MemD_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act6_MemD_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act7_SE_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act7_SE_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act7_SE;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act7_BGM_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act7_BGM_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act7_BGM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act7_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Act7_Camera;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act7_ScreenEffect_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act7_ScreenEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act7_ScreenEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act7_TextID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act7_TextID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act7_TalkMem_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act7_TalkMem_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act7_TalkMem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act7_MemA_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act7_MemA_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act7_MemB_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act7_MemB_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act7_MemC_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act7_MemC_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act7_MemD_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act7_MemD_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act7_MemA_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act7_MemA_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act7_MemB_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act7_MemB_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act7_MemC_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act7_MemC_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act7_MemD_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act7_MemD_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act7_MemA_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act7_MemA_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act7_MemB_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act7_MemB_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act7_MemC_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act7_MemC_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act7_MemD_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act7_MemD_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act7_MemA_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act7_MemA_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act7_MemB_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act7_MemB_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act7_MemC_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act7_MemC_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act7_MemD_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act7_MemD_Yaw;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act7_MemA_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act7_MemA_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act7_MemA_Prop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act7_MemB_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act7_MemB_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act7_MemB_Prop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act7_MemC_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act7_MemC_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act7_MemC_Prop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act7_MemD_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act7_MemD_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act7_MemD_Prop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act7_MemA_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act7_MemA_PropAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act7_MemB_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act7_MemB_PropAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act7_MemC_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act7_MemC_PropAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act7_MemD_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act7_MemD_PropAnim;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act7_MemA_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act7_MemA_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act7_MemA_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act7_MemB_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act7_MemB_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act7_MemB_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act7_MemC_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act7_MemC_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act7_MemC_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act7_MemD_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act7_MemD_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act7_MemD_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act7_MemA_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act7_MemA_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act7_MemA_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act7_MemB_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act7_MemB_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act7_MemB_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act7_MemC_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act7_MemC_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act7_MemC_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act7_MemD_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act7_MemD_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act7_MemD_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act8_SE_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act8_SE_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act8_SE;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act8_BGM_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act8_BGM_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act8_BGM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act8_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Act8_Camera;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act8_ScreenEffect_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act8_ScreenEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act8_ScreenEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act8_TextID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act8_TextID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act8_TalkMem_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act8_TalkMem_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act8_TalkMem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act8_MemA_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act8_MemA_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act8_MemB_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act8_MemB_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act8_MemC_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act8_MemC_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act8_MemD_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act8_MemD_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act8_MemA_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act8_MemA_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act8_MemB_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act8_MemB_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act8_MemC_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act8_MemC_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act8_MemD_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act8_MemD_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act8_MemA_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act8_MemA_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act8_MemB_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act8_MemB_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act8_MemC_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act8_MemC_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act8_MemD_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act8_MemD_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act8_MemA_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act8_MemA_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act8_MemB_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act8_MemB_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act8_MemC_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act8_MemC_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act8_MemD_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act8_MemD_Yaw;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act8_MemA_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act8_MemA_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act8_MemA_Prop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act8_MemB_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act8_MemB_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act8_MemB_Prop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act8_MemC_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act8_MemC_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act8_MemC_Prop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act8_MemD_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act8_MemD_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act8_MemD_Prop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act8_MemA_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act8_MemA_PropAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act8_MemB_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act8_MemB_PropAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act8_MemC_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act8_MemC_PropAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act8_MemD_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act8_MemD_PropAnim;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act8_MemA_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act8_MemA_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act8_MemA_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act8_MemB_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act8_MemB_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act8_MemB_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act8_MemC_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act8_MemC_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act8_MemC_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act8_MemD_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act8_MemD_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act8_MemD_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act8_MemA_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act8_MemA_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act8_MemA_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act8_MemB_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act8_MemB_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act8_MemB_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act8_MemC_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act8_MemC_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act8_MemC_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act8_MemD_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act8_MemD_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act8_MemD_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act9_SE_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act9_SE_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act9_SE;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act9_BGM_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act9_BGM_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act9_BGM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act9_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Act9_Camera;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act9_ScreenEffect_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act9_ScreenEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act9_ScreenEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act9_TextID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act9_TextID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act9_TalkMem_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act9_TalkMem_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act9_TalkMem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act9_MemA_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act9_MemA_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act9_MemB_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act9_MemB_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act9_MemC_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act9_MemC_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act9_MemD_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act9_MemD_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act9_MemA_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act9_MemA_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act9_MemB_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act9_MemB_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act9_MemC_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act9_MemC_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act9_MemD_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act9_MemD_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act9_MemA_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act9_MemA_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act9_MemB_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act9_MemB_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act9_MemC_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act9_MemC_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act9_MemD_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act9_MemD_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act9_MemA_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act9_MemA_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act9_MemB_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act9_MemB_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act9_MemC_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act9_MemC_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act9_MemD_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Act9_MemD_Yaw;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act9_MemA_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act9_MemA_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act9_MemA_Prop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act9_MemB_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act9_MemB_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act9_MemB_Prop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act9_MemC_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act9_MemC_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act9_MemC_Prop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act9_MemD_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act9_MemD_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act9_MemD_Prop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act9_MemA_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act9_MemA_PropAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act9_MemB_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act9_MemB_PropAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act9_MemC_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act9_MemC_PropAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act9_MemD_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Act9_MemD_PropAnim;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act9_MemA_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act9_MemA_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act9_MemA_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act9_MemB_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act9_MemB_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act9_MemB_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act9_MemC_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act9_MemC_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act9_MemC_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act9_MemD_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act9_MemD_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act9_MemD_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act9_MemA_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act9_MemA_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act9_MemA_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act9_MemB_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act9_MemB_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act9_MemB_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act9_MemC_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act9_MemC_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act9_MemC_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Act9_MemD_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Act9_MemD_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Act9_MemD_Disp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SelectTitle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SaveSelectionResult_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveSelectionResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SaveSelectionResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectA_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SelectA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectB_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SelectB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectC_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SelectC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectD_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SelectD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DM_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DM_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DM_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DM_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DM_C_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DM_C;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DM_D_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DM_D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NextMessage;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EventResult_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EventResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerEventMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Title_TextID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Title_TextID = { "Title_TextID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Title_TextID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Title_TextID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Title_TextID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Camera), Z_Construct_UScriptStruct_FCareerEventCamera, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Camera_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_ScreenEffect_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_ScreenEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_ScreenEffect = { "ScreenEffect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, ScreenEffect), Z_Construct_UEnum_ABP_200508_ECareerScreenEffect, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_ScreenEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_ScreenEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_AnimType = { "MemA_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, MemA_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_FacialAnim = { "MemA_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, MemA_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_TalkAnim = { "MemA_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, MemA_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_TalkAnim_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_Prop = { "MemA_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, MemA_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_Prop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_PropAnim = { "MemA_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, MemA_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_PropAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_Yaw = { "MemA_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, MemA_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_Yaw_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_Target = { "MemA_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, MemA_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_AnimType = { "MemB_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, MemB_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_FacialAnim = { "MemB_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, MemB_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_TalkAnim = { "MemB_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, MemB_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_TalkAnim_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_Prop = { "MemB_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, MemB_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_Prop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_PropAnim = { "MemB_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, MemB_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_PropAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_Yaw = { "MemB_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, MemB_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_Yaw_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_Target = { "MemB_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, MemB_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_AnimType = { "MemC_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, MemC_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_FacialAnim = { "MemC_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, MemC_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_TalkAnim = { "MemC_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, MemC_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_TalkAnim_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_Prop = { "MemC_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, MemC_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_Prop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_PropAnim = { "MemC_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, MemC_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_PropAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_Yaw = { "MemC_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, MemC_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_Yaw_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_Target = { "MemC_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, MemC_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_AnimType = { "MemD_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, MemD_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_FacialAnim = { "MemD_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, MemD_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_TalkAnim = { "MemD_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, MemD_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_TalkAnim_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_Prop = { "MemD_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, MemD_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_Prop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_PropAnim = { "MemD_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, MemD_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_PropAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_Yaw = { "MemD_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, MemD_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_Yaw_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_Target = { "MemD_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, MemD_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_SE_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_SE_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_SE = { "Act0_SE", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act0_SE), Z_Construct_UEnum_ABP_200508_ECareerSEType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_SE_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_SE_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_BGM_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_BGM_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_BGM = { "Act0_BGM", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act0_BGM), Z_Construct_UEnum_ABP_200508_ECareerBGMType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_BGM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_BGM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_Camera = { "Act0_Camera", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act0_Camera), Z_Construct_UScriptStruct_FCareerEventCamera, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_Camera_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_ScreenEffect_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_ScreenEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_ScreenEffect = { "Act0_ScreenEffect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act0_ScreenEffect), Z_Construct_UEnum_ABP_200508_ECareerScreenEffect, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_ScreenEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_ScreenEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_TextID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_TextID = { "Act0_TextID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act0_TextID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_TextID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_TextID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_TalkMem_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_TalkMem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_TalkMem = { "Act0_TalkMem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act0_TalkMem), Z_Construct_UEnum_ABP_200508_ECareerEventActionMember, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_TalkMem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_TalkMem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_TalkAnim = { "Act0_MemA_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act0_MemA_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_TalkAnim = { "Act0_MemB_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act0_MemB_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_TalkAnim = { "Act0_MemC_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act0_MemC_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_TalkAnim = { "Act0_MemD_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act0_MemD_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_FacialAnim = { "Act0_MemA_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act0_MemA_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_FacialAnim = { "Act0_MemB_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act0_MemB_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_FacialAnim = { "Act0_MemC_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act0_MemC_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_FacialAnim = { "Act0_MemD_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act0_MemD_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_AnimType = { "Act0_MemA_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act0_MemA_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_AnimType = { "Act0_MemB_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act0_MemB_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_AnimType = { "Act0_MemC_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act0_MemC_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_AnimType = { "Act0_MemD_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act0_MemD_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_Yaw = { "Act0_MemA_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act0_MemA_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_Yaw = { "Act0_MemB_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act0_MemB_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_Yaw = { "Act0_MemC_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act0_MemC_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_Yaw = { "Act0_MemD_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act0_MemD_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_Yaw_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_Prop = { "Act0_MemA_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act0_MemA_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_Prop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_Prop = { "Act0_MemB_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act0_MemB_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_Prop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_Prop = { "Act0_MemC_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act0_MemC_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_Prop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_Prop = { "Act0_MemD_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act0_MemD_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_Prop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_PropAnim = { "Act0_MemA_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act0_MemA_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_PropAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_PropAnim = { "Act0_MemB_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act0_MemB_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_PropAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_PropAnim = { "Act0_MemC_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act0_MemC_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_PropAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_PropAnim = { "Act0_MemD_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act0_MemD_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_PropAnim_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_Target = { "Act0_MemA_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act0_MemA_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_Target = { "Act0_MemB_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act0_MemB_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_Target = { "Act0_MemC_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act0_MemC_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_Target = { "Act0_MemD_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act0_MemD_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_Disp = { "Act0_MemA_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act0_MemA_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_Disp = { "Act0_MemB_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act0_MemB_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_Disp = { "Act0_MemC_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act0_MemC_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_Disp = { "Act0_MemD_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act0_MemD_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_SE_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_SE_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_SE = { "Act1_SE", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act1_SE), Z_Construct_UEnum_ABP_200508_ECareerSEType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_SE_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_SE_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_BGM_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_BGM_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_BGM = { "Act1_BGM", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act1_BGM), Z_Construct_UEnum_ABP_200508_ECareerBGMType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_BGM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_BGM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_Camera = { "Act1_Camera", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act1_Camera), Z_Construct_UScriptStruct_FCareerEventCamera, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_Camera_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_ScreenEffect_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_ScreenEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_ScreenEffect = { "Act1_ScreenEffect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act1_ScreenEffect), Z_Construct_UEnum_ABP_200508_ECareerScreenEffect, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_ScreenEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_ScreenEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_TextID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_TextID = { "Act1_TextID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act1_TextID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_TextID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_TextID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_TalkMem_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_TalkMem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_TalkMem = { "Act1_TalkMem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act1_TalkMem), Z_Construct_UEnum_ABP_200508_ECareerEventActionMember, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_TalkMem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_TalkMem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_TalkAnim = { "Act1_MemA_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act1_MemA_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_TalkAnim = { "Act1_MemB_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act1_MemB_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_TalkAnim = { "Act1_MemC_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act1_MemC_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_TalkAnim = { "Act1_MemD_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act1_MemD_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_FacialAnim = { "Act1_MemA_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act1_MemA_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_FacialAnim = { "Act1_MemB_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act1_MemB_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_FacialAnim = { "Act1_MemC_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act1_MemC_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_FacialAnim = { "Act1_MemD_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act1_MemD_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_AnimType = { "Act1_MemA_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act1_MemA_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_AnimType = { "Act1_MemB_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act1_MemB_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_AnimType = { "Act1_MemC_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act1_MemC_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_AnimType = { "Act1_MemD_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act1_MemD_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_Yaw = { "Act1_MemA_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act1_MemA_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_Yaw = { "Act1_MemB_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act1_MemB_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_Yaw = { "Act1_MemC_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act1_MemC_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_Yaw = { "Act1_MemD_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act1_MemD_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_Yaw_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_Prop = { "Act1_MemA_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act1_MemA_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_Prop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_Prop = { "Act1_MemB_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act1_MemB_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_Prop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_Prop = { "Act1_MemC_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act1_MemC_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_Prop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_Prop = { "Act1_MemD_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act1_MemD_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_Prop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_PropAnim = { "Act1_MemA_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act1_MemA_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_PropAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_PropAnim = { "Act1_MemB_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act1_MemB_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_PropAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_PropAnim = { "Act1_MemC_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act1_MemC_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_PropAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_PropAnim = { "Act1_MemD_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act1_MemD_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_PropAnim_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_Target = { "Act1_MemA_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act1_MemA_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_Target = { "Act1_MemB_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act1_MemB_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_Target = { "Act1_MemC_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act1_MemC_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_Target = { "Act1_MemD_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act1_MemD_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_Disp = { "Act1_MemA_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act1_MemA_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_Disp = { "Act1_MemB_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act1_MemB_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_Disp = { "Act1_MemC_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act1_MemC_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_Disp = { "Act1_MemD_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act1_MemD_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_SE_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_SE_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_SE = { "Act2_SE", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act2_SE), Z_Construct_UEnum_ABP_200508_ECareerSEType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_SE_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_SE_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_BGM_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_BGM_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_BGM = { "Act2_BGM", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act2_BGM), Z_Construct_UEnum_ABP_200508_ECareerBGMType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_BGM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_BGM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_Camera = { "Act2_Camera", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act2_Camera), Z_Construct_UScriptStruct_FCareerEventCamera, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_Camera_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_ScreenEffect_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_ScreenEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_ScreenEffect = { "Act2_ScreenEffect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act2_ScreenEffect), Z_Construct_UEnum_ABP_200508_ECareerScreenEffect, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_ScreenEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_ScreenEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_TextID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_TextID = { "Act2_TextID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act2_TextID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_TextID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_TextID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_TalkMem_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_TalkMem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_TalkMem = { "Act2_TalkMem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act2_TalkMem), Z_Construct_UEnum_ABP_200508_ECareerEventActionMember, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_TalkMem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_TalkMem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_TalkAnim = { "Act2_MemA_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act2_MemA_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_TalkAnim = { "Act2_MemB_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act2_MemB_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_TalkAnim = { "Act2_MemC_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act2_MemC_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_TalkAnim = { "Act2_MemD_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act2_MemD_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_FacialAnim = { "Act2_MemA_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act2_MemA_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_FacialAnim = { "Act2_MemB_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act2_MemB_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_FacialAnim = { "Act2_MemC_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act2_MemC_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_FacialAnim = { "Act2_MemD_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act2_MemD_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_AnimType = { "Act2_MemA_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act2_MemA_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_AnimType = { "Act2_MemB_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act2_MemB_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_AnimType = { "Act2_MemC_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act2_MemC_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_AnimType = { "Act2_MemD_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act2_MemD_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_Yaw = { "Act2_MemA_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act2_MemA_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_Yaw = { "Act2_MemB_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act2_MemB_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_Yaw = { "Act2_MemC_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act2_MemC_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_Yaw = { "Act2_MemD_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act2_MemD_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_Yaw_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_Prop = { "Act2_MemA_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act2_MemA_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_Prop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_Prop = { "Act2_MemB_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act2_MemB_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_Prop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_Prop = { "Act2_MemC_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act2_MemC_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_Prop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_Prop = { "Act2_MemD_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act2_MemD_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_Prop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_PropAnim = { "Act2_MemA_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act2_MemA_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_PropAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_PropAnim = { "Act2_MemB_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act2_MemB_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_PropAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_PropAnim = { "Act2_MemC_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act2_MemC_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_PropAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_PropAnim = { "Act2_MemD_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act2_MemD_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_PropAnim_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_Target = { "Act2_MemA_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act2_MemA_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_Target = { "Act2_MemB_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act2_MemB_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_Target = { "Act2_MemC_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act2_MemC_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_Target = { "Act2_MemD_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act2_MemD_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_Disp = { "Act2_MemA_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act2_MemA_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_Disp = { "Act2_MemB_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act2_MemB_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_Disp = { "Act2_MemC_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act2_MemC_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_Disp = { "Act2_MemD_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act2_MemD_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_SE_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_SE_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_SE = { "Act3_SE", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act3_SE), Z_Construct_UEnum_ABP_200508_ECareerSEType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_SE_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_SE_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_BGM_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_BGM_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_BGM = { "Act3_BGM", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act3_BGM), Z_Construct_UEnum_ABP_200508_ECareerBGMType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_BGM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_BGM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_Camera = { "Act3_Camera", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act3_Camera), Z_Construct_UScriptStruct_FCareerEventCamera, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_Camera_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_ScreenEffect_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_ScreenEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_ScreenEffect = { "Act3_ScreenEffect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act3_ScreenEffect), Z_Construct_UEnum_ABP_200508_ECareerScreenEffect, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_ScreenEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_ScreenEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_TextID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_TextID = { "Act3_TextID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act3_TextID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_TextID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_TextID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_TalkMem_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_TalkMem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_TalkMem = { "Act3_TalkMem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act3_TalkMem), Z_Construct_UEnum_ABP_200508_ECareerEventActionMember, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_TalkMem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_TalkMem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_TalkAnim = { "Act3_MemA_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act3_MemA_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_TalkAnim = { "Act3_MemB_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act3_MemB_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_TalkAnim = { "Act3_MemC_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act3_MemC_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_TalkAnim = { "Act3_MemD_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act3_MemD_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_FacialAnim = { "Act3_MemA_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act3_MemA_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_FacialAnim = { "Act3_MemB_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act3_MemB_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_FacialAnim = { "Act3_MemC_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act3_MemC_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_FacialAnim = { "Act3_MemD_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act3_MemD_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_AnimType = { "Act3_MemA_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act3_MemA_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_AnimType = { "Act3_MemB_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act3_MemB_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_AnimType = { "Act3_MemC_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act3_MemC_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_AnimType = { "Act3_MemD_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act3_MemD_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_Yaw = { "Act3_MemA_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act3_MemA_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_Yaw = { "Act3_MemB_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act3_MemB_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_Yaw = { "Act3_MemC_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act3_MemC_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_Yaw = { "Act3_MemD_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act3_MemD_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_Yaw_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_Prop = { "Act3_MemA_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act3_MemA_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_Prop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_Prop = { "Act3_MemB_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act3_MemB_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_Prop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_Prop = { "Act3_MemC_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act3_MemC_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_Prop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_Prop = { "Act3_MemD_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act3_MemD_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_Prop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_PropAnim = { "Act3_MemA_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act3_MemA_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_PropAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_PropAnim = { "Act3_MemB_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act3_MemB_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_PropAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_PropAnim = { "Act3_MemC_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act3_MemC_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_PropAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_PropAnim = { "Act3_MemD_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act3_MemD_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_PropAnim_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_Target = { "Act3_MemA_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act3_MemA_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_Target = { "Act3_MemB_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act3_MemB_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_Target = { "Act3_MemC_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act3_MemC_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_Target = { "Act3_MemD_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act3_MemD_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_Disp = { "Act3_MemA_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act3_MemA_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_Disp = { "Act3_MemB_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act3_MemB_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_Disp = { "Act3_MemC_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act3_MemC_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_Disp = { "Act3_MemD_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act3_MemD_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_SE_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_SE_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_SE = { "Act4_SE", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act4_SE), Z_Construct_UEnum_ABP_200508_ECareerSEType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_SE_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_SE_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_BGM_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_BGM_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_BGM = { "Act4_BGM", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act4_BGM), Z_Construct_UEnum_ABP_200508_ECareerBGMType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_BGM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_BGM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_Camera = { "Act4_Camera", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act4_Camera), Z_Construct_UScriptStruct_FCareerEventCamera, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_Camera_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_ScreenEffect_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_ScreenEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_ScreenEffect = { "Act4_ScreenEffect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act4_ScreenEffect), Z_Construct_UEnum_ABP_200508_ECareerScreenEffect, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_ScreenEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_ScreenEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_TextID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_TextID = { "Act4_TextID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act4_TextID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_TextID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_TextID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_TalkMem_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_TalkMem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_TalkMem = { "Act4_TalkMem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act4_TalkMem), Z_Construct_UEnum_ABP_200508_ECareerEventActionMember, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_TalkMem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_TalkMem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_TalkAnim = { "Act4_MemA_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act4_MemA_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_TalkAnim = { "Act4_MemB_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act4_MemB_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_TalkAnim = { "Act4_MemC_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act4_MemC_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_TalkAnim = { "Act4_MemD_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act4_MemD_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_FacialAnim = { "Act4_MemA_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act4_MemA_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_FacialAnim = { "Act4_MemB_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act4_MemB_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_FacialAnim = { "Act4_MemC_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act4_MemC_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_FacialAnim = { "Act4_MemD_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act4_MemD_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_AnimType = { "Act4_MemA_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act4_MemA_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_AnimType = { "Act4_MemB_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act4_MemB_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_AnimType = { "Act4_MemC_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act4_MemC_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_AnimType = { "Act4_MemD_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act4_MemD_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_Yaw = { "Act4_MemA_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act4_MemA_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_Yaw = { "Act4_MemB_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act4_MemB_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_Yaw = { "Act4_MemC_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act4_MemC_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_Yaw = { "Act4_MemD_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act4_MemD_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_Yaw_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_Prop = { "Act4_MemA_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act4_MemA_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_Prop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_Prop = { "Act4_MemB_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act4_MemB_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_Prop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_Prop = { "Act4_MemC_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act4_MemC_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_Prop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_Prop = { "Act4_MemD_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act4_MemD_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_Prop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_PropAnim = { "Act4_MemA_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act4_MemA_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_PropAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_PropAnim = { "Act4_MemB_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act4_MemB_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_PropAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_PropAnim = { "Act4_MemC_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act4_MemC_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_PropAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_PropAnim = { "Act4_MemD_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act4_MemD_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_PropAnim_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_Target = { "Act4_MemA_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act4_MemA_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_Target = { "Act4_MemB_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act4_MemB_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_Target = { "Act4_MemC_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act4_MemC_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_Target = { "Act4_MemD_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act4_MemD_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_Disp = { "Act4_MemA_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act4_MemA_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_Disp = { "Act4_MemB_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act4_MemB_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_Disp = { "Act4_MemC_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act4_MemC_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_Disp = { "Act4_MemD_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act4_MemD_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_SE_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_SE_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_SE = { "Act5_SE", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act5_SE), Z_Construct_UEnum_ABP_200508_ECareerSEType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_SE_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_SE_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_BGM_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_BGM_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_BGM = { "Act5_BGM", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act5_BGM), Z_Construct_UEnum_ABP_200508_ECareerBGMType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_BGM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_BGM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_Camera = { "Act5_Camera", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act5_Camera), Z_Construct_UScriptStruct_FCareerEventCamera, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_Camera_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_ScreenEffect_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_ScreenEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_ScreenEffect = { "Act5_ScreenEffect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act5_ScreenEffect), Z_Construct_UEnum_ABP_200508_ECareerScreenEffect, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_ScreenEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_ScreenEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_TextID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_TextID = { "Act5_TextID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act5_TextID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_TextID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_TextID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_TalkMem_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_TalkMem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_TalkMem = { "Act5_TalkMem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act5_TalkMem), Z_Construct_UEnum_ABP_200508_ECareerEventActionMember, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_TalkMem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_TalkMem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_TalkAnim = { "Act5_MemA_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act5_MemA_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_TalkAnim = { "Act5_MemB_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act5_MemB_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_TalkAnim = { "Act5_MemC_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act5_MemC_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_TalkAnim = { "Act5_MemD_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act5_MemD_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_FacialAnim = { "Act5_MemA_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act5_MemA_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_FacialAnim = { "Act5_MemB_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act5_MemB_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_FacialAnim = { "Act5_MemC_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act5_MemC_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_FacialAnim = { "Act5_MemD_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act5_MemD_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_AnimType = { "Act5_MemA_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act5_MemA_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_AnimType = { "Act5_MemB_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act5_MemB_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_AnimType = { "Act5_MemC_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act5_MemC_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_AnimType = { "Act5_MemD_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act5_MemD_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_Yaw = { "Act5_MemA_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act5_MemA_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_Yaw = { "Act5_MemB_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act5_MemB_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_Yaw = { "Act5_MemC_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act5_MemC_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_Yaw = { "Act5_MemD_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act5_MemD_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_Yaw_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_Prop = { "Act5_MemA_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act5_MemA_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_Prop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_Prop = { "Act5_MemB_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act5_MemB_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_Prop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_Prop = { "Act5_MemC_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act5_MemC_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_Prop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_Prop = { "Act5_MemD_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act5_MemD_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_Prop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_PropAnim = { "Act5_MemA_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act5_MemA_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_PropAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_PropAnim = { "Act5_MemB_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act5_MemB_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_PropAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_PropAnim = { "Act5_MemC_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act5_MemC_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_PropAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_PropAnim = { "Act5_MemD_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act5_MemD_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_PropAnim_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_Target = { "Act5_MemA_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act5_MemA_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_Target = { "Act5_MemB_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act5_MemB_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_Target = { "Act5_MemC_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act5_MemC_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_Target = { "Act5_MemD_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act5_MemD_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_Disp = { "Act5_MemA_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act5_MemA_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_Disp = { "Act5_MemB_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act5_MemB_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_Disp = { "Act5_MemC_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act5_MemC_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_Disp = { "Act5_MemD_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act5_MemD_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_SE_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_SE_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_SE = { "Act6_SE", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act6_SE), Z_Construct_UEnum_ABP_200508_ECareerSEType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_SE_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_SE_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_BGM_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_BGM_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_BGM = { "Act6_BGM", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act6_BGM), Z_Construct_UEnum_ABP_200508_ECareerBGMType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_BGM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_BGM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_Camera = { "Act6_Camera", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act6_Camera), Z_Construct_UScriptStruct_FCareerEventCamera, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_Camera_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_ScreenEffect_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_ScreenEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_ScreenEffect = { "Act6_ScreenEffect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act6_ScreenEffect), Z_Construct_UEnum_ABP_200508_ECareerScreenEffect, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_ScreenEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_ScreenEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_TextID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_TextID = { "Act6_TextID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act6_TextID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_TextID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_TextID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_TalkMem_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_TalkMem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_TalkMem = { "Act6_TalkMem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act6_TalkMem), Z_Construct_UEnum_ABP_200508_ECareerEventActionMember, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_TalkMem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_TalkMem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_TalkAnim = { "Act6_MemA_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act6_MemA_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_TalkAnim = { "Act6_MemB_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act6_MemB_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_TalkAnim = { "Act6_MemC_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act6_MemC_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_TalkAnim = { "Act6_MemD_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act6_MemD_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_FacialAnim = { "Act6_MemA_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act6_MemA_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_FacialAnim = { "Act6_MemB_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act6_MemB_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_FacialAnim = { "Act6_MemC_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act6_MemC_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_FacialAnim = { "Act6_MemD_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act6_MemD_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_AnimType = { "Act6_MemA_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act6_MemA_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_AnimType = { "Act6_MemB_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act6_MemB_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_AnimType = { "Act6_MemC_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act6_MemC_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_AnimType = { "Act6_MemD_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act6_MemD_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_Yaw = { "Act6_MemA_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act6_MemA_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_Yaw = { "Act6_MemB_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act6_MemB_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_Yaw = { "Act6_MemC_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act6_MemC_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_Yaw = { "Act6_MemD_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act6_MemD_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_Yaw_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_Prop = { "Act6_MemA_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act6_MemA_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_Prop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_Prop = { "Act6_MemB_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act6_MemB_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_Prop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_Prop = { "Act6_MemC_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act6_MemC_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_Prop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_Prop = { "Act6_MemD_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act6_MemD_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_Prop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_PropAnim = { "Act6_MemA_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act6_MemA_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_PropAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_PropAnim = { "Act6_MemB_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act6_MemB_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_PropAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_PropAnim = { "Act6_MemC_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act6_MemC_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_PropAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_PropAnim = { "Act6_MemD_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act6_MemD_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_PropAnim_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_Target = { "Act6_MemA_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act6_MemA_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_Target = { "Act6_MemB_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act6_MemB_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_Target = { "Act6_MemC_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act6_MemC_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_Target = { "Act6_MemD_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act6_MemD_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_Disp = { "Act6_MemA_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act6_MemA_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_Disp = { "Act6_MemB_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act6_MemB_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_Disp = { "Act6_MemC_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act6_MemC_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_Disp = { "Act6_MemD_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act6_MemD_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_SE_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_SE_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_SE = { "Act7_SE", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act7_SE), Z_Construct_UEnum_ABP_200508_ECareerSEType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_SE_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_SE_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_BGM_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_BGM_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_BGM = { "Act7_BGM", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act7_BGM), Z_Construct_UEnum_ABP_200508_ECareerBGMType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_BGM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_BGM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_Camera = { "Act7_Camera", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act7_Camera), Z_Construct_UScriptStruct_FCareerEventCamera, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_Camera_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_ScreenEffect_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_ScreenEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_ScreenEffect = { "Act7_ScreenEffect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act7_ScreenEffect), Z_Construct_UEnum_ABP_200508_ECareerScreenEffect, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_ScreenEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_ScreenEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_TextID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_TextID = { "Act7_TextID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act7_TextID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_TextID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_TextID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_TalkMem_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_TalkMem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_TalkMem = { "Act7_TalkMem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act7_TalkMem), Z_Construct_UEnum_ABP_200508_ECareerEventActionMember, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_TalkMem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_TalkMem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_TalkAnim = { "Act7_MemA_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act7_MemA_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_TalkAnim = { "Act7_MemB_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act7_MemB_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_TalkAnim = { "Act7_MemC_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act7_MemC_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_TalkAnim = { "Act7_MemD_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act7_MemD_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_FacialAnim = { "Act7_MemA_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act7_MemA_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_FacialAnim = { "Act7_MemB_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act7_MemB_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_FacialAnim = { "Act7_MemC_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act7_MemC_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_FacialAnim = { "Act7_MemD_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act7_MemD_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_AnimType = { "Act7_MemA_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act7_MemA_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_AnimType = { "Act7_MemB_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act7_MemB_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_AnimType = { "Act7_MemC_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act7_MemC_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_AnimType = { "Act7_MemD_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act7_MemD_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_Yaw = { "Act7_MemA_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act7_MemA_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_Yaw = { "Act7_MemB_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act7_MemB_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_Yaw = { "Act7_MemC_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act7_MemC_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_Yaw = { "Act7_MemD_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act7_MemD_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_Yaw_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_Prop = { "Act7_MemA_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act7_MemA_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_Prop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_Prop = { "Act7_MemB_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act7_MemB_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_Prop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_Prop = { "Act7_MemC_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act7_MemC_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_Prop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_Prop = { "Act7_MemD_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act7_MemD_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_Prop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_PropAnim = { "Act7_MemA_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act7_MemA_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_PropAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_PropAnim = { "Act7_MemB_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act7_MemB_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_PropAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_PropAnim = { "Act7_MemC_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act7_MemC_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_PropAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_PropAnim = { "Act7_MemD_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act7_MemD_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_PropAnim_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_Target = { "Act7_MemA_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act7_MemA_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_Target = { "Act7_MemB_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act7_MemB_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_Target = { "Act7_MemC_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act7_MemC_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_Target = { "Act7_MemD_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act7_MemD_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_Disp = { "Act7_MemA_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act7_MemA_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_Disp = { "Act7_MemB_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act7_MemB_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_Disp = { "Act7_MemC_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act7_MemC_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_Disp = { "Act7_MemD_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act7_MemD_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_SE_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_SE_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_SE = { "Act8_SE", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act8_SE), Z_Construct_UEnum_ABP_200508_ECareerSEType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_SE_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_SE_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_BGM_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_BGM_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_BGM = { "Act8_BGM", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act8_BGM), Z_Construct_UEnum_ABP_200508_ECareerBGMType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_BGM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_BGM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_Camera = { "Act8_Camera", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act8_Camera), Z_Construct_UScriptStruct_FCareerEventCamera, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_Camera_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_ScreenEffect_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_ScreenEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_ScreenEffect = { "Act8_ScreenEffect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act8_ScreenEffect), Z_Construct_UEnum_ABP_200508_ECareerScreenEffect, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_ScreenEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_ScreenEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_TextID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_TextID = { "Act8_TextID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act8_TextID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_TextID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_TextID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_TalkMem_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_TalkMem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_TalkMem = { "Act8_TalkMem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act8_TalkMem), Z_Construct_UEnum_ABP_200508_ECareerEventActionMember, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_TalkMem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_TalkMem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_TalkAnim = { "Act8_MemA_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act8_MemA_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_TalkAnim = { "Act8_MemB_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act8_MemB_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_TalkAnim = { "Act8_MemC_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act8_MemC_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_TalkAnim = { "Act8_MemD_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act8_MemD_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_FacialAnim = { "Act8_MemA_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act8_MemA_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_FacialAnim = { "Act8_MemB_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act8_MemB_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_FacialAnim = { "Act8_MemC_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act8_MemC_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_FacialAnim = { "Act8_MemD_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act8_MemD_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_AnimType = { "Act8_MemA_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act8_MemA_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_AnimType = { "Act8_MemB_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act8_MemB_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_AnimType = { "Act8_MemC_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act8_MemC_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_AnimType = { "Act8_MemD_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act8_MemD_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_Yaw = { "Act8_MemA_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act8_MemA_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_Yaw = { "Act8_MemB_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act8_MemB_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_Yaw = { "Act8_MemC_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act8_MemC_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_Yaw = { "Act8_MemD_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act8_MemD_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_Yaw_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_Prop = { "Act8_MemA_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act8_MemA_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_Prop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_Prop = { "Act8_MemB_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act8_MemB_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_Prop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_Prop = { "Act8_MemC_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act8_MemC_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_Prop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_Prop = { "Act8_MemD_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act8_MemD_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_Prop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_PropAnim = { "Act8_MemA_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act8_MemA_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_PropAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_PropAnim = { "Act8_MemB_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act8_MemB_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_PropAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_PropAnim = { "Act8_MemC_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act8_MemC_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_PropAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_PropAnim = { "Act8_MemD_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act8_MemD_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_PropAnim_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_Target = { "Act8_MemA_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act8_MemA_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_Target = { "Act8_MemB_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act8_MemB_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_Target = { "Act8_MemC_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act8_MemC_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_Target = { "Act8_MemD_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act8_MemD_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_Disp = { "Act8_MemA_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act8_MemA_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_Disp = { "Act8_MemB_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act8_MemB_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_Disp = { "Act8_MemC_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act8_MemC_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_Disp = { "Act8_MemD_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act8_MemD_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_SE_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_SE_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_SE = { "Act9_SE", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act9_SE), Z_Construct_UEnum_ABP_200508_ECareerSEType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_SE_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_SE_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_BGM_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_BGM_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_BGM = { "Act9_BGM", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act9_BGM), Z_Construct_UEnum_ABP_200508_ECareerBGMType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_BGM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_BGM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_Camera = { "Act9_Camera", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act9_Camera), Z_Construct_UScriptStruct_FCareerEventCamera, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_Camera_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_ScreenEffect_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_ScreenEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_ScreenEffect = { "Act9_ScreenEffect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act9_ScreenEffect), Z_Construct_UEnum_ABP_200508_ECareerScreenEffect, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_ScreenEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_ScreenEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_TextID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_TextID = { "Act9_TextID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act9_TextID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_TextID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_TextID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_TalkMem_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_TalkMem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_TalkMem = { "Act9_TalkMem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act9_TalkMem), Z_Construct_UEnum_ABP_200508_ECareerEventActionMember, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_TalkMem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_TalkMem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_TalkAnim = { "Act9_MemA_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act9_MemA_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_TalkAnim = { "Act9_MemB_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act9_MemB_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_TalkAnim = { "Act9_MemC_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act9_MemC_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_TalkAnim = { "Act9_MemD_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act9_MemD_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_FacialAnim = { "Act9_MemA_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act9_MemA_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_FacialAnim = { "Act9_MemB_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act9_MemB_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_FacialAnim = { "Act9_MemC_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act9_MemC_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_FacialAnim = { "Act9_MemD_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act9_MemD_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_AnimType = { "Act9_MemA_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act9_MemA_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_AnimType = { "Act9_MemB_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act9_MemB_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_AnimType = { "Act9_MemC_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act9_MemC_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_AnimType = { "Act9_MemD_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act9_MemD_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_Yaw = { "Act9_MemA_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act9_MemA_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_Yaw = { "Act9_MemB_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act9_MemB_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_Yaw = { "Act9_MemC_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act9_MemC_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_Yaw = { "Act9_MemD_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act9_MemD_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_Yaw_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_Prop = { "Act9_MemA_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act9_MemA_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_Prop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_Prop = { "Act9_MemB_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act9_MemB_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_Prop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_Prop = { "Act9_MemC_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act9_MemC_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_Prop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_Prop = { "Act9_MemD_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act9_MemD_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_Prop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_PropAnim = { "Act9_MemA_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act9_MemA_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_PropAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_PropAnim = { "Act9_MemB_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act9_MemB_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_PropAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_PropAnim = { "Act9_MemC_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act9_MemC_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_PropAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_PropAnim = { "Act9_MemD_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act9_MemD_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_PropAnim_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_Target = { "Act9_MemA_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act9_MemA_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_Target = { "Act9_MemB_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act9_MemB_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_Target = { "Act9_MemC_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act9_MemC_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_Target = { "Act9_MemD_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act9_MemD_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_Disp = { "Act9_MemA_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act9_MemA_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_Disp = { "Act9_MemB_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act9_MemB_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_Disp = { "Act9_MemC_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act9_MemC_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_Disp = { "Act9_MemD_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, Act9_MemD_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_Disp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_SelectTitle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_SelectTitle = { "SelectTitle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, SelectTitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_SelectTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_SelectTitle_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_SaveSelectionResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_SaveSelectionResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_SaveSelectionResult = { "SaveSelectionResult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, SaveSelectionResult), Z_Construct_UEnum_ABP_200508_ECareerChoicesSelectionResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_SaveSelectionResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_SaveSelectionResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_SelectA_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_SelectA = { "SelectA", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, SelectA), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_SelectA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_SelectA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_SelectB_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_SelectB = { "SelectB", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, SelectB), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_SelectB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_SelectB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_SelectC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_SelectC = { "SelectC", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, SelectC), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_SelectC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_SelectC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_SelectD_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_SelectD = { "SelectD", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, SelectD), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_SelectD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_SelectD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_DM_A_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_DM_A = { "DM_A", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, DM_A), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_DM_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_DM_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_DM_B_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_DM_B = { "DM_B", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, DM_B), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_DM_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_DM_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_DM_C_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_DM_C = { "DM_C", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, DM_C), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_DM_C_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_DM_C_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_DM_D_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_DM_D = { "DM_D", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, DM_D), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_DM_D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_DM_D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_NextMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_NextMessage = { "NextMessage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, NextMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_NextMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_NextMessage_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_EventResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_EventResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventMessage" },
		{ "ModuleRelativePath", "Public/CareerEventMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_EventResult = { "EventResult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventMessage, EventResult), Z_Construct_UEnum_ABP_200508_ECareerStoryResultCondition, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_EventResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_EventResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerEventMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Title_TextID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_ScreenEffect_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_ScreenEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemA_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemB_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemC_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_MemD_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_SE_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_SE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_BGM_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_BGM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_ScreenEffect_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_ScreenEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_TextID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_TalkMem_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_TalkMem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemA_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemB_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemC_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act0_MemD_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_SE_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_SE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_BGM_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_BGM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_ScreenEffect_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_ScreenEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_TextID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_TalkMem_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_TalkMem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemA_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemB_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemC_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act1_MemD_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_SE_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_SE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_BGM_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_BGM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_ScreenEffect_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_ScreenEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_TextID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_TalkMem_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_TalkMem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemA_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemB_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemC_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act2_MemD_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_SE_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_SE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_BGM_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_BGM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_ScreenEffect_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_ScreenEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_TextID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_TalkMem_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_TalkMem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemA_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemB_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemC_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act3_MemD_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_SE_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_SE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_BGM_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_BGM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_ScreenEffect_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_ScreenEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_TextID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_TalkMem_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_TalkMem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemA_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemB_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemC_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act4_MemD_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_SE_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_SE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_BGM_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_BGM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_ScreenEffect_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_ScreenEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_TextID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_TalkMem_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_TalkMem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemA_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemB_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemC_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act5_MemD_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_SE_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_SE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_BGM_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_BGM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_ScreenEffect_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_ScreenEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_TextID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_TalkMem_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_TalkMem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemA_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemB_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemC_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act6_MemD_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_SE_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_SE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_BGM_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_BGM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_ScreenEffect_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_ScreenEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_TextID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_TalkMem_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_TalkMem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemA_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemB_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemC_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act7_MemD_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_SE_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_SE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_BGM_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_BGM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_ScreenEffect_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_ScreenEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_TextID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_TalkMem_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_TalkMem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemA_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemB_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemC_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act8_MemD_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_SE_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_SE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_BGM_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_BGM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_ScreenEffect_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_ScreenEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_TextID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_TalkMem_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_TalkMem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemA_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemB_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemC_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_Act9_MemD_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_SelectTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_SaveSelectionResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_SaveSelectionResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_SelectA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_SelectB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_SelectC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_SelectD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_DM_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_DM_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_DM_C,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_DM_D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_NextMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_EventResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventMessage_Statics::NewProp_EventResult,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerEventMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerEventMessage",
		sizeof(FCareerEventMessage),
		alignof(FCareerEventMessage),
		Z_Construct_UScriptStruct_FCareerEventMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerEventMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerEventMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerEventMessage"), sizeof(FCareerEventMessage), Get_Z_Construct_UScriptStruct_FCareerEventMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerEventMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerEventMessage_Hash() { return 3307658870U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
